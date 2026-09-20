// FUN_002b156c @ 002b156c

void FUN_002b156c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_f0;
  undefined *local_b0;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_floatingTabBarSelectedBackground_026a1a58);
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = local_30;
    FUN_002b13fc();
    bVar1 = (uVar3 & 1) == 0;
    local_b0 = local_38;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_floatingTabBarSelectedBackground_026a1a68);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_b0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_floatingTabBarSelectedBackground_026a1a60);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_b0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50[0] = local_b0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    puVar2 = local_50[0];
    if (local_50[0] == (undefined *)0x0) {
      bVar1 = false;
    }
    else {
      uVar3 = local_30;
      FUN_002b13fc();
      uVar4 = 0x3fd3333333333333;
      if ((uVar3 & 1) == 0) {
        uVar4 = DAT_02323d58;
      }
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,puVar2,PTR_s_colorWithAlphaComponent__026ca578);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_28 = puVar2;
    }
    _objc_storeStrong(local_50,0);
    if (bVar1) goto LAB_002b19b8;
  }
  uVar3 = local_30;
  FUN_002b13fc();
  bVar1 = (uVar3 & 1) == 0;
  local_f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323f18,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_f0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,DAT_02323cc0,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_f0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_f0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
LAB_002b19b8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

