// _fseeko @ 0221f294

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fseeko(FILE *param_1,off_t param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__fseeko_0264d108)(iVar1,param_2,param_3);
  return iVar1;
}

