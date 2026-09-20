// FUN_001abd04 @ 001abd04

void FUN_001abd04(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  double local_f8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined8 local_88;
  double local_80;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  double local_60;
  double local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  uVar2 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028c8a89);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_48 = 1;
  }
  else {
    uVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c8a8a);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    if (uVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
      local_f8 = param_4;
      local_78 = param_1;
      local_70 = param_2;
      local_68 = param_3;
      local_60 = param_4;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_doubleValue_026ca608);
      local_f8 = param_1;
    }
    uVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_58 = local_f8;
    if (local_f8 < 1.0) {
      local_58 = 44.0;
    }
    local_b0 = PTR___NSConcreteGlobalBlock_02578658;
    local_a8 = 0xd0800000;
    local_a4 = 0;
    local_a0 = FUN_001ac8a0;
    local_98 = &DAT_0257abc0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_30;
    local_90 = uVar2;
    local_80 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_performWithoutAnimation__0269e7e0,&local_b0);
    FUN_001ac454(local_30);
    _objc_setAssociatedObject(local_28,&DAT_028c8a89,0,1);
    _objc_setAssociatedObject(local_28,&DAT_028c8a8a,0,1);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

