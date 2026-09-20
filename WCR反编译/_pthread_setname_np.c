// _pthread_setname_np @ 0221f75c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _pthread_setname_np(char *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__pthread_setname_np_0264d438)();
  return iVar1;
}

