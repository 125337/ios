// FUN_000a4358 @ 000a4358

void FUN_000a4358(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double local_358;
  double local_350;
  undefined *local_2e8;
  double local_2e0;
  double local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  double local_298;
  undefined1 auStack_290 [128];
  undefined1 auStack_210 [128];
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  double local_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_4c;
  double local_48;
  undefined4 local_40;
  undefined4 local_3c;
  double local_38;
  long local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = param_6;
  if (local_28 == (undefined *)0x0) {
    local_3c = 1;
    local_38 = param_1;
  }
  else {
    local_40 = 0x3f800000;
    local_4c = 0;
    local_350 = param_1;
    if (param_1 <= 0.0) {
      local_350 = 0.0;
    }
    local_60 = local_350;
    local_48 = local_350;
    if (local_350 <= 1.0) {
      local_358 = local_350;
    }
    else {
      local_358 = 1.0;
    }
    local_68 = local_358;
    local_38 = local_358;
    local_58 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_28,PTR_s_setAlpha__026ca860);
    _memcpy(auStack_e8,PTR__CATransform3DIdentity_025783b8,0x80);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    _memcpy(auStack_168,auStack_e8,0x80);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTransform__026caad0,auStack_168);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    dVar3 = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_30 != 3) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (local_30 == 1) {
      FUN_000a4bd8(0,local_38,local_28);
    }
    else if (local_30 == 2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_190 = dVar3;
      local_188 = local_350;
      local_180 = param_3;
      local_178 = param_4;
      _CGRectGetWidth(dVar3,local_350,param_3,param_4);
      local_170 = dVar3;
      _CATransform3DMakeTranslation(-(dVar3 * local_38),0);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      _memcpy(auStack_290,auStack_210,0x80);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTransform__026caad0,auStack_290);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else if (local_30 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_2b8 = dVar3;
      local_2b0 = local_350;
      local_2a8 = param_3;
      local_2a0 = param_4;
      _CGRectGetWidth();
      local_298 = dVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      local_2e0 = dVar3;
      local_2d8 = local_350;
      local_2d0 = param_3;
      local_2c8 = param_4;
      _CGRectGetHeight(dVar3,local_350,param_3,param_4);
      puVar1 = local_28;
      local_2c0 = dVar3;
      _objc_getAssociatedObject(local_28,&DAT_028c806d);
      _objc_retainAutoreleasedReturnValue();
      local_2e8 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___CALayer_026ce240;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___CALayer_026ce240,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_2e8;
        local_2e8 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_2e8,PTR_s_setBackgroundColor__026ca888,puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        _objc_setAssociatedObject(local_28,&DAT_028c806d,local_2e8,1);
      }
      dVar6 = local_298 * (1.0 - local_38);
      uVar5 = 0;
      uVar4 = 0;
      dVar3 = local_2c0;
      FUN_000a430c();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,uVar5,dVar6,dVar3,local_2e8,PTR_s_setFrame__026ca960);
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_3c = 2;
      _objc_storeStrong(&local_2e8,0);
    }
    local_3c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

