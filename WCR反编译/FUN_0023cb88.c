// FUN_0023cb88 @ 0023cb88

void FUN_0023cb88(void)

{
  char *pcVar1;
  
  pcVar1 = "MMLocalNotificationUtil";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showLocalNotificationWithIdentif_026a0c50,FUN_0023cf24,&DAT_028c92a8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_showLocalNotificationWithIdentif_026a0c58,FUN_0023d2e4,&DAT_028c92b0
                  );
  pcVar1 = "MainFrameLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_playNewMsgNotify_NotifyFlag__026a0c60,FUN_0023d6e4,&DAT_028c92b8);
  pcVar1 = "QuickReplyMsgMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_canShowPushForContact_msgWrap__026a0c68,FUN_0023db0c,&DAT_028c92c0);
  _MSHookMessageEx(pcVar1,PTR_s_showQuickReplyItem_timeout__026a0c70,FUN_0023dd48,&DAT_028c92c8);
  pcVar1 = "QuickReplyMsgViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showQuickReplyItem_dismissTimeou_026a0098,FUN_0023e09c,&DAT_028c92d0
                  );
  pcVar1 = "CMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_AsyncOnAddMsg_MsgWrap__0269d038,FUN_0023e3f0,&DAT_028c92d8);
  _MSHookMessageEx(pcVar1,PTR_s_OnAddMsg_MsgWrap__0269e630,FUN_0023e4d0,&DAT_028c92e0);
  pcVar1 = "VoipUIManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_openWindowWithContext__026a0c78,FUN_0023e5b0,&DAT_028c92e8);
  pcVar1 = "VoIPIgnoreManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_shouldAutoIgnoreForUsername__026a0c80,FUN_0023e990,&DAT_028c92f0);
  pcVar1 = "MonoServiceMsgMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showLocalNotificationWithMsg_rep_026a0c88,FUN_0023eac4,&DAT_028c92f8
                  );
  pcVar1 = "VoIPInvitationViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_0023ed60,&DAT_028c9300);
  pcVar1 = "VoipCXMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_reportIncomingCallFromUser_ofTyp_026a0c90,FUN_0023f16c,&DAT_028c9308
                  );
  pcVar1 = "VoIPReceiverViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLoad_0269cee8,FUN_0023f4c0,&DAT_028c9310);
  _MSHookMessageEx(pcVar1,PTR_s_asyncPlaySound_026a0c98,FUN_0023f650,&DAT_028c9318);
  pcVar1 = "RingBackSoundCoordinator";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_playRingToneSound_026a0ca0,FUN_0023f6b0,&DAT_028c9320);
  _MSHookMessageEx(pcVar1,PTR_s_vibrate_026a0ca8,FUN_0023f75c,&DAT_028c9328);
  pcVar1 = "VoIP2PInvitationFullScreenView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_0023f7bc,&DAT_028c9330);
  pcVar1 = "VoIP2PInvitationBreadthInviteView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_0023f7f8,&DAT_028c9338);
  pcVar1 = "RightTopMenuItemBtn";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithBtnData_showNew__026a0cb0,FUN_0023f834,&DAT_028c9340);
  return;
}

