// _sysctlbyname @ 0221fa74

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sysctlbyname(char *param_1,void *param_2,size_t *param_3,void *param_4,size_t param_5)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221fa7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctlbyname_0264d648)();
  return iVar1;
}

