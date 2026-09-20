// FUN_014fa914 @ 014fa914

void FUN_014fa914(void)

{
  char *pcVar1;
  
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_014fa97c,&DAT_028e3708);
  }
  return;
}

