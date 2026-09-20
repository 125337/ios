// FUN_0004b678 @ 0004b678

void FUN_0004b678(void)

{
  char *pcVar1;
  
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_0004b760,&DAT_028c7b80);
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_0004b828,&DAT_028c7b88);
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsgForSession_MsgWrap__0269d598,FUN_0004b8f0,&DAT_028c7b90
                  );
  pcVar1 = "MsgRecordDetailViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0004b9b8,&DAT_028c7b98);
  pcVar1 = "MsgMediaGroupMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_receiveMediaGroupMessages__0269d948,FUN_0004ba84,&DAT_028c7ba0);
  return;
}

