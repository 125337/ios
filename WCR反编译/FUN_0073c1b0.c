// FUN_0073c1b0 @ 0073c1b0

void FUN_0073c1b0(code *param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 **ppuVar2;
  undefined8 ***pppuVar3;
  undefined8 **local_e0;
  undefined8 **local_98;
  bool local_79;
  undefined8 **local_78;
  undefined8 **local_70;
  undefined8 **local_68;
  undefined4 local_60;
  bool local_59;
  undefined8 **local_58;
  undefined8 local_40;
  undefined8 **local_38;
  code *local_30;
  undefined8 **local_28;
  
  pppuVar3 = &local_38;
  local_38 = (undefined8 ***)0x0;
  local_30 = param_1;
  _objc_storeStrong();
  local_40 = param_3;
  FUN_0073a058();
  if (((ulong)pppuVar3 & 1) == 0) {
    local_59 = false;
    bVar1 = local_30 == (code *)0x0;
    if (bVar1) {
      local_98 = (undefined8 ***)0x0;
    }
    else {
      local_98 = local_38;
      (*local_30)(local_38,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_98;
    }
    local_59 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_98;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    local_60 = 1;
  }
  else {
    FUN_0073a94c();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pppuVar3,PTR_s_length_0269cca0);
    if (pppuVar3 == (undefined8 ***)0x0) {
      local_79 = local_30 == (code *)0x0;
      if (local_79) {
        local_e0 = (undefined8 ***)0x0;
      }
      else {
        local_e0 = local_38;
        (*local_30)(local_38,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_e0;
      }
      local_79 = !local_79;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_e0;
      if (local_79) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      pppuVar3 = (undefined8 ***)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      FUN_0073a874(&cf_appGroupID_fallback,pppuVar3,local_70);
      (*(code *)PTR__objc_release_02578630)(pppuVar3);
      ppuVar2 = local_70;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = ppuVar2;
      local_60 = 1;
      _objc_storeStrong(&local_70,0);
    }
    else {
      pppuVar3 = (undefined8 ***)local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      FUN_0073a874(&cf_appGroupID,pppuVar3,local_68,0);
      (*(code *)PTR__objc_release_02578630)(pppuVar3);
      ppuVar2 = local_68;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = ppuVar2;
      local_60 = 1;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

