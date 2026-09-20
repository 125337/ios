// _memcmp @ 0221f39c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcmp_0264d1b8)();
  return iVar1;
}

