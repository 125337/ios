// FUN_01f6de38 @ 01f6de38

void FUN_01f6de38(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  uint local_c4;
  cfstringStruct *local_80;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_80 = &cf__eQ_;
  }
  else {
    local_80 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  local_40 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (local_80 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_40,&cf_silk);
  }
  pcVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_40;
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf__;
  (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_hasSuffix__0269d018,local_58);
  pcVar1 = local_48;
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = PTR_WCRefineVoicePackStore_026cea20;
    local_c4 = 0;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isSupportedAudioExtension__026a9d50);
      local_c4 = (uint)puVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    if ((local_c4 & 1) != 0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_stringByDeletingPathExtension_0269fd18);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_48;
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  else {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_substringToIndex__0269d6c0,(long)pcVar3 - (long)pcVar4);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    local_48 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar1 = local_48;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_48;
  local_48 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_48,&cf__eQ);
  }
  pcVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_stringByAppendingPathExtension__026a4580,local_40);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

