// _pthread_key_create @ 0221f738

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_key_create(pthread_key_t *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_key_create_0264d420)();
  return iVar1;
}

