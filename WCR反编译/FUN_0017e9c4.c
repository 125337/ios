// FUN_0017e9c4 @ 0017e9c4

undefined * FUN_0017e9c4(uint param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *local_90;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  undefined4 local_2c;
  undefined1 *local_28;
  uint local_1c;
  undefined *local_18;
  
  if (param_1 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    uVar3 = NEON_ucvtf((ulong)param_1);
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_1c = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    if (puVar1 == (undefined1 *)0x0) {
      local_18 = (undefined *)0x0;
      local_2c = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_28;
      local_38 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_compare__0269cd10,puVar1);
      if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        local_18 = (undefined *)0x0;
        local_2c = 1;
      }
      else {
        local_90 = PTR__OBJC_CLASS___NSCalendar_026ce070;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
        _objc_retainAutoreleasedReturnValue();
        local_50[0] = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_components_fromDate_toDate_optio_0269fa20,4,local_28,local_38,0);
        _objc_retainAutoreleasedReturnValue();
        local_58 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_year_0269fa28);
        if ((long)local_90 < 0) {
          local_90 = (undefined *)0x0;
        }
        local_18 = local_90;
        local_2c = 1;
        _objc_storeStrong(&local_58);
        _objc_storeStrong(local_50,0);
      }
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_28,0);
  }
  return local_18;
}

