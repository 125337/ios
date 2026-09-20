// wcrCurrentModelForProvider:kind: @ 017d72d8

/* Function Stack Size: 0x20 bytes */

ID WCRefineAISettingsViewController::wcrCurrentModelForProvider_kind_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_88;
  cfstringStruct *local_70;
  cfstringStruct *local_58;
  ulong local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_video);
    if ((uVar1 & 1) == 0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatModel_026aadc8);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_88 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_88;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_videoModel_026aad78);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_70 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_70;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageModel_026aadd0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_58 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

