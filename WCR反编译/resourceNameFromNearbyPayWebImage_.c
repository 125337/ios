// resourceNameFromNearbyPayWebImage: @ 00fe0e18

/* Function Stack Size: 0x18 bytes */

ID WCRefineIconNameCaptureSupport::resourceNameFromNearbyPayWebImage_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  ulong uVar7;
  int iVar8;
  ulong local_138;
  ulong local_110;
  ID local_c0;
  byte local_b1;
  ulong local_b0;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  ulong local_90;
  ulong local_88 [3];
  ulong local_70;
  ID local_68;
  uint local_5c;
  ulong local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = &cf_WCPayWebImageView;
  _NSClassFromString();
  pcVar3 = &cf_WCPayWalletBusinessCell;
  local_48 = pcVar2;
  _NSClassFromString();
  uVar4 = local_40;
  local_50 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar4;
  while (local_58 != 0) {
    if ((local_48 != (cfstringStruct *)0x0) &&
       (uVar4 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_48),
       IVar6 = local_30, (uVar4 & 1) != 0)) {
      IVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_payWebURLValueFromView__026ad3f0,local_58);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_resourceFileNameFromURLValue__026ad3f8);
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar5 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      IVar6 = local_68;
      bVar1 = IVar5 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = IVar6;
      }
      local_5c = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_68,0);
      if (local_5c != 0) goto LAB_00fe13bc;
    }
    if ((local_50 != (cfstringStruct *)0x0) &&
       (uVar4 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_50),
       (uVar4 & 1) != 0)) {
      uVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_itemData);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_valueForKey__0269d128,&cf_function);
      _objc_retainAutoreleasedReturnValue();
      local_88[0] = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_valueForKey__0269d128,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 0;
      local_110 = uVar4;
      if (uVar4 == 0) {
        local_110 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_valueForKey__0269d128,&cf_icon);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_110;
      }
      local_99 = uVar4 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_110;
      if ((local_99 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_valueForKey__0269d128,&cf_urldefault);
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 0;
      local_138 = uVar4;
      if (uVar4 == 0) {
        local_138 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_valueForKey__0269d128,&cf_url);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_138;
      }
      local_b1 = uVar4 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_138;
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      IVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_resourceFileNameFromURLValue__026ad3f8,local_a8);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
      IVar6 = local_c0;
      bVar1 = IVar5 != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = IVar6;
      }
      local_5c = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_c0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(local_88,0);
      _objc_storeStrong(&local_70,0);
      if (local_5c != 0) goto LAB_00fe13bc;
    }
    uVar7 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_58;
    local_58 = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  local_5c = 2;
LAB_00fe13bc:
  _objc_storeStrong(&local_58,0);
  iVar8 = local_5c - 2;
  if (iVar8 == 0) {
    local_28 = 0;
    iVar8 = 1;
    local_5c = 1;
  }
  _objc_storeStrong(iVar8,&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

