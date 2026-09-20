// FUN_00018a60 @ 00018a60

void FUN_00018a60(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_2828 [1024];
  undefined1 uStack_2428;
  undefined1 uStack_2427;
  undefined1 uStack_2426;
  undefined1 uStack_2425;
  undefined1 auStack_2028 [1024];
  undefined1 auStack_1c28 [1024];
  undefined1 uStack_1828;
  undefined1 uStack_1827;
  undefined1 uStack_1826;
  undefined1 uStack_1825;
  undefined1 auStack_1428 [1024];
  undefined1 auStack_1028 [1024];
  undefined1 uStack_c28;
  undefined1 uStack_c27;
  undefined1 uStack_c26;
  undefined1 uStack_c25;
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessageToolView__0269d020,FUN_000194a0,&DAT_028c7a10);
  pcVar1 = "BaseMsgContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessage__0269d028,FUN_00019714,&DAT_028c7a18);
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessage_replyingMessage__0269d030,FUN_000197f8,&DAT_028c7a20
                  );
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_000199d8,&DAT_028c7a28);
  _MSHookMessageEx(pcVar1,PTR_s_AddMsg_MsgWrap__0269d040,FUN_00019aec,&DAT_028c7a30);
  pcVar1 = "AddContactToChatRoomViewController";
  _objc_getClass();
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiToggleConversation__0269d048,FUN_00019cb4);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiToggleReplyPerson__0269d050,FUN_00019d50);
  uStack_c28 = 0x76;
  uStack_c27 = 0x40;
  uStack_c26 = 0x3a;
  uStack_c25 = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiOpenSessionSettings_0269d058,FUN_00019dec);
  pcVar1 = "ContactSettingViewController";
  _objc_getClass();
  auStack_1028[0] = 0x76;
  auStack_1028[1] = 0x40;
  auStack_1028[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiToggleConversation__0269d048,FUN_00019e14);
  auStack_1428[0] = 0x76;
  auStack_1428[1] = 0x40;
  auStack_1428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiToggleReplyPerson__0269d050,FUN_00019eb0);
  uStack_1828 = 0x76;
  uStack_1827 = 0x40;
  uStack_1826 = 0x3a;
  uStack_1825 = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiOpenSessionSettings_0269d058,FUN_00019f4c);
  pcVar1 = "ContactInfoViewController";
  _objc_getClass();
  auStack_1c28[0] = 0x76;
  auStack_1c28[1] = 0x40;
  auStack_1c28[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiToggleConversation__0269d048,FUN_00019f74);
  auStack_2028[0] = 0x76;
  auStack_2028[1] = 0x40;
  auStack_2028[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_2028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_2028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiToggleReplyPerson__0269d050,FUN_0001a010);
  uStack_2428 = 0x76;
  uStack_2427 = 0x40;
  uStack_2426 = 0x3a;
  uStack_2425 = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiOpenSessionSettings_0269d058,FUN_0001a0ac);
  pcVar1 = "ChatRoomInfoViewController";
  _objc_getClass();
  auStack_2828[0] = 0x76;
  auStack_2828[1] = 0x40;
  auStack_2828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_2828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_2828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_wcr_aiToggleConversation__0269d048,FUN_0001a0d4);
  _class_addMethod(pcVar1,PTR_s_wcr_aiOpenSessionSettings_0269d058,FUN_0001a170);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

