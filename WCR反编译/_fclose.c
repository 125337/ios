// _fclose @ 0221f234

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fclose(FILE *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fclose_0264d0c8)();
  return iVar1;
}

