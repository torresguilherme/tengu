use std::{u8, u16};

macro_rules! statusFlag
{
        /*
                status register flag bits:
                0: carry
                1: zero
                2: interrupt
                3: decimal
                4: software interrupt (BRK)
                5: doesn't exist, is set to logical 1 at all times
                6: overflow
                7: negative
        */
        (type: u8) =>
        {
                status & (1 << type)
        }
}

macro_rules! setFlag
{
        (type: u8) =>
        {
                status |= (1 << type)
        }
}

// CPU Ricoh RP2A03, based on MOS6502
pub struct CPU
{
        // program counter
        pub pc: u16,
        // general purpose registers
        pub a: u8, // accumulator
        pub x: u8,
        pub y: u8,

        pub sp: u8, //stack pointer
        pub status: u8 // status register
}

impl CPU
{
        fn wrap(oldAddr: u16, newAddr: u16) -> u16
        {
                (oldAddr & 0xff00) + newAddr
        }
        // stack functions
        fn push(&mut self)
        {
        }

        fn pop(&mut self)
        {
        }
}