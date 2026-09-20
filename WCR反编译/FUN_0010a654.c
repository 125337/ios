// FUN_0010a654 @ 0010a654

void FUN_0010a654(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  
  FUN_0010a814();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_0010b8a0(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_0010b940,&DAT_028c8578);
    FUN_0010b8a0(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_0010bb20,&DAT_028c8580);
  }
  pcVar1 = "MMNewSessionMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_0010b8a0(pcVar1,PTR_s_OnAddMsg_MsgWrap__0269e630,FUN_0010bd00,&DAT_028c8588);
  }
  pcVar1 = "CContactMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_setContact_chatRoomMemList_isNotify_;
    _NSSelectorFromString();
    if (pcVar2 != (cfstringStruct *)0x0) {
      FUN_0010b8a0(pcVar1,pcVar2,FUN_0010bee0,&DAT_028c8590);
    }
    pcVar2 = &cf_callOnModifyExt_;
    _NSSelectorFromString();
    if (pcVar2 != (cfstringStruct *)0x0) {
      FUN_0010b8a0(pcVar1,pcVar2,FUN_0010c3a4,&DAT_028c8598);
    }
  }
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_0010b8a0(pcVar1,PTR_s_tagLink_messageWrap__0269ee20,FUN_0010cb74,&DAT_028c85a0);
  }
  return;
}

