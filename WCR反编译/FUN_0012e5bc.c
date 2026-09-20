// FUN_0012e5bc @ 0012e5bc

void FUN_0012e5bc(byte param_1,byte param_2)

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
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatTimeTextColorOther_0269f058);
      _objc_retainAutoreleasedReturnValue();
      local_118 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_80 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
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
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatTimeTextColor_0269f050);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar1;
      if (puVar1 == (undefined *)0x0) {
        local_70 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
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
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatTimeDarkTextColorOther_0269f048);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_60 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
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
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatTimeDarkTextColor_0269f040);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_50 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
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

