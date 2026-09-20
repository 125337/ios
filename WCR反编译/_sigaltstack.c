// _sigaltstack @ 0221f7d4

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _sigaltstack(stack_t *param_1,stack_t *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__sigaltstack_0264d488)();
  return iVar1;
}

