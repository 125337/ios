// FUN_002cfb34 @ 002cfb34

void FUN_002cfb34(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_c0;
  undefined *local_98;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_40;
  undefined *local_38 [3];
  undefined *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_18;
  local_20 = puVar2;
  FUN_002b13fc();
  bVar1 = (uVar3 & 1) == 0;
  local_98 = local_20;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatingTabBarStrokeColorLight_026a1ba8);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_98;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_floatingTabBarStrokeColorDark_026a1ba0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_98;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38[0] = local_98;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (local_38[0] == (undefined *)0x0) {
    uVar3 = local_18;
    FUN_002b13fc();
    bVar1 = (uVar3 & 1) == 0;
    local_c0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0,DAT_02323d40,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_c0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,DAT_02323db8,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_c0;
    }
    _objc_storeStrong(local_38,local_c0);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
  }
  puVar2 = local_38[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

