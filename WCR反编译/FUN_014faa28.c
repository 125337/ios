// FUN_014faa28 @ 014faa28

void FUN_014faa28(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = DAT_028e3710;
  DAT_028e3710 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
             &cf_Asia_Shanghai);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_28 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
               &cf_Asia_Chongqing);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3710,PTR_s_setTimeZone__0269f9d8,local_40);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

