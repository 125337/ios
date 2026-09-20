// _setvbuf @ 0221f7bc

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _setvbuf(FILE *param_1,char *param_2,int param_3,size_t param_4)

{
  int iVar1;
  
  iVar1 = (int)param_1;
                    /* WARNING: Could not recover jumptable at 0x0221f7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__setvbuf_0264d478)(iVar1,param_2,param_3);
  return iVar1;
}

