// _fprintf @ 0221f270

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fprintf(FILE *param_1,char *param_2,...)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fprintf_0264d0f0)();
  return iVar1;
}

