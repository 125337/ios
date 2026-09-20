// _deflateEnd @ 0221f084

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _deflateEnd(z_streamp strm)

{
  int iVar1;
  
  iVar1 = (int)strm;
                    /* WARNING: Could not recover jumptable at 0x0221f08c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__deflateEnd_0264cfa8)();
  return iVar1;
}

