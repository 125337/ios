// _fflush @ 0221f24c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fflush(FILE *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fflush_0264d0d8)();
  return iVar1;
}

