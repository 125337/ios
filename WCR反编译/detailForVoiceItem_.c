// detailForVoiceItem: @ 01f77c5c

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackManagerViewController::detailForVoiceItem_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  cfstringStruct *local_b8;
  cfstringStruct *local_60;
  undefined *local_50;
  undefined *local_40;
  cfstringStruct *local_38;
  long local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_pinPrefixForItem__026c99d0,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineVoicePackStore_026cea20;
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_listVoiceDetailForItem__026c97e0,local_30);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_30;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_repositoryCode_026b0ba8);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (lVar4 == 0) {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      local_b8 = local_38;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_b8 = &::cf___;
      }
      else {
        local_50 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_characterSetWithCharactersInStri_0269d1a0,&::cf_space_s_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_b8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_b8;
      if (pcVar1 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
    }
    else {
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
  }
  else {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (puVar2 == (undefined *)0x0) {
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_repositoryCode_026b0ba8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    else {
      lVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_repositoryCode_026b0ba8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

