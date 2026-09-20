// _pthread_attr_setdetachstate @ 0221f708

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_attr_setdetachstate(pthread_attr_t *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_attr_setdetachstate_0264d400)(iVar1,param_2);
  return iVar1;
}

