// FUN_001af230 @ 001af230

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001af230(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
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
  ulong local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  undefined1 auStack_b8 [48];
  undefined1 auStack_88 [48];
  ulong local_58;
  double local_50;
  double local_48;
  undefined4 local_40;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar1 = local_28;
  FUN_001af934();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
    local_40 = 1;
    goto LAB_001af89c;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_50 = param_1;
  if (param_1 < -200.0) {
    local_50 = -200.0;
  }
  local_f0 = 200.0;
  if (200.0 < local_50) {
    local_50 = 200.0;
  }
  uVar1 = local_30;
  dStack_e8 = local_50;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
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
    _memcpy(auStack_88,PTR__CGAffineTransformIdentity_025782d8,0x30);
    uVar1 = local_30;
    _memcpy(auStack_b8,auStack_88,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTransform__026caad0,auStack_b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
    uVar1 = local_28;
    local_d8 = dStack_e8;
    dStack_d0 = local_f0;
    local_c8 = param_3;
    dStack_c0 = param_4;
    _objc_getAssociatedObject(local_28,&DAT_028c8a8f);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_100 = local_c8;
    local_e0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      dStack_f8 = dStack_d0;
      local_100 = local_d8;
      dStack_e8 = dStack_c0;
      local_f0 = local_c8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_CGRectValue_0269e128);
      dVar3 = local_100;
      _CGRectGetWidth(local_100,param_3,local_f0,dStack_e8);
      dVar4 = local_d8;
      _CGRectGetWidth(local_d8,dStack_d0,local_c8,dStack_c0);
      if (ABS(dVar3 - dVar4) <= 0.5) {
        dVar3 = local_100;
        _CGRectGetHeight(local_100,param_3,local_f0,dStack_e8);
        dVar4 = local_d8;
        _CGRectGetHeight(local_d8,dStack_d0,local_c8,dStack_c0);
        dStack_f8 = param_3;
        if (ABS(dVar3 - dVar4) <= 0.5) goto LAB_001af784;
      }
      dStack_f8 = dStack_d0;
      local_100 = local_d8;
      dStack_e8 = dStack_c0;
      local_f0 = local_c8;
    }
LAB_001af784:
    uVar1 = local_28;
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,dStack_f8,local_f0,dStack_e8,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGRect__0269e130);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028c8a8f,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100 + local_50,dStack_f8,local_f0,dStack_e8,local_30,PTR_s_setFrame__026ca960);
    _objc_storeStrong(&local_e0,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_58,0);
LAB_001af89c:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

