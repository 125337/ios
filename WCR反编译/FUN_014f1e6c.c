// FUN_014f1e6c @ 014f1e6c

undefined8 FUN_014f1e6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_28;
  uint local_1c;
  undefined8 local_18;
  
  local_1c = (uint)param_1;
  if (local_1c == 0) {
    local_18 = 0xffffffffffffffff;
  }
  else {
    FUN_014dead4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = NEON_ucvtf((ulong)local_1c);
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_components_fromDate__026a44c0,0x20);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(param_1);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hour_026a44c8);
    local_18 = uVar2;
    _objc_storeStrong(&local_28,0);
  }
  return local_18;
}

