// FUN_00156e14 @ 00156e14

void FUN_00156e14(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "RoomContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_OnClickTopMessageTipsBar__0269f5c8,FUN_00157448,&DAT_028c87f0);
  _MSHookMessageEx(pcVar1,PTR_s_updateTopMessageInfo_0269f5d0,FUN_00157560,&DAT_028c87f8);
  _MSHookMessageEx(pcVar1,PTR_s_onTopMsg__0269f5d8,FUN_001576c4,&DAT_028c8800);
  _MSHookMessageEx(pcVar1,PTR_s_onCancelTopMsg__0269f5e0,FUN_001581fc,&DAT_028c8808);
  _MSHookMessageEx(pcVar1,PTR_s_OnClickCancelTopMessageTipsBar__0269f5e8,FUN_001586e0,&DAT_028c8810)
  ;
  _MSHookMessageEx(pcVar1,PTR_s_OnClickCloseTopMessageTipsBar__0269f5f0,FUN_00158dec,&DAT_028c8818);
  pcVar1 = "CGroupMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8,FUN_00159240,&DAT_028c8820
                  );
  pcVar1 = "CContactMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_removeChatRoomTopMsgLocalWithUse_0269f5f8,FUN_00159328,&DAT_028c8828
                  );
  _MSHookMessageEx(pcVar1,PTR_s_removeChatRoomTopMsgLocalWithUse_0269f600,FUN_00159410,&DAT_028c8830
                  );
  _MSHookMessageEx(pcVar1,PTR_s_checkIsHadTopMsgWithUserName_msg_0269f608,FUN_001594f8,&DAT_028c8838
                  );
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isChatSupportTopMessage_0269f610,FUN_00159690,&DAT_028c8840);
  pcVar1 = "WeixinContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_shouldUseNewTipsNavBar_0269f618,FUN_00159ae0,&DAT_028c8848);
  _MSHookMessageEx(pcVar1,PTR_s_updateTopMessageInfo_0269f5d0,FUN_00159c1c,&DAT_028c8850);
  _class_addMethod(pcVar1,PTR_s_onTopMsg__0269f5d8,FUN_00159d68);
  _class_addMethod(pcVar1,PTR_s_onCancelTopMsg__0269f5e0,FUN_00159ff0);
  _class_addMethod(pcVar1,PTR_s_OnClickTopMessageTipsBar__0269f5c8,FUN_0015a334);
  _class_addMethod(pcVar1,PTR_s_OnClickCancelTopMessageTipsBar__0269f5e8,FUN_0015a3d4);
  _class_addMethod(pcVar1,PTR_s_OnClickCloseTopMessageTipsBar__0269f5f0,FUN_0015a810);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}

