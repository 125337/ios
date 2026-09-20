// FUN_0073acf0 @ 0073acf0

void FUN_0073acf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_90;
  ulong local_48;
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulong *puVar3;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  FUN_0073a058();
  uVar5 = local_30;
  if ((uVar2 & 1) == 0) {
    uVar7 = local_20;
    (*DAT_028cc560)(local_20,local_28,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = 1;
    local_18 = uVar7;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar5 & 1) == 0) {
      local_90 = 0;
    }
    else {
      local_90 = local_30;
    }
    FUN_0073bc1c();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_20;
    uVar7 = local_28;
    pcVar1 = DAT_028cc560;
    local_48 = local_90;
    if (local_90 == 0) {
      uVar7 = local_20;
      (*DAT_028cc560)(local_20,local_28,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar7;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      (*pcVar1)(uVar6,uVar7);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar6;
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

