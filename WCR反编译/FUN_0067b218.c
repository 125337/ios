// FUN_0067b218 @ 0067b218

void FUN_0067b218(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MMPageSheetAdapter";
  _objc_getClass();
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_paymentSubtitleEditingChange_026a6410,FUN_0067b540);
  pcVar1 = "BaseMsgContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessage__0269d028,FUN_0067b840,&DAT_028cbce8);
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessage_replyingMessage__0269d030,FUN_0067b92c,&DAT_028cbcf0
                  );
  pcVar1 = "MMGrowTextView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_textViewDidChange__026a3400,FUN_0067ba7c,&DAT_028cbcf8);
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AddAppMsg_MsgWrap_Data_Scene__026a6418,FUN_0067c380,&DAT_028cbd00);
  _MSHookMessageEx(pcVar1,PTR_s_AddAppMsg_MsgWrap_DataPath_Scene_026a6420,FUN_0067c570,&DAT_028cbd08
                  );
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_0067c6b4,&DAT_028cbd10);
  pcVar1 = "WAJSEventHandler_createRequestTask";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_handleJSEvent__026a1318,FUN_0067c88c,&DAT_028cbd18);
  _MSHookMessageEx(pcVar1,PTR_s_innerHandleJSEvent_isForceCellul_026a6428,FUN_0067c91c,&DAT_028cbd20
                  );
  pcVar1 = "WAJSEventHandler_operateWXData";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_handleJSEvent__026a1318,FUN_0067c9c0,&DAT_028cbd28);
  pcVar1 = "NSURLSession";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_dataTaskWithRequest_completionHa_026a5f60,FUN_0067ca50,&DAT_028cbd30
                  );
  _MSHookMessageEx(pcVar1,PTR_s_dataTaskWithRequest__026a6430,FUN_0067cd78,&DAT_028cbd38);
  _MSHookMessageEx(pcVar1,PTR_s_uploadTaskWithRequest_fromData_c_026a6438,FUN_0067ce78,&DAT_028cbd40
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

