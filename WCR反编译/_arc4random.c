// _arc4random @ 0221ef04

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

u_int32_t _arc4random(void)

{
  u_int32_t in_w0;
  
                    /* WARNING: Could not recover jumptable at 0x0221ef0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__arc4random_0264cea8)();
  return in_w0;
}

