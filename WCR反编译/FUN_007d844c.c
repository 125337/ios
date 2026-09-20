// FUN_007d844c @ 007d844c

void FUN_007d844c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_108;
  ulong local_b8;
  bool local_69;
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_28 = 0;
    local_40 = 1;
    goto LAB_007d88d0;
  }
  local_51 = 0;
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar3 & 1) == 0) {
    local_b8 = 0;
  }
  else {
    local_b8 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b8;
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
LAB_007d86f0:
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    local_69 = (uVar3 & 1) == 0;
    if (local_69) {
      local_108 = 0;
    }
    else {
      local_108 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_controller);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_108;
    }
    local_69 = !local_69;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_108;
    if (local_69) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_60;
    FUN_007d8908();
    _objc_retainAutoreleasedReturnValue();
    local_40 = 1;
    local_28 = uVar2;
    _objc_storeStrong(&local_60,0);
  }
  else {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_custom_plugin_);
    uVar2 = local_48;
    if ((uVar3 & 1) == 0) goto LAB_007d86f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar2;
    local_40 = 1;
  }
  _objc_storeStrong(&local_48,0);
LAB_007d88d0:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

