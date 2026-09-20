// _pthread_equal @ 0221f720

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_equal(pthread_t param_1,pthread_t param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_equal_0264d410)();
  return iVar1;
}

