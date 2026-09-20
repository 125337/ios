// wcrQuickPickModelKind: @ 017ddc8c

/* Function Stack Size: 0x18 bytes */

void WCRefineAISettingsViewController::wcrQuickPickModelKind_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_78;
  undefined *local_70;
  undefined *local_60;
  bool local_51;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR_WCRefineAIStore_026ce048;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_image);
  bVar2 = false;
  local_51 = false;
  bVar1 = false;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_video);
    bVar1 = (uVar4 & 1) == 0;
    local_78 = local_30;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentChatProvider_0269d548);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_78;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentVideoProvider_0269d498);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_78;
    }
    local_51 = !bVar1;
    local_70 = local_78;
  }
  else {
    local_70 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentImageProvider_0269d478);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    local_40 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (local_51) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (local_38 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrPickProviderForModelKind__026b53d0,local_28);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcrShowModelSheetForProvider_kin_026b5440,local_38,local_28,1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

