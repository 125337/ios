// FUN_0073afb4 @ 0073afb4

void FUN_0073afb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_a0;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar3;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  puVar3 = &local_38;
  local_38 = 0;
  _objc_storeStrong(puVar3,param_4);
  uVar2 = (uint)puVar3;
  FUN_0073a058();
  uVar5 = local_30;
  if ((uVar2 & 1) == 0) {
    uVar7 = local_20;
    (*DAT_028cc568)(local_20,local_28,local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 1;
    local_18 = uVar7;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) == 0) {
      local_a0 = 0;
    }
    else {
      local_a0 = local_30;
    }
    FUN_0073bc1c();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_20;
    uVar7 = local_28;
    pcVar1 = DAT_028cc568;
    local_50 = local_a0;
    if (local_a0 == 0) {
      uVar7 = local_20;
      (*DAT_028cc568)(local_20,local_28,local_30,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar7;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      (*pcVar1)(uVar6,uVar7,local_a0,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar6;
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

