// FUN_0019d350 @ 0019d350

void FUN_0019d350(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double local_88;
  double local_50;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  uVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_38 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_contactsSectionPackAvatarCorner_0269e1d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_50 = 0.0;
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerEnabled_0269dfb8);
    if ((((ulong)puVar1 & 1) != 0) || (puVar3 != (undefined *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
      FUN_001a0778(param_3,param_4);
      local_50 = param_3;
    }
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerEnabled_0269dfb8);
    if (((((ulong)puVar1 & 1) == 0) ||
        (puVar1 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerBorderEnabled_0269dfc8),
        ((ulong)puVar1 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerBorderSize_0269dfd0),
       local_50 <= 0.0)) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_avatarCornerBorderSize_0269dfd0);
      if (0.0 <= local_50) {
        local_88 = local_50;
        if (5.0 < local_50) {
          local_88 = 5.0;
        }
      }
      else {
        local_88 = 0.0;
      }
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_88);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_28;
      FUN_001a0a60();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_CGColor_026ca470);
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

