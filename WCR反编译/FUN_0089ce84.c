// FUN_0089ce84 @ 0089ce84

void FUN_0089ce84(byte param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_90;
  bool local_41;
  undefined *local_40;
  undefined *local_38 [3];
  undefined1 local_1a;
  byte local_19;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_19 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_1a = SUB81(puVar2,0);
  if (((ulong)puVar2 & 1) == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((local_38[0] == (undefined *)0x0) ||
       (puVar1 = local_38[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0),
       puVar1 == (undefined *)0x0)) {
      _objc_storeStrong(local_38,&cf_18_3);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    local_41 = (local_19 & 1) == 0;
    if (local_41) {
      local_90 = local_38[0];
    }
    else {
      local_90 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__O_);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_90;
    }
    local_41 = !local_41;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
    if (local_41) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    _objc_storeStrong(local_38,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

