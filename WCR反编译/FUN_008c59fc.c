// FUN_008c59fc @ 008c59fc

void FUN_008c59fc(void)

{
  char *pcVar1;
  
  pcVar1 = "MMInputToolView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_startRecording__026a9b88,FUN_008c60f8,&DAT_028ce058);
  _MSHookMessageEx(pcVar1,PTR_s_MMTransparentButton_touchesBegan_026a9b90,FUN_008c61f4,&DAT_028ce060
                  );
  _MSHookMessageEx(pcVar1,PTR_s_MMTransparentButton_touchesEnded_026a7c30,FUN_008c632c,&DAT_028ce068
                  );
  _MSHookMessageEx(pcVar1,PTR_s_MMTransparentButton_touchesCance_026a9b98,FUN_008c6458,&DAT_028ce070
                  );
  _MSHookMessageEx(pcVar1,PTR_s_stopRecording_026a9ba0,FUN_008c6584,&DAT_028ce078);
  _MSHookMessageEx(pcVar1,PTR_s_cancelRecording_026a9ba8,FUN_008c6624,&DAT_028ce080);
  _MSHookMessageEx(pcVar1,PTR_s_toRecordStautsIdle_026a9bb0,FUN_008c66c4,&DAT_028ce088);
  _MSHookMessageEx(pcVar1,PTR_s_onStopOrCancelRecording_026a9bb8,FUN_008c6784,&DAT_028ce090);
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextViewDidStartVoiceInput_026a9bc0,FUN_008c67d8,&DAT_028ce098
                  );
  _MSHookMessageEx(pcVar1,PTR_s_realStartVoiceTransRecording_026a9bc8,FUN_008c692c,&DAT_028ce0a0);
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextView_LongPressGestureT_026a3490,FUN_008c6a24,&DAT_028ce0a8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextView_touchesMoved_with_026a9bd0,FUN_008c6acc,&DAT_028ce0b0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextView_touchesCancelled__026a9bd8,FUN_008c6bfc,&DAT_028ce0b8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextView_touchesEnded_with_026a9be0,FUN_008c6dc0,&DAT_028ce0c0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_MMGrowTextViewDidStopVoiceInput__026a9be8,FUN_008c6fa0,&DAT_028ce0c8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_StopRecordingInTransState__026a9bf0,FUN_008c704c,&DAT_028ce0d0);
  _MSHookMessageEx(pcVar1,PTR_s_cancelRecordingAndTransVoiceWith_026a9bf8,FUN_008c7198,&DAT_028ce0d8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_voiceTransEndWithLogic__026a9c00,FUN_008c7344,&DAT_028ce0e0);
  _MSHookMessageEx(pcVar1,PTR_s_onWillDisappear_026a9c08,FUN_008c7474,&DAT_028ce0e8);
  pcVar1 = "MMGrowDictationIconView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_touchesBegan_withEvent__026a9c10,FUN_008c74ac,&DAT_028ce0f0);
  _MSHookMessageEx(pcVar1,PTR_s_touchesCancelled_withEvent__026a9c18,FUN_008c75a8,&DAT_028ce0f8);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_008c766c,&DAT_028ce100);
  pcVar1 = "VoiceTransView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_startRecordingWithRect__026a9c20,FUN_008c76a0,&DAT_028ce108);
  _MSHookMessageEx(pcVar1,PTR_s_onVoiceTransBegan_026a9c28,FUN_008c7760,&DAT_028ce110);
  _MSHookMessageEx(pcVar1,PTR_s_onVoiceTransDidEnd_026a9c30,FUN_008c77e4,&DAT_028ce118);
  _MSHookMessageEx(pcVar1,PTR_s_onVoiceTransFail_026a9c38,FUN_008c7870,&DAT_028ce120);
  _MSHookMessageEx(pcVar1,PTR_s_transformToRecordState__026a9c40,FUN_008c7900,&DAT_028ce128);
  _MSHookMessageEx(pcVar1,PTR_s_onTouchMoveWithTouches__026a9c48,FUN_008c7990,&DAT_028ce130);
  _MSHookMessageEx(pcVar1,PTR_s_onTouchEndWithTouches__026a9c50,FUN_008c7a1c,&DAT_028ce138);
  _MSHookMessageEx(pcVar1,PTR_s_onTouchCancelWithTouches__026a9c58,FUN_008c7b10,&DAT_028ce140);
  _MSHookMessageEx(pcVar1,PTR_s_didMoveToWindow_0269ddb8,FUN_008c7bf0,&DAT_028ce148);
  pcVar1 = "VoiceRecordView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_transformToRecordState__026a9c40,FUN_008c7c24,&DAT_028ce150);
  _MSHookMessageEx(pcVar1,PTR_s_onTouchMoveWithTouches__026a9c48,FUN_008c7c64,&DAT_028ce158);
  pcVar1 = "RecordAdapterView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onTouchBeginWithTouches__026a9c60,FUN_008c7cf0,&DAT_028ce160);
  _MSHookMessageEx(pcVar1,PTR_s_onTouchMoveWithTouches__026a9c48,FUN_008c7d7c,&DAT_028ce168);
  pcVar1 = "VoiceTransView_Bottom";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setState__026a00b0,FUN_008c7e08,&DAT_028ce170);
  pcVar1 = "VoiceTransView_Content";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_changeRecordStateTo__026a9c68,FUN_008c7e84,&DAT_028ce178);
  pcVar1 = "VoiceTransLogic";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onRecordStart_026a9c70,FUN_008c7f10,&DAT_028ce180);
  _MSHookMessageEx(pcVar1,PTR_s_stopRecord_026a9c78,FUN_008c7f7c,&DAT_028ce188);
  _MSHookMessageEx(pcVar1,PTR_s_onFail_026a9c80,FUN_008c800c,&DAT_028ce190);
  _MSHookMessageEx(pcVar1,PTR_s_onEndVoiceTrans_VoiceIds__026a9c88,FUN_008c80a0,&DAT_028ce198);
  pcVar1 = "MJVoiceInputManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_startRecordingWithOptions__026a9c90,FUN_008c8184,&DAT_028ce1a0);
  _MSHookMessageEx(pcVar1,PTR_s_startRecordingWithDurationLimit__026a9c98,FUN_008c81c0,&DAT_028ce1a8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_stopRecording_026a9ba0,FUN_008c8260,&DAT_028ce1b0);
  _MSHookMessageEx(pcVar1,PTR_s_cancelRecording_026a9ba8,FUN_008c8294,&DAT_028ce1b8);
  _MSHookMessageEx(pcVar1,PTR_s_onRecognitionStateUpdated_identi_026a9ca0,FUN_008c8334,&DAT_028ce1c0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onRecognitionResultUpdated_resul_026a9ca8,FUN_008c83bc,&DAT_028ce1c8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onRecognitionFinishedWithResult__026a9cb0,FUN_008c84fc,&DAT_028ce1d0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onProcessedVoiceInputSavedAtPath_026a9cb8,FUN_008c8650,&DAT_028ce1d8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onVoiceInputDataSliceProcessed_s_026a9cc0,FUN_008c8708,&DAT_028ce1e0
                  );
  return;
}

