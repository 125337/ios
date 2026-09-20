// _strncmp @ 0221f840

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _strncmp(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__strncmp_0264d4d0)();
  return iVar1;
}

