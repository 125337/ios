// _pthread_setspecific @ 0221f768

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_setspecific(pthread_key_t param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_setspecific_0264d440)();
  return iVar1;
}

