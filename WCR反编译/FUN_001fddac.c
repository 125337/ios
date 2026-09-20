// FUN_001fddac @ 001fddac

void FUN_001fddac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **local_78;
  undefined **local_68;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38 [3];
  byte local_19;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  FUN_001d6008();
  local_19 = (byte)puVar2;
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatTimeRoundTextColorLight_026a0458);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_18;
  local_38[0] = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatTimeRoundTextColorDark_026a0460);
  _objc_retainAutoreleasedReturnValue();
  if ((local_19 & 1) == 0) {
    local_68 = local_38;
  }
  else {
    local_68 = &local_40;
  }
  puVar2 = *local_68;
  local_40 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    if ((local_19 & 1) == 0) {
      local_78 = &local_40;
    }
    else {
      local_78 = local_38;
    }
    _objc_storeStrong(&local_48,*local_78);
  }
  if (local_48 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

