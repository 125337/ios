// FUN_007520f0 @ 007520f0

void FUN_007520f0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_50;
  cfstringStruct *local_48 [3];
  int local_30;
  uint local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar2 = local_20;
    FUN_00748ad4(local_20,&cf_m_uiMessageType);
    local_30 = (int)pcVar2;
    if (local_30 == 1) {
      pcVar2 = local_20;
      FUN_0074c5f8(0,local_20,&cf_m_nsContent);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
      pcVar2 = local_48[0];
      bVar1 = pcVar3 != (cfstringStruct *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      local_2c = (uint)bVar1;
      _objc_storeStrong(bVar1,local_48,0);
      if (local_2c != 0) goto LAB_00752454;
    }
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    FUN_00743f78();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_Q_);
    if (((ulong)puVar4 & 1) == 0) {
      pcVar2 = local_28;
      FUN_007524a8();
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_SN;
    }
    local_2c = 1;
    _objc_storeStrong(&local_50,0);
  }
LAB_00752454:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

