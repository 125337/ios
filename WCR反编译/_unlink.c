// _unlink @ 0221fab0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _unlink(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221fab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__unlink_0264d670)();
  return iVar1;
}

