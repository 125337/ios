// FUN_008a8c38 @ 008a8c38

void FUN_008a8c38(void)

{
  char *pcVar1;
  
  pcVar1 = "VoiceMessageViewModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithMessageWrap_contact_chat_026a98f0,FUN_008a8e74,&DAT_028cde00
                  );
  _MSHookMessageEx(pcVar1,PTR_s_animateShowQuickTransTips_026a98f8,FUN_008a953c,&DAT_028cde08);
  pcVar1 = "VoiceMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onAppear_026a9568,FUN_008a9688,&DAT_028cde10);
  _MSHookMessageEx(pcVar1,PTR_s_OnVoiceTranslateBegin__026a9900,FUN_008a99a4,&DAT_028cde18);
  _MSHookMessageEx(pcVar1,PTR_s_OnVoiceTranslateSuccess__026a9908,FUN_008a9da8,&DAT_028cde20);
  _MSHookMessageEx(pcVar1,PTR_s_initUnreadView_026a9050,FUN_008a9fac,&DAT_028cde28);
  _MSHookMessageEx(pcVar1,PTR_s_updateStatus_026a0090,FUN_008a9fe8,&DAT_028cde30);
  _MSHookMessageEx(pcVar1,PTR_s_initQuickTransTipButton_026a9058,FUN_008aa024,&DAT_028cde38);
  _MSHookMessageEx(pcVar1,PTR_s_animateShowQuickTransTips_026a98f8,FUN_008aa060,&DAT_028cde40);
  _MSHookMessageEx(pcVar1,PTR_s_updateQuickTransTipButtonPositio_026a9910,FUN_008aa270,&DAT_028cde48
                  );
  _MSHookMessageEx(pcVar1,PTR_s_layoutContentView_026a0048,FUN_008aa418,&DAT_028cde50);
  pcVar1 = "VoiceTranslateMsgMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onVoiceTransNoTextRecognized__026a9918,FUN_008aa454,&DAT_028cde58);
  _MSHookMessageEx(pcVar1,PTR_s_onVoiceTransFail__026a9920,FUN_008aa5e8,&DAT_028cde60);
  _MSHookMessageEx(pcVar1,PTR_s_onVoiceTransFail_baseResponse__026a9928,FUN_008aa77c,&DAT_028cde68);
  pcVar1 = "WeToast";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showErrorToastWithText__026a9930,FUN_008aa94c,&DAT_028cde70);
  return;
}

