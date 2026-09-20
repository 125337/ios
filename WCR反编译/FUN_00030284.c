// FUN_00030284 @ 00030284

void FUN_00030284(void)

{
  char *pcVar1;
  
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_0003041c,&DAT_028c7a88);
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_000304e4,&DAT_028c7a90);
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsgForSession_MsgWrap__0269d598,FUN_000305ac,&DAT_028c7a98
                  );
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsgForSession_MsgWrap__0269d5a0,FUN_00030674,&DAT_028c7aa0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsgListForSession_Noti_0269d5a8,FUN_00030750,&DAT_028c7aa8
                  );
  pcVar1 = "WCPayReveiverControlTransferControlLogic";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithData__0269d5b0,FUN_0003089c,&DAT_028c7ab0);
  _MSHookMessageEx(pcVar1,PTR_s_startLogic_0269d5b8,FUN_000309e8,&DAT_028c7ab8);
  _MSHookMessageEx(pcVar1,PTR_s_OnCheckTransferMoneyStatus_Error_0269d5c0,FUN_00030b10,&DAT_028c7ac0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onWCPayUnionTransferQueryCgiResp_0269d5c8,FUN_00030ca0,&DAT_028c7ac8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_OnConfirmTransferMoney_Error__0269d5d0,FUN_00030d2c,&DAT_028c7ad0);
  _MSHookMessageEx(pcVar1,PTR_s_onWCPayUnionTransferConfirmCgiRe_0269d5d8,FUN_00030f70,&DAT_028c7ad8
                  );
  return;
}

