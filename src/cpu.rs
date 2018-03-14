use std::{u8, u16, u32, i8};

// CPU Ricoh RP2A03, based on MOS6502
pub struct CPU
{
        pub pc: u16,
        pub a: u8,
        pub b: u8,
        pub x: u8,
        pub y: u8,
        pub status: u8
}

impl CPU
{
        fn wrap(oldAddr: u16, newAddr: u16) -> u16
        {
                (oldAddr & 0xff00) + newAddr
        }
        // stack functions
        fn push(&self)
        {
        }

        fn pop(&self)
        {
        }
}