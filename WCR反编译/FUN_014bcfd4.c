// FUN_014bcfd4 @ 014bcfd4

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_014bcfd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = DAT_028e3680;
  DAT_028e3680 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3680,PTR_s_setTimeZone__0269f9d8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

