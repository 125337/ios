// _abort @ 0221eeec

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _abort(void)

{
                    /* WARNING: Could not recover jumptable at 0x0221eef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__abort_0264ce98)();
  return;
}

