// FUN_0005a580 @ 0005a580

void FUN_0005a580(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_2028 [1024];
  undefined1 auStack_1c28 [1024];
  undefined1 auStack_1828 [1024];
  undefined1 auStack_1428 [1024];
  undefined1 auStack_1028 [1024];
  undefined1 auStack_c28 [1024];
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "BaseMsgContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessage__0269d028,FUN_0005adec,&DAT_028c7c50);
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessage_replyingMessage__0269d030,FUN_0005afa4,&DAT_028c7c58
                  );
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessageToolView__0269d020,FUN_0005b1f0,&DAT_028c7c60);
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_0005b49c,&DAT_028c7c68);
  pcVar1 = "ContactSettingViewController";
  _objc_getClass();
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleAutoParseLinkContact__0269db28,FUN_0005bd60);
  auStack_828[0] = 0x76;
  auStack_828[1] = 0x40;
  auStack_828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleAutoParseLinkOutgoingConta_0269db30,FUN_0005bdd4);
  pcVar1 = "ContactInfoViewController";
  _objc_getClass();
  auStack_c28[0] = 0x76;
  auStack_c28[1] = 0x40;
  auStack_c28[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleAutoParseLinkContact__0269db28,FUN_0005be48);
  auStack_1028[0] = 0x76;
  auStack_1028[1] = 0x40;
  auStack_1028[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleAutoParseLinkOutgoingConta_0269db30,FUN_0005bebc);
  pcVar1 = "AddContactToChatRoomViewController";
  _objc_getClass();
  auStack_1428[0] = 0x76;
  auStack_1428[1] = 0x40;
  auStack_1428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleAutoParseLinkContact__0269db28,FUN_0005bf30);
  auStack_1828[0] = 0x76;
  auStack_1828[1] = 0x40;
  auStack_1828[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1828 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1828[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleAutoParseLinkOutgoingConta_0269db30,FUN_0005bfa4);
  pcVar1 = "ChatRoomInfoViewController";
  _objc_getClass();
  auStack_1c28[0] = 0x76;
  auStack_1c28[1] = 0x40;
  auStack_1c28[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_1c28 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_1c28[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleAutoParseLinkGroup__0269db38,FUN_0005c018);
  auStack_2028[0] = 0x76;
  auStack_2028[1] = 0x40;
  auStack_2028[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_2028 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_2028[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_toggleAutoParseLinkOutgoingGroup_0269db40,FUN_0005c4e8);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

