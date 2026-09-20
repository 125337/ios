// FUN_001fa5d8 @ 001fa5d8

void FUN_001fa5d8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  double local_128;
  undefined *local_98;
  double local_90;
  double local_88;
  byte local_79;
  double local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6e3);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  FUN_001f9678();
  if ((((uVar2 & 1) == 0) || (local_30 == 0)) || (local_28 == 0)) {
    if (local_38 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeFromSuperview_026ca800);
    }
    local_48 = 1;
  }
  else {
    FUN_001fca1c();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    if (local_38 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeFromSuperview_026ca800);
    }
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    local_78 = param_1;
    local_70 = param_2;
    local_68 = param_3;
    local_60 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setBackgroundColor__026ca888,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setTag__026caa80,DAT_02323e68);
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAutoresizingMask__026ca878,0x2d);
    FUN_001f95dc();
    local_79 = (byte)puVar3;
    FUN_001fc5c4();
    local_88 = param_1;
    FUN_001fc6bc();
    local_90 = param_1;
    FUN_001fc79c();
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar3;
    if ((local_79 & 1) == 0) {
      local_128 = 0.0;
    }
    else {
      local_128 = local_88;
      FUN_001d5a74(local_58);
    }
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_128);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar1 = local_90;
    if (((local_79 & 1) == 0) || (local_90 <= 0.0)) {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_98;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (uVar5 == 0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_insertSubview_atIndex__026ca748,local_58,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_insertSubview_atIndex__026ca748,local_58,uVar5);
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

