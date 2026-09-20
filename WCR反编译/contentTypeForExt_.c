// contentTypeForExt: @ 0158ff38

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoiceCloneHelper::contentTypeForExt_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_mp3);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_m4a);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_audio_wav;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_audio_mp4;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_audio_mpeg;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

