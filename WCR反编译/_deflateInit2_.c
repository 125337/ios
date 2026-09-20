// _deflateInit2_ @ 0221f090

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _deflateInit2_(z_streamp strm,int level,int method,int windowBits,int memLevel,int strategy,
                  char *version,int stream_size)

{
  int iVar1;
  
  iVar1 = (int)strm;
                    /* WARNING: Could not recover jumptable at 0x0221f098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__deflateInit2__0264cfb0)
            (iVar1,level,method,windowBits,memLevel,strategy,version,stream_size);
  return iVar1;
}

