// FUN_000c01cc @ 000c01cc

void FUN_000c01cc(void)

{
  char *pcVar1;
  
  pcVar1 = "MMNewSessionMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_OnAddMsg_MsgWrap__0269e630,FUN_000c04f4,&DAT_028c8108);
  _MSHookMessageEx(pcVar1,PTR_s_OnModMsg_MsgWrap__0269e638,FUN_000c067c,&DAT_028c8110);
  _MSHookMessageEx(pcVar1,PTR_s_OnAddMsgListForSession_NotifyUsr_0269e640,FUN_000c0804,&DAT_028c8118
                  );
  _MSHookMessageEx(pcVar1,PTR_s_updateSessions_NotifyUsrName__0269e648,FUN_000c098c,&DAT_028c8120);
  pcVar1 = "MMSessionInfo";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m_uAtMeCount_0269e650,FUN_000c0b14,&DAT_028c8128);
  _MSHookMessageEx(pcVar1,PTR_s_setM_uAtMeCount__0269e658,FUN_000c0b68,&DAT_028c8130);
  _MSHookMessageEx(pcVar1,PTR_s_m_uAtAllCount_0269e660,FUN_000c0bd0,&DAT_028c8138);
  _MSHookMessageEx(pcVar1,PTR_s_setM_uAtAllCount__0269e668,FUN_000c0c24,&DAT_028c8140);
  pcVar1 = "MainSessionInfoItem";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_mainAtMeCount_0269e670,FUN_000c0c8c,&DAT_028c8148);
  _MSHookMessageEx(pcVar1,PTR_s_setMainAtMeCount__0269e678,FUN_000c0ce0,&DAT_028c8150);
  _MSHookMessageEx(pcVar1,PTR_s_mainAtAllCount_0269e680,FUN_000c0d48,&DAT_028c8158);
  _MSHookMessageEx(pcVar1,PTR_s_setMainAtAllCount__0269e688,FUN_000c0d9c,&DAT_028c8160);
  pcVar1 = "MsgRedTipsMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getRedTipsTypeFromSession__0269e690,FUN_000c0e04,&DAT_028c8168);
  _MSHookMessageEx(pcVar1,PTR_s_getUniqueRedTipItemsFrom_limit__0269e698,FUN_000c0ed4,&DAT_028c8170)
  ;
  _MSHookMessageEx(pcVar1,PTR_s_getRedTipItemsFrom__0269e6a0,FUN_000c0fd4,&DAT_028c8178);
  _MSHookMessageEx(pcVar1,PTR_s_addRedTipsItem__0269e6a8,FUN_000c10c4,&DAT_028c8180);
  _MSHookMessageEx(pcVar1,PTR_s_addRedTipsItemWithMsg_type__0269e6b0,FUN_000c1174,&DAT_028c8188);
  _MSHookMessageEx(pcVar1,PTR_s_itemWithMessage_type__0269e6b8,FUN_000c1234,&DAT_028c8190);
  _MSHookMessageEx(pcVar1,PTR_s_addRedTips_type_rule__0269e6c0,FUN_000c1314,&DAT_028c8198);
  pcVar1 = "CContact";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isChatRoomNeedPushAtMeMsg_0269e6c8,FUN_000c13e4,&DAT_028c81a0);
  _MSHookMessageEx(pcVar1,PTR_s_isChatRoomNeedPushAtAllMsg_0269e6d0,FUN_000c144c,&DAT_028c81a8);
  _MSHookMessageEx(pcVar1,PTR_s_isChatRoomNeedPushGroupNoticeMsg_0269e6d8,FUN_000c14b4,&DAT_028c81b0
                  );
  return;
}

