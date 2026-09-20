// resourceNameFromNearbyPlusItem: @ 00fe22f0

/* Function Stack Size: 0x18 bytes */

ID WCRefineIconNameCaptureSupport::resourceNameFromNearbyPlusItem_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong local_98 [2];
  ulong local_88 [4];
  ulong local_68;
  int local_5c;
  ulong local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = &cf_RightTopMenuItemBtn;
  _NSClassFromString();
  pcVar2 = &cf_RightTopMenuItemBtnData;
  local_48 = pcVar1;
  _NSClassFromString();
  uVar7 = local_40;
  local_50 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar7;
  while (local_58 != 0) {
    local_68 = 0;
    if (local_48 != (cfstringStruct *)0x0) {
      uVar7 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_48);
      if ((uVar7 & 1) != 0) {
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_data);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_68;
        local_68 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar7);
      }
    }
    if (local_68 == 0) {
      uVar7 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_data);
      _objc_retainAutoreleasedReturnValue();
      local_88[0] = uVar7;
      if (local_50 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,local_50);
        if ((uVar7 & 1) != 0) {
          _objc_storeStrong(&local_68,local_88[0]);
        }
      }
      _objc_storeStrong(local_88,0);
    }
    uVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_valueForKey__0269d128,&cf_m_nsImageName);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_98[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar7 = uVar3 & 0xffffffff;
    if ((uVar3 & 1) == 0) {
LAB_00fe2654:
      local_5c = 0;
    }
    else {
      uVar5 = local_98[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_98[0],PTR_s_length_0269cca0);
      uVar3 = local_98[0];
      uVar7 = 0;
      if (uVar5 == 0) goto LAB_00fe2654;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      uVar7 = 1;
      local_5c = 1;
    }
    _objc_storeStrong(uVar7,local_98,0);
    if (local_5c == 0) {
      local_5c = 0;
    }
    _objc_storeStrong(&local_68,0);
    if (local_5c != 0) goto LAB_00fe270c;
    uVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = local_58;
    local_58 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar7);
  }
  local_5c = 2;
LAB_00fe270c:
  _objc_storeStrong(&local_58,0);
  iVar6 = local_5c + -2;
  if (iVar6 == 0) {
    local_28 = 0;
    iVar6 = 1;
    local_5c = 1;
  }
  _objc_storeStrong(iVar6,&local_40,0);
  _objc_autoreleaseReturnValue();
  return local_28;
}

