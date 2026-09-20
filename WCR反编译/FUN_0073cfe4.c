// FUN_0073cfe4 @ 0073cfe4

bool FUN_0073cfe4(void)

{
  bool bVar1;
  char *pcVar2;
  
  pcVar2 = "CContactMgr";
  _objc_getClass();
  bVar1 = false;
  if (pcVar2 != (char *)0x0) {
    pcVar2 = "CMessageMgr";
    _objc_getClass();
    bVar1 = false;
    if (pcVar2 != (char *)0x0) {
      pcVar2 = "MMNewSessionMgr";
      _objc_getClass();
      bVar1 = pcVar2 != (char *)0x0;
    }
  }
  return bVar1;
}

