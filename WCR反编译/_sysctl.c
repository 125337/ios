// _sysctl @ 0221fa68

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sysctl(int *param_1,u_int param_2,void *param_3,size_t *param_4,void *param_5,size_t param_6)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sysctl_0264d640)(iVar1,param_2);
  return iVar1;
}

