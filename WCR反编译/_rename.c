// _rename @ 0221f78c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__rename_0264d458)();
  return iVar1;
}

