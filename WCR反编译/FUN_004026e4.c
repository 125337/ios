// FUN_004026e4 @ 004026e4

void FUN_004026e4(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_00402948(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_004029f0,&DAT_028ca6a0);
    FUN_00402948(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_00402c84,&DAT_028ca6a8);
    pcVar2 = &cf_AddLocalMsg_MsgWrap_fixTime_NewMsgArriveNotify_;
    _NSSelectorFromString();
    FUN_00402948(pcVar1,pcVar2,FUN_00403008,&DAT_028ca6b0);
  }
  pcVar1 = "MMNewSessionMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_00402948(pcVar1,PTR_s_OnAddMsg_MsgWrap__0269e630,FUN_004033f4,&DAT_028ca6b8);
  }
  pcVar1 = "SendPatMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_addPatWrap_toChat_newXMLMessageWrap_index_;
    _NSSelectorFromString();
    FUN_00402948(pcVar1,pcVar2,FUN_0040373c,&DAT_028ca6c0);
  }
  pcVar1 = "SayHelloDataLogic";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_contactAddContactOk_;
    _NSSelectorFromString(&cf_contactAddContactOk_);
    FUN_00402948(pcVar1,pcVar2,FUN_004039c4,&DAT_028ca6c8);
  }
  pcVar1 = "FriendAsistSessionMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_OnAddMsgForSpecialSession_MsgList_;
    _NSSelectorFromString(&cf_OnAddMsgForSpecialSession_MsgList_);
    FUN_00402948(pcVar1,pcVar2,FUN_00403aa0,&DAT_028ca6d0);
    pcVar2 = &cf_OnMsgNotAddDBSession_MsgList_;
    _NSSelectorFromString(&cf_OnMsgNotAddDBSession_MsgList_);
    FUN_00402948(pcVar1,pcVar2,FUN_00403c60,&DAT_028ca6d8);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  return;
}

