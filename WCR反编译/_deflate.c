// _deflate @ 0221f078

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _deflate(z_streamp strm,int flush)

{
  int iVar1;
  
  iVar1 = (int)strm;
                    /* WARNING: Could not recover jumptable at 0x0221f080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__deflate_0264cfa0)(iVar1,flush);
  return iVar1;
}

