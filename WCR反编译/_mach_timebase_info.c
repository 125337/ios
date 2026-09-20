// _mach_timebase_info @ 0221f378

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

kern_return_t _mach_timebase_info(mach_timebase_info_t info)

{
  kern_return_t kVar1;
  
  kVar1 = (kern_return_t)info;
                    /* WARNING: Could not recover jumptable at 0x0221f380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__mach_timebase_info_0264d1a0)();
  return kVar1;
}

