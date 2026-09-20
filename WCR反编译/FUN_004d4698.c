// FUN_004d4698 @ 004d4698

void FUN_004d4698(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_1028 [1024];
  undefined1 auStack_c28 [1024];
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_004d4ba4,&DAT_028cacf8);
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_004d4ed4,&DAT_028cad00);
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsgForSession_MsgWrap__0269d598,FUN_004d5044,&DAT_028cad08
                  );
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsgForSession_MsgWrap__0269d5a0,FUN_004d5158,&DAT_028cad10
                  );
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsgListForSession_Noti_0269d5a8,FUN_004d5280,&DAT_028cad18
                  );
  pcVar1 = "QuickReplyMsgMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_canShowPushForContact_msgWrap__026a0c68,FUN_004d5a44,&DAT_028cad20);
  pcVar1 = "ContactSettingViewController";
  _objc_getClass();
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleMessageBlockContact__026a0af8,FUN_004d5bd0);
  pcVar1 = "ContactInfoViewController";
  _objc_getClass();
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleMessageBlockContact__026a0af8,FUN_004d5c44);
  pcVar1 = "AddContactToChatRoomViewController";
  _objc_getClass();
  auStack_c28[0] = 0x76;
  auStack_c28[1] = 0x40;
  auStack_c28[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleMessageBlockContact__026a0af8,FUN_004d5cb8);
  pcVar1 = "ChatRoomInfoViewController";
  _objc_getClass();
  auStack_1028[0] = 0x76;
  auStack_1028[1] = 0x40;
  auStack_1028[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleMessageBlockGroup__026a4190,FUN_004d5d2c);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

