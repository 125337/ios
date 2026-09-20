// _snprintf @ 0221f804

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _snprintf(char *param_1,size_t param_2,char *param_3,...)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f80c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__snprintf_0264d4a8)();
  return iVar1;
}

