// FUN_00f87fb4 @ 00f87fb4

void FUN_00f87fb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double in_d3;
  double local_128;
  double local_120;
  double local_118;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == (undefined *)0x0) {
    local_2c = 1;
  }
  else {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f722);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      in_d3 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
      (*(code *)PTR__objc_msgSend_02578628)();
      puVar1 = local_38;
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTag__026caa80,_kWCRFrostedQuoteBarTag)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOpaque__026ca9f8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_insertSubview_atIndex__026ca748,local_38,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    local_118 = in_d3 * DAT_02323f10;
    if (local_118 <= 4.0) {
      local_118 = 4.0;
    }
    if (local_118 <= 8.0) {
      local_120 = local_118;
    }
    else {
      local_120 = 8.0;
    }
    local_128 = in_d3 - local_120 * 2.0;
    if (local_128 <= 8.0) {
      local_128 = 8.0;
    }
    uVar3 = 0x4008000000000000;
    uVar4 = 0x4004000000000000;
    FUN_00f88a44();
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,local_120,uVar4,local_128,local_38,PTR_s_setFrame__026ca960);
    FUN_00f88a90();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff4000000000000);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setUserInteractionEnabled__026caad8,0);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

