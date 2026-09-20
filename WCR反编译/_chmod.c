// _chmod @ 0221ef94

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _chmod(char *param_1,mode_t param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221ef9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__chmod_0264cf08)(iVar1,param_2);
  return iVar1;
}

