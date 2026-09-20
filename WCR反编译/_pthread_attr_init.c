// _pthread_attr_init @ 0221f6fc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_attr_init(pthread_attr_t *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_attr_init_0264d3f8)();
  return iVar1;
}

