// FUN_0012eae8 @ 0012eae8

void FUN_0012eae8(byte param_1,byte param_2)

{
  undefined *puVar1;
  undefined *local_118;
  undefined *local_f0;
  undefined *local_c8;
  undefined *local_a0;
  undefined *local_80;
  undefined *local_70;
  undefined *local_60;
  undefined *local_50;
  undefined *local_38;
  byte local_2a;
  byte local_29;
  undefined *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_2a = param_2;
  local_29 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if ((local_2a & 1) == 0) {
    if ((local_29 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatTimeBackgroundColorOther_0269f078);
      _objc_retainAutoreleasedReturnValue();
      local_118 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_80 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
        _objc_retainAutoreleasedReturnValue();
        local_118 = local_80;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_118;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatTimeBackgroundColor_0269f070);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_70 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_70;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_f0;
      if (puVar1 == (undefined *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  else if ((local_29 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatTimeDarkBackgroundColorOther_0269f068);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_60 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_c8;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatTimeDarkBackgroundColor_0269f060);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_50 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBlueColor_026cab58);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_a0;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

