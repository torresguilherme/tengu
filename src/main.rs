extern crate sdl2;
use std::io;
mod cpu;

fn main()
{
    let mut m_cpu = cpu::CPU {pc: 0xc000, a:0, b:0, x:0, y:0, status:0};
    println!("{}", m_cpu.pc);
}
