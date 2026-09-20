// invokeScreenRecordingVideoProcessorSelector:videoURL: @ 017f656c

/* Function Stack Size: 0x20 bytes */

void WCRefineAssistFunctionViewController::invokeScreenRecordingVideoProcessorSelector_videoURL_
               (ID param_1,SEL param_2,SEL param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  uint local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  SEL local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  pcVar1 = &cf_WCRefineScreenRecordingFrameProcessor;
  _NSClassFromString();
  pcVar2 = &cf_sharedProcessor;
  local_38 = pcVar1;
  _NSSelectorFromString();
  local_40 = pcVar2;
  if ((local_38 == (cfstringStruct *)0x0) ||
     (pcVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_U_O_YthV_gR_);
    local_44 = 1;
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_performSelector__026ca7b8,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,local_28),
       ((ulong)pcVar1 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_U_O_YthVNS_u);
      local_44 = 1;
    }
    else {
      pcVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_methodSignatureForSelector__0269e190,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_58 = pcVar1;
      if (pcVar1 != (cfstringStruct *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSInvocation_026ce208;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSInvocation_026ce208,
                   PTR_s_invocationWithMethodSignature__0269e1a0,pcVar1);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTarget__0269e1a8,local_50);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setSelector__0269e1b0,local_28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setArgument_atIndex__0269eae8,&local_30,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_invoke_0269e1b8);
        _objc_storeStrong(&local_60,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_U_O_YthV_u1Y_);
      }
      local_44 = (uint)(pcVar1 == (cfstringStruct *)0x0);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

