// FUN_000f58c0 @ 000f58c0

void FUN_000f58c0(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  ulong local_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [48];
  ulong local_50;
  double local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar1 = local_28;
  FUN_000e8290();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
    local_40 = 1;
    goto LAB_000f5f08;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_48 = param_1;
  if (param_1 < -200.0) {
    local_48 = -200.0;
  }
  local_f0 = 200.0;
  if (200.0 < local_48) {
    local_48 = 200.0;
  }
  uVar1 = local_30;
  dStack_e8 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_50 = uVar1;
  if (uVar1 == 0) {
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setClipsToBounds__026ca8c8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setClipsToBounds__026ca8c8,0);
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memcpy(auStack_80,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar1 = local_30;
    _memcpy(auStack_b0,auStack_80,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_b0);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    uVar1 = local_28;
    local_d0 = dStack_e8;
    dStack_c8 = local_f0;
    local_c0 = param_3;
    dStack_b8 = param_4;
    _objc_getAssociatedObject(local_28,&DAT_028c83a9);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_100 = local_c0;
    local_d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      dStack_f8 = dStack_c8;
      local_100 = local_d0;
      dStack_e8 = dStack_b8;
      local_f0 = local_c0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_CGRectValue_0269e128);
      dVar3 = local_100;
      _CGRectGetWidth(local_100,param_3,local_f0,dStack_e8);
      dVar4 = local_d0;
      _CGRectGetWidth(local_d0,dStack_c8,local_c0,dStack_b8);
      if (ABS(dVar3 - dVar4) <= 0.5) {
        dVar3 = local_100;
        _CGRectGetHeight(local_100,param_3,local_f0,dStack_e8);
        dVar4 = local_d0;
        _CGRectGetHeight(local_d0,dStack_c8,local_c0,dStack_b8);
        dStack_f8 = param_3;
        if (ABS(dVar3 - dVar4) <= 0.5) goto LAB_000f5df0;
      }
      dStack_f8 = dStack_c8;
      local_100 = local_d0;
      dStack_e8 = dStack_b8;
      local_f0 = local_c0;
    }
LAB_000f5df0:
    uVar1 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,dStack_f8,local_f0,dStack_e8,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGRect__0269e130);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028c83a9,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100 + local_48,dStack_f8,local_f0,dStack_e8,local_30,PTR_s_setFrame__026ca960);
    _objc_storeStrong(&local_d8,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_50,0);
LAB_000f5f08:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

