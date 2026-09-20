// _getpid @ 0221f2b8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pid_t _getpid(void)

{
  pid_t in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x0221f2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__getpid_0264d120)();
  return in_w0;
}

