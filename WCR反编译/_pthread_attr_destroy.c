// _pthread_attr_destroy @ 0221f6f0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_attr_destroy(pthread_attr_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_attr_destroy_0264d3f0)();
  return iVar1;
}

