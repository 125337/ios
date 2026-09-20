// _stat @ 0221f810

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _stat(char *param_1,stat *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__stat_0264d4b0)();
  return iVar1;
}

