// FUN_0109a730 @ 0109a730

void FUN_0109a730(void)

{
  char *pcVar1;
  
  pcVar1 = "/usr/lib/libsqlite3.dylib";
  _dlopen("/usr/lib/libsqlite3.dylib",2);
  DAT_028e32d0 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
    _dlopen(0,0xfffffffe);
    DAT_028e32d0 = pcVar1;
  }
  return;
}

