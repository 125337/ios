// FUN_003758b0 @ 003758b0

void FUN_003758b0(void)

{
  char *pcVar1;
  
  if ((DAT_028ca1f0 & 1) == 0) {
    pcVar1 = "MainSessionMgr";
    _objc_getClass();
    if (pcVar1 != (char *)0x0) {
      DAT_028ca1f0 = 1;
      FUN_003c28dc(pcVar1,PTR_s_setAllTopSessions__026a2fe8,FUN_003c3fb8,&DAT_028ca1f8);
      FUN_003c28dc(pcVar1,PTR_s_setTopSessions__026a2ff0,FUN_003c4164,&DAT_028ca200);
    }
  }
  return;
}

