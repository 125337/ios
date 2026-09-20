// FUN_000dde88 @ 000dde88

void FUN_000dde88(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long local_b0;
  long local_50;
  undefined4 local_44;
  long local_40 [3];
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_000d8d08(local_20,"m_oMemContact");
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = &cf_m_nsUsrName;
  local_28 = lVar1;
  _NSSelectorFromString();
  FUN_000d8fe0(lVar1,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  lVar3 = local_40[0];
  if (lVar1 == 0) {
    lVar1 = local_20;
    FUN_000d8d08(0,local_20,"m_logic");
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_m_nsMemName;
    local_50 = lVar1;
    _NSSelectorFromString();
    FUN_000d8fe0(lVar1,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_40[0];
    local_40[0] = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
    if (lVar3 == 0) {
      local_b0 = 0;
    }
    else {
      local_b0 = local_40[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_b0;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar3;
    local_44 = 1;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

