// FUN_0009f920 @ 0009f920

void FUN_0009f920(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint local_490;
  double local_480;
  double local_220;
  double dStack_218;
  double local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [48];
  undefined1 auStack_1a8 [48];
  undefined1 auStack_178 [48];
  undefined1 auStack_148 [48];
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [64];
  undefined1 auStack_78 [48];
  long local_48;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  lVar2 = local_28;
  if ((local_28 == 0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar2;
    if (lVar2 == 0) {
      _memset(auStack_78,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_78,lVar2,PTR_s_transform_0269e178);
    }
    _memcpy(auStack_b8,PTR__CGAffineTransformIdentity_025782d8,0x30);
    puVar3 = auStack_78;
    _CGAffineTransformEqualToTransform(puVar3,auStack_b8);
    if (((ulong)puVar3 & 1) == 0) {
      _memcpy(auStack_e8,PTR__CGAffineTransformIdentity_025782d8,0x30);
      lVar2 = local_48;
      _memcpy(auStack_118,auStack_e8,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTransform__026caad0,auStack_118);
    }
    if (local_30 == 0) {
      _memset(auStack_148,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(auStack_148,local_30,PTR_s_transform_0269e178);
    }
    _memcpy(auStack_178,PTR__CGAffineTransformIdentity_025782d8,0x30);
    puVar3 = auStack_148;
    _CGAffineTransformEqualToTransform(puVar3,auStack_178);
    if (((ulong)puVar3 & 1) == 0) {
      _memcpy(auStack_1a8,PTR__CGAffineTransformIdentity_025782d8,0x30);
      lVar2 = local_30;
      _memcpy(auStack_1d8,auStack_1a8,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTransform__026caad0,auStack_1d8);
    }
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    local_1e0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_profile);
    if ((uVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_avatarCornerScale_0269e188);
      local_480 = param_1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_avatarCornerProfileScale_0269e180);
      local_480 = param_1;
    }
    FUN_0009e008();
    puVar4 = local_1e0;
    dVar6 = local_480;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_avatarCornerScaleEnabled_0269e168);
    uVar5 = local_38;
    local_490 = 1;
    if (((ulong)puVar4 & 1) != 0) {
      puVar4 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_avatarCornerScaleSceneFilter_0269e170);
      _objc_retainAutoreleasedReturnValue();
      FUN_0009df5c();
      local_490 = (uint)uVar5 ^ 1;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_1e8 = local_480;
    if ((local_490 & 1) != 0) {
      dVar6 = 1.0;
      local_1e8 = 1.0;
    }
    FUN_000a03fc(local_28,local_30);
    if ((dVar6 <= 0.5) || (uVar8 = 0x3fe0000000000000, param_2 <= 0.5)) {
      local_3c = 1;
    }
    else {
      local_220 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      _CGRectGetMidX();
      dStack_218 = local_220;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      _CGRectGetMidY(dStack_218,uVar8);
      FUN_000a08fc();
      dVar7 = dStack_218;
      dVar9 = local_220;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      dVar10 = 0.5;
      bVar1 = true;
      dVar11 = param_3;
      if (0.5 < param_3) {
        dVar11 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
        bVar1 = dVar11 <= 0.5;
        dVar9 = dVar10;
        dVar7 = param_3;
      }
      uVar8 = 0x3fe0000000000000;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
        _CGRectGetMidX();
        dStack_218 = dVar11;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
        _CGRectGetMidY(dStack_218,uVar8,dVar9,dVar7);
        FUN_000a08fc();
        local_220 = dVar11;
      }
      dVar6 = dVar6 * local_1e8;
      param_2 = param_2 * local_1e8;
      FUN_000a0928();
      local_220 = local_220 - dVar6 / 2.0;
      dStack_218 = dStack_218 - param_2 / 2.0;
      FUN_000a0954();
      dVar7 = param_2;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
      dVar11 = 0.25;
      bVar1 = true;
      if (ABS(dVar7 - local_220) <= 0.25) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
        dVar7 = ABS(dVar11 - dStack_218);
        bVar1 = true;
        if (dVar7 <= 0.25) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          bVar1 = true;
          if (ABS(dVar11 - dVar6) <= 0.25) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
            bVar1 = 0.25 < ABS(dVar7 - param_2);
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_220,dStack_218,dVar6,param_2,local_30,PTR_s_setFrame__026ca960);
      }
      local_3c = 0;
    }
    _objc_storeStrong(&local_1e0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

