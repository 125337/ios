// FUN_0150cc6c @ 0150cc6c

void FUN_0150cc6c(undefined8 param_1)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined *local_a8;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  long local_40;
  byte *local_38;
  undefined4 local_30;
  byte local_29;
  byte *local_28;
  byte *local_20;
  undefined *local_18;
  
  local_20 = (byte *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pbVar2 = local_20;
  FUN_0150c520(local_20,0x17);
  _objc_retainAutoreleasedReturnValue();
  local_29 = pbVar2 != (byte *)0x0;
  local_28 = pbVar2;
  if (pbVar2 == (byte *)0x0) {
    pbVar3 = local_20;
    FUN_0150c520(local_20,0x18);
    _objc_retainAutoreleasedReturnValue();
    pbVar2 = local_28;
    local_28 = pbVar3;
    (*(code *)PTR__objc_release_02578630)(pbVar2);
  }
  pbVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  pbVar2 = local_28;
  iVar8 = 0xd;
  if ((local_29 & 1) == 0) {
    iVar8 = 0xf;
  }
  if (pbVar3 != (byte *)(long)iVar8) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
    goto LAB_0150d158;
  }
  _objc_retainAutorelease(0);
  (*(code *)PTR__objc_msgSend_02578628)(pbVar2,PTR_s_bytes_026a9630);
  pbVar3 = local_28;
  local_38 = pbVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pbVar2[(long)(pbVar3 + -1)] != 0x5a) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
    goto LAB_0150d158;
  }
  for (local_40 = 0; pbVar2 = (byte *)(local_40 + 1), pbVar3 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0), pbVar2 < pbVar3;
      local_40 = local_40 + 1) {
    if ((local_38[local_40] < 0x30) || (0x39 < local_38[local_40])) {
      local_18 = (undefined *)0x0;
      local_30 = 1;
      goto LAB_0150d158;
    }
  }
  pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_48 = pcVar4;
  if ((local_29 & 1) != 0) {
    pcVar5 = &cf_19;
    if (*local_38 < 0x35) {
      pcVar5 = &cf_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_stringByAppendingString__0269d398,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_48;
    local_48 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  puVar6 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  puVar7 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  local_50 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_en_US_POSIX);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  puVar6 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCalendar__026aff50);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneForSecondsFromGMT__026aff58,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTimeZone__0269f9d8);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_setDateFormat__0269d1c8,&cf_yyyyMMddHHmmss_Z_);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setLenient__026aff60,0);
  puVar6 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_dateFromString__026aa6a8,local_48);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_58 = puVar6;
  if (puVar6 == (undefined *)0x0) {
LAB_0150d0dc:
    local_a8 = (undefined *)0x0;
  }
  else {
    local_60 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_stringFromDate__0269d1d8,puVar6);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    puVar6 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (((ulong)puVar6 & 1) == 0) goto LAB_0150d0dc;
    local_a8 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  local_30 = 1;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_0150d158:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

