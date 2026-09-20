// FUN_003c4ed4 @ 003c4ed4

void FUN_003c4ed4(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  
  pcVar1 = "MMNewSessionMgr";
  _objc_getClass();
  pcVar2 = &cf_updateSessions_NotifyUsrName_;
  _NSSelectorFromString();
  if (pcVar1 != (char *)0x0) {
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_instancesRespondToSelector__0269da90,pcVar2);
    if (((ulong)pcVar3 & 1) != 0) {
      _MSHookMessageEx(pcVar1,pcVar2,FUN_003c4f68,&DAT_028ca210);
    }
  }
  return;
}

