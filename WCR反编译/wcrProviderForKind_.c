// wcrProviderForKind: @ 017d5534

/* Function Stack Size: 0x18 bytes */

ID WCRefineAISettingsViewController::wcrProviderForKind_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_image);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_video);
    if ((uVar2 & 1) == 0) {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentChatProvider_0269d548);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
    else {
      puVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentVideoProvider_0269d498);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar1;
    }
  }
  else {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentImageProvider_0269d478);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

