// FUN_0009da9c @ 0009da9c

void FUN_0009da9c(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  double local_190;
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [48];
  double local_b8;
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [64];
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_28 == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_avatarCornerScaleEnabled_0269e168);
    uVar3 = local_30;
    if (((ulong)puVar2 & 1) == 0) {
      local_34 = 1;
    }
    else {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerScaleSceneFilter_0269e170);
      _objc_retainAutoreleasedReturnValue();
      FUN_0009df5c();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if ((uVar3 & 1) == 0) {
        _memcpy(auStack_80,PTR__CGAffineTransformIdentity_025782d8,0x30);
        lVar1 = local_28;
        _memcpy(auStack_b0,auStack_80,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_b0);
        local_34 = 1;
      }
      else {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_profile);
        if ((uVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerScale_0269e188);
          local_190 = param_1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerProfileScale_0269e180);
          local_190 = param_1;
        }
        local_b8 = local_190;
        FUN_0009e008();
        local_b8 = local_190;
        if (DAT_02323d10 <= ABS(local_190 - 1.0)) {
          _CGAffineTransformMakeScale(auStack_e8,local_190,local_190);
        }
        else {
          _memcpy(auStack_e8,PTR__CGAffineTransformIdentity_025782d8,0x30);
        }
        lVar1 = local_28;
        _memcpy(auStack_118,auStack_e8,0x30);
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setTransform__026caad0,auStack_118);
        local_34 = 0;
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

