// FUN_0051cb00 @ 0051cb00

void FUN_0051cb00(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_160;
  ulong local_108;
  ulong local_c8;
  bool local_a1;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  bool local_81;
  ulong local_80;
  ulong local_78;
  undefined4 local_6c;
  ulong local_68;
  bool local_59;
  ulong local_58;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_59 = false;
  bVar1 = local_30 == 0;
  if (bVar1) {
    local_c8 = 0;
  }
  else {
    local_c8 = local_30;
    FUN_0051eac8(local_30,&cf_thirdPartyHandler);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_c8;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_c8;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  uVar2 = local_40;
  FUN_0051eac8(local_40,&cf_image);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
  local_68 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar4 = local_68;
  if ((uVar2 & 1) == 0) {
    local_81 = false;
    bVar1 = local_30 == 0;
    if (bVar1) {
      local_108 = 0;
    }
    else {
      local_108 = local_30;
      FUN_0051eac8(local_30,&cf_normalImage);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_108;
    }
    local_81 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_108;
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    uVar4 = local_78;
    puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar2 = local_78;
    if ((uVar4 & 1) == 0) {
      uVar4 = local_38;
      FUN_0051f374();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar4;
      FUN_0051ec4c();
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar4 = local_90;
      if (local_90 == 0) {
        local_a1 = local_30 == 0;
        if (local_a1) {
          local_160 = 0;
        }
        else {
          local_160 = local_30;
          FUN_0051f558(local_30,&cf_mediaView);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = local_160;
        }
        local_a1 = !local_a1;
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_160;
        if (local_a1) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        uVar4 = local_98;
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar4 & 1) == 0) {
          local_28 = 0;
        }
        else {
          uVar4 = local_98;
          FUN_0051f72c();
          _objc_retainAutoreleasedReturnValue();
          local_28 = uVar4;
        }
        local_6c = 1;
        _objc_storeStrong(&local_98,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar4;
        local_6c = 1;
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar2;
      local_6c = 1;
    }
    _objc_storeStrong(&local_78,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar4;
    local_6c = 1;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

