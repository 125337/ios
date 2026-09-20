// FUN_0060f8a0 @ 0060f8a0

void FUN_0060f8a0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long local_48;
  int local_40;
  byte local_29;
  long local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_29 = param_3;
  if ((local_20 == (undefined *)0x0) ||
     (puVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     puVar2 = local_20, puVar1 == (undefined *)0x0)) {
    puVar2 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_40 = 1;
  }
  else if ((local_29 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_40 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_20;
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_40 = 1;
    }
    else if (local_28 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
      local_40 = 1;
    }
    else {
      lVar3 = local_28;
      FUN_00615570();
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar3;
      if ((lVar3 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0), lVar3 == 0)) {
        uVar4 = 0;
        local_40 = 0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = 1;
        local_40 = 1;
        local_18 = puVar2;
      }
      _objc_storeStrong(uVar4,&local_48,0);
      puVar2 = local_20;
      if (local_40 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar2;
        local_40 = 1;
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

