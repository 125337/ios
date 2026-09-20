// FUN_000a54bc @ 000a54bc

byte FUN_000a54bc(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  ulong local_108;
  ulong local_f0;
  uint local_b4;
  ulong local_68;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_b4 = 1;
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = local_30;
    FUN_000a58f4();
    uVar4 = local_38;
    local_b4 = 1;
    if ((uVar3 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_b4 = (uint)uVar4 ^ 1;
    }
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar4 = local_30;
  if ((local_b4 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar4 & 1) == 0) {
      local_f0 = 0;
    }
    else {
      local_f0 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_108 = local_f0;
    if (local_f0 == 0) {
      local_58 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_108;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_108;
    if (local_f0 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(local_f0);
    if (local_50 == 0) {
      local_21 = false;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
      _CGRectGetWidth(param_1,param_2,param_3,param_4);
      dVar5 = param_1;
      FUN_000a5980();
      if ((param_1 <= 0.0) || (dVar5 <= 0.0)) {
        local_21 = false;
      }
      else {
        dVar6 = dVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_50);
        local_21 = param_1 - dVar5 <= dVar6;
      }
    }
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  else {
    local_21 = false;
    local_3c = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

