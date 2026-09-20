// _uname @ 0221faa4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _uname(utsname *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221faac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__uname_0264d668)();
  return iVar1;
}

