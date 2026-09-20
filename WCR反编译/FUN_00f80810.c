// FUN_00f80810 @ 00f80810

void FUN_00f80810(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  undefined8 uVar5;
  undefined *local_168;
  undefined *local_120;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  double local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == (undefined *)0x0) {
    local_2c = 1;
    goto LAB_00f80f3c;
  }
  puVar2 = local_28;
  FUN_00f876ec();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_28;
  local_38 = puVar2;
  FUN_00f870f0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  FUN_00f878fc(local_28);
  FUN_00f878fc(local_38);
  FUN_00f878fc(local_40);
  FUN_00f87c58(local_40);
  if (local_38 == (undefined *)0x0) {
    local_120 = local_28;
  }
  else {
    local_120 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_bounds_026ca548);
  local_68 = param_1;
  local_60 = param_2;
  local_58 = param_3;
  local_50 = param_4;
  _CGRectIsEmpty();
  dVar4 = param_1;
  uVar5 = param_2;
  if (((ulong)local_120 & 1) == 0) {
    dVar4 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    uVar5 = 0x4020000000000000;
    param_4 = dVar4;
    local_88 = param_1;
    local_80 = param_2;
    local_78 = param_3;
    local_70 = dVar4;
    if (dVar4 < 8.0) goto LAB_00f80954;
  }
  else {
LAB_00f80954:
    _objc_storeStrong(&local_48,local_28);
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setBackgroundColor__026ca888,puVar2);
  puVar2 = local_90;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setContainerBackgroundColor__026acc18
            );
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028e2e7d);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == (undefined *)0x0) {
      local_98 = (undefined *)0x0;
      puVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_containerBackgroundColor_026acc28
                );
      if (((ulong)puVar2 & 1) != 0) {
        puVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containerBackgroundColor_026acc28);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_98;
        local_98 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_28;
      local_a1 = 0;
      bVar1 = local_98 == (undefined *)0x0;
      if (bVar1) {
        local_168 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_168;
      }
      else {
        local_168 = local_98;
      }
      local_a1 = bVar1;
      _objc_setAssociatedObject(puVar2,&DAT_028e2e7d,local_168,1);
      if ((local_a1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
      _objc_storeStrong(&local_98,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setContainerBackgroundColor__026acc18,local_90);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_viewWithTag__026cabe0,0x24f723);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_b0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithFrame__026ca6e8);
    puVar2 = local_b0;
    local_b0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setTag__026caa80,_kWCRFrostedQuoteFillTag);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOpaque__026ca9f8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_insertSubview_atIndex__026ca748,local_b0,0)
    ;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar4,uVar5,param_3,param_4,local_b0,PTR_s_setFrame__026ca960);
  FUN_00f87e00();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
  puVar3 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUserInteractionEnabled__026caad8,0);
  FUN_00f87e3c(local_b0);
  FUN_00f87e3c(local_48);
  if ((long)local_48 - (long)local_28 != 0) {
    FUN_00f87e3c((long)local_48 - (long)local_28,local_28);
  }
  FUN_00f87fb4(local_b0);
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  local_2c = 0;
LAB_00f80f3c:
  _objc_storeStrong(&local_28,0);
  return;
}

