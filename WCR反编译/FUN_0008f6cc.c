// FUN_0008f6cc @ 0008f6cc

void FUN_0008f6cc(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_498;
  double local_210;
  double dStack_208;
  undefined1 auStack_1e0 [48];
  undefined1 auStack_1b0 [48];
  undefined1 auStack_180 [48];
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  long local_60 [3];
  undefined *local_48;
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
  if ((local_28 == 0) || (local_30 == 0)) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_avatarCornerScaleEnabled_0269e168);
    uVar4 = local_38;
    if (((ulong)puVar3 & 1) == 0) {
      local_3c = 1;
    }
    else {
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerScaleSceneFilter_0269e170);
      _objc_retainAutoreleasedReturnValue();
      FUN_00090134();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar2 = local_28;
      if ((uVar4 & 1) == 0) {
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_60[0] = lVar2;
        if (lVar2 == 0) {
          _memset(auStack_90,0,0x30);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(auStack_90,lVar2,PTR_s_transform_0269e178);
        }
        _memcpy(auStack_c0,PTR__CGAffineTransformIdentity_025782d8,0x30);
        puVar5 = auStack_90;
        _CGAffineTransformEqualToTransform(puVar5,auStack_c0);
        if (((ulong)puVar5 & 1) == 0) {
          _memcpy(auStack_f0,PTR__CGAffineTransformIdentity_025782d8,0x30);
          lVar2 = local_60[0];
          _memcpy(auStack_120,auStack_f0,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTransform__026caad0,auStack_120);
        }
        if (local_30 == 0) {
          _memset(auStack_150,0,0x30);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(auStack_150,local_30,PTR_s_transform_0269e178);
        }
        _memcpy(auStack_180,PTR__CGAffineTransformIdentity_025782d8,0x30);
        puVar5 = auStack_150;
        _CGAffineTransformEqualToTransform(puVar5,auStack_180);
        if (((ulong)puVar5 & 1) == 0) {
          _memcpy(auStack_1b0,PTR__CGAffineTransformIdentity_025782d8,0x30);
          lVar2 = local_30;
          _memcpy(auStack_1e0,auStack_1b0,0x30);
          (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_setTransform__026caad0,auStack_1e0);
        }
        uVar4 = local_38;
        _WCRAvatarSceneUsesProfileScale();
        if ((uVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerScale_0269e188);
          local_498 = param_1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_avatarCornerProfileScale_0269e180);
          local_498 = param_1;
        }
        FUN_000901e0();
        dVar6 = local_498;
        FUN_00090244(local_28,local_30);
        if ((dVar6 <= 0.5) || (uVar8 = 0x3fe0000000000000, param_2 <= 0.5)) {
          local_3c = 1;
        }
        else {
          local_210 = param_2;
          (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_bounds_026ca548);
          _CGRectGetMidX();
          dStack_208 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_bounds_026ca548);
          _CGRectGetMidY(dStack_208,uVar8);
          FUN_00090744();
          dVar7 = dStack_208;
          dVar9 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_bounds_026ca548);
          dVar10 = 0.5;
          bVar1 = true;
          dVar11 = param_3;
          if (0.5 < param_3) {
            dVar11 = dVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_bounds_026ca548);
            bVar1 = dVar11 <= 0.5;
            dVar9 = dVar10;
            dVar7 = param_3;
          }
          uVar8 = 0x3fe0000000000000;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
            _CGRectGetMidX();
            dStack_208 = dVar11;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
            _CGRectGetMidY(dStack_208,uVar8,dVar9,dVar7);
            FUN_00090744();
            local_210 = dVar11;
          }
          dVar6 = dVar6 * local_498;
          param_2 = param_2 * local_498;
          FUN_00090770();
          local_210 = local_210 - dVar6 / 2.0;
          dStack_208 = dStack_208 - param_2 / 2.0;
          FUN_00074be0();
          dVar7 = local_210;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          dVar11 = 0.25;
          bVar1 = true;
          if (ABS(dVar7 - local_210) <= 0.25) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
            dVar7 = ABS(dVar11 - dStack_208);
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
                      (local_210,dStack_208,dVar6,param_2,local_30,PTR_s_setFrame__026ca960);
          }
          local_3c = 0;
        }
        _objc_storeStrong(local_60,0);
      }
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

