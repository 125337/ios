// _backtrace @ 0221ef40

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _backtrace(void **param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221ef48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__backtrace_0264ced0)(iVar1,param_2);
  return iVar1;
}

