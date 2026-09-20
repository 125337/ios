// _inflateInit2_ @ 0221f300

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _inflateInit2_(z_streamp strm,int windowBits,char *version,int stream_size)

{
  int iVar1;
  
  iVar1 = (int)strm;
                    /* WARNING: Could not recover jumptable at 0x0221f308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__inflateInit2__0264d150)(iVar1,windowBits,version,stream_size);
  return iVar1;
}

