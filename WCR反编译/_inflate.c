// _inflate @ 0221f2e8

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _inflate(z_streamp strm,int flush)

{
  int iVar1;
  
  iVar1 = (int)strm;
                    /* WARNING: Could not recover jumptable at 0x0221f2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__inflate_0264d140)(iVar1,flush);
  return iVar1;
}

