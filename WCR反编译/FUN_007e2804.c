// FUN_007e2804 @ 007e2804

void FUN_007e2804(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  DAT_026f46ca = 1;
  _objc_storeStrong(&DAT_028ccd18);
  DAT_026f46c9 = 1;
  _objc_storeStrong(&DAT_028ccd20,0);
  DAT_026f46c8 = 1;
  _objc_storeStrong(&DAT_028ccd28,0);
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028ccd30;
  DAT_028ccd30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

