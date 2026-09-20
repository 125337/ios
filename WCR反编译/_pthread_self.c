// _pthread_self @ 0221f750

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t _pthread_self(void)

{
  pthread_t in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x0221f758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_self_0264d430)();
  return in_x0;
}

