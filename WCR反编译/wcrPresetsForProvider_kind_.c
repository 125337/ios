// wcrPresetsForProvider:kind: @ 017da69c

/* Function Stack Size: 0x20 bytes */

ID WCRefineAISettingsViewController::wcrPresetsForProvider_kind_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  ID IVar2;
  ID local_88;
  ID local_70;
  ID local_58;
  ulong local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
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
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatModelPresets_026b5388);
      _objc_retainAutoreleasedReturnValue();
      local_88 = IVar2;
      if (IVar2 == 0) {
        local_88 = *(ID *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_88;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_videoModelPresets_026b5380);
      _objc_retainAutoreleasedReturnValue();
      local_70 = IVar2;
      if (IVar2 == 0) {
        local_70 = *(ID *)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_70;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_imageModelPresets_026b5378);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar2;
    if (IVar2 == 0) {
      local_58 = *(ID *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

