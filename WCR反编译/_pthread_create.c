// _pthread_create @ 0221f714

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_create(pthread_t *param_1,pthread_attr_t *param_2,void **param_3,void *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_create_0264d408)();
  return iVar1;
}

