// FUN_003ffbb8 @ 003ffbb8

/* WARNING: Removing unreachable block (ram,0x004002c8) */

void FUN_003ffbb8(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double local_308;
  double local_f8;
  double local_b8;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_4);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar2 = local_38;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_48 = 1;
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_50;
    local_58 = puVar1;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_viewWithTag__026cabe0,0x57435249);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar2 & 1) != 0) {
        _objc_storeStrong(&local_58,local_60);
      }
      _objc_storeStrong(&local_60,0);
    }
    if (local_58 == (undefined *)0x0) {
      puVar1 = local_30;
      FUN_004007b0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_58 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_50;
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)puVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      param_2 = *(double *)(PTR__CGRectZero_025782f0 + 8);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,puVar1,PTR_s_initWithFrame__026ca6e8);
      puVar2 = local_50;
      local_50 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTag__026caa80,DAT_02324148);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInteractionEnabled__026caad8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_58);
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      puVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_50;
      (*(code *)PTR__objc_release_02578630)();
      if (puVar1 != puVar2) {
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_58);
      }
    }
    local_308 = 8.0;
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar6 = 0x4018000000000000;
    dVar3 = local_308 + 6.0;
    dVar4 = dVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_sizeToFit_0269ec08);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_frame_026ca640);
    local_b8 = param_2;
    if (param_2 < 168.0) {
      local_b8 = 168.0;
    }
    uVar7 = 0x4040000000000000;
    if (local_308 < 32.0) {
      local_308 = 32.0;
    }
    puVar2 = local_30;
    dVar5 = local_308;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _CGRectGetWidth(dVar5,uVar7,uVar6,dVar4);
    local_f8 = (dVar5 - local_b8) - 12.0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_f8 < 12.0) {
      local_f8 = 12.0;
    }
    FUN_00400bb0();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,dVar3,local_b8,local_308,local_58,PTR_s_setFrame__026ca960);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_48 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

