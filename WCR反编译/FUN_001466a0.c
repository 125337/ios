// FUN_001466a0 @ 001466a0

void FUN_001466a0(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_a8;
  undefined8 local_78;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_18;
  
  uVar1 = DAT_02323dc0;
  if (param_1 == 2) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_38 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,uVar1,uVar1,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_48 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,0x3fd3333333333333,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_a8;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

