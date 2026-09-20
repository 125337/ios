// FUN_014fb5a8 @ 014fb5a8

ulong FUN_014fb5a8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_70;
  ulong local_68;
  uint local_5c;
  uint local_58;
  uint local_54;
  ulong local_50;
  ulong local_30;
  uint local_28;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_014fb998;
  }
  uVar1 = local_20;
  FUN_014e48f4(local_20,&cf_m_uiAge);
  local_28 = (uint)uVar1;
  if ((local_28 != 0) && (local_28 < 0x79)) {
    local_18 = uVar1 & 0xffffffff;
    local_24 = 1;
    goto LAB_014fb998;
  }
  local_30 = 0;
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsAge);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if ((((uVar1 & 1) == 0) ||
      (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750)
      , local_50 = uVar1, (long)uVar1 < 1)) || (0x78 < (long)uVar1)) {
    uVar1 = local_20;
    FUN_014e48f4(local_20,&cf_m_uiBirthYear);
    local_54 = (uint)uVar1;
    if ((0x76b < local_54) && (local_54 < 0x834 || local_54 - 0x834 == 0)) {
      uVar1 = local_20;
      FUN_014e48f4(local_54 - 0x834,local_20,&cf_m_uiBirthMonth);
      local_58 = (uint)uVar1;
      uVar1 = local_20;
      FUN_014e48f4(local_20,&cf_m_uiBirthDay);
      local_5c = (uint)uVar1;
      FUN_014dead4();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_components_fromDate__026a44c0,0x1c);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_70 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_year_0269fa28);
      local_70 = local_70 - local_54;
      if ((((local_58 != 0) && ((local_58 < 0xd && (local_5c != 0)))) && (local_5c < 0x20)) &&
         ((uVar1 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_month_026a52a8),
          (long)uVar1 < (long)(ulong)local_58 ||
          ((uVar1 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_month_026a52a8),
           uVar1 == local_58 &&
           (uVar1 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_day_026a4c38),
           (long)uVar1 < (long)(ulong)local_5c)))))) {
        local_70 = local_70 - 1;
      }
      lVar4 = local_70 - 1;
      if (((long)local_70 < 1) || (lVar4 = local_70 - 0x78, lVar4 != 0 && 0x77 < (long)local_70)) {
        local_24 = 0;
      }
      else {
        local_18 = local_70;
        lVar4 = 1;
        local_24 = 1;
      }
      _objc_storeStrong(lVar4,&local_68,0);
      if (local_24 != 0) goto LAB_014fb988;
    }
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_24 = 1;
    local_18 = uVar1;
  }
LAB_014fb988:
  _objc_storeStrong(&local_30,0);
LAB_014fb998:
  _objc_storeStrong(&local_20,0);
  return local_18;
}

