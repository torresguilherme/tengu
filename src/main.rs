extern crate sdl2;
mod cpu;

fn main()
{
    let mut m_cpu = cpu::CPU {pc: 0xc000, a:0, x:0, y:0, sp:0, status: 0x20};
    println!("{}", m_cpu.pc);
}
