// wcrActivateProvider:kind: @ 017d8388

/* Function Stack Size: 0x20 bytes */

void WCRefineAISettingsViewController::wcrActivateProvider_kind_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    puVar1 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_image);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_supportsImage_026aad18),
       (uVar2 & 1) == 0)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_video);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_supportsVideo_026aad20),
         (uVar2 & 1) == 0)) {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_supportsChat_026aad10);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_providerID_0269d480);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentChatProviderID__026b5318);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
      }
      else {
        uVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_providerID_0269d480);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentVideoProviderID__026b5328);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
    }
    else {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_providerID_0269d480);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCurrentImageProviderID__026b5320);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrBindKind__026b5330,local_30);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

