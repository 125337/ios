// resourceNameFromNearbyMenuItem: @ 00fe1d98

/* Function Stack Size: 0x18 bytes */

ID WCRefineIconNameCaptureSupport::resourceNameFromNearbyMenuItem_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_130;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  ulong local_a0;
  cfstringStruct *local_98 [2];
  ulong local_88;
  undefined8 local_80;
  undefined4 local_74;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar1 = local_40;
  local_48 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  while (local_50 != 0 && local_48 == 0) {
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_valueForKey__0269d128,&cf_menuItem);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar1;
    if (uVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) == 0) {
        _objc_storeStrong(&local_48,local_58);
      }
    }
    _objc_storeStrong(&local_58,0);
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_50;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_50,0);
  if (local_48 == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_74 = 1;
  }
  else {
    local_80 = 0;
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_valueForKey__0269d128,&cf_iconImage);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_88 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      _objc_storeStrong(&local_80,local_88);
    }
    _objc_storeStrong(&local_88,0);
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_taggedNameForImage__026ad400,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_98[0] = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    pcVar5 = local_98[0];
    if (pcVar4 == (cfstringStruct *)0x0) {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_menuType_026ad408);
      if ((uVar1 & 1) == 0) {
        local_28 = (cfstringStruct *)0x0;
        local_74 = 1;
      }
      else {
        uVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_menuType_026ad408);
        local_a0 = uVar1;
        if (uVar1 == 0) {
          local_28 = (cfstringStruct *)0x0;
          local_74 = 1;
        }
        else {
          pcVar5 = &cf_WCRefinePluginIconCatalog;
          _NSClassFromString();
          pcVar4 = &cf_nativeSVGNameForMenuType_;
          local_a8 = pcVar5;
          _NSSelectorFromString();
          pcVar5 = local_a8;
          local_b0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_respondsToSelector__026ca818,pcVar4);
          if (((ulong)pcVar5 & 1) == 0) {
            local_28 = (cfstringStruct *)0x0;
            local_74 = 1;
          }
          else {
            pcVar5 = local_a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_b0,local_a0);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_b8 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((ulong)pcVar5 & 1) == 0) {
              local_130 = (cfstringStruct *)0x0;
            }
            else {
              local_130 = local_b8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = local_130;
            local_74 = 1;
            _objc_storeStrong(&local_b8,0);
          }
        }
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar5;
      local_74 = 1;
    }
    _objc_storeStrong(local_98);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

