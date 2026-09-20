// _mach_thread_self @ 0221f36c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

mach_port_t _mach_thread_self(void)

{
  mach_port_t in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x0221f374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_thread_self_0264d198)();
  return in_w0;
}

