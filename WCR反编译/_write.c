// _write @ 0221fae0

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ssize_t _write(int param_1,void *param_2,size_t param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(uint)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221fae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__write_0264d690)();
  return uVar1;
}

