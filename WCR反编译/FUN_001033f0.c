// FUN_001033f0 @ 001033f0

void FUN_001033f0(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_0010355c(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_001035fc,&DAT_028c8478);
    FUN_0010355c(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_001037c4,&DAT_028c8480);
  }
  pcVar1 = "CContactMgr";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = &cf_setContact_chatRoomMemList_isNotify_;
    _NSSelectorFromString();
    if (pcVar2 != (cfstringStruct *)0x0) {
      FUN_0010355c(pcVar1,pcVar2,FUN_00103950,&DAT_028c8488);
    }
  }
  pcVar1 = "WeixinContactInfoAssist";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_00104048(pcVar1);
    FUN_0010355c(pcVar1,PTR_s_initData_0269ec58,FUN_001040b4,&DAT_028c8490);
  }
  pcVar1 = "OpenIMContactInfoAssist";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_00104048(pcVar1);
    FUN_0010355c(pcVar1,PTR_s_initData_0269ec58,FUN_00104158,&DAT_028c8498);
  }
  return;
}

