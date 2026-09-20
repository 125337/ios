// FUN_014ee1e0 @ 014ee1e0

long FUN_014ee1e0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_1c = (uint)param_1;
  if (local_1c == 0) {
    local_18 = 0;
  }
  else {
    FUN_014dead4();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = NEON_ucvtf((ulong)local_1c);
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_components_fromDate__026a44c0,0x1c);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(param_1);
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_year_0269fa28);
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_month_026a52a8);
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_day_026a4c38);
    local_18 = lVar2 * 10000 + lVar3 * 100 + lVar4;
    _objc_storeStrong(&local_28,0);
  }
  return local_18;
}

