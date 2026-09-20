// FUN_0163a198 @ 0163a198

void FUN_0163a198(void)

{
  undefined *puVar1;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar1;
  if (DAT_028e3cc8 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeObserver__0269f128,DAT_028e3cc8);
    _objc_storeStrong(&DAT_028e3cc8,0);
  }
  if (DAT_028e3cd0 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObserver__0269f128,DAT_028e3cd0);
    _objc_storeStrong(&DAT_028e3cd0,0);
  }
  if (DAT_028e3cf0 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObserver__0269f128,DAT_028e3cf0);
    _objc_storeStrong(&DAT_028e3cf0,0);
  }
  if (DAT_028e3cf8 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObserver__0269f128,DAT_028e3cf8);
    _objc_storeStrong(&DAT_028e3cf8,0);
  }
  if (DAT_028e3d00 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObserver__0269f128,DAT_028e3d00);
    _objc_storeStrong(&DAT_028e3d00,0);
  }
  if (DAT_028e3d08 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObserver__0269f128,DAT_028e3d08);
    _objc_storeStrong(&DAT_028e3d08,0);
  }
  if (DAT_028e3d10 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObserver__0269f128,DAT_028e3d10);
    _objc_storeStrong(&DAT_028e3d10,0);
  }
  if (DAT_028e3d18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObserver__0269f128,DAT_028e3d18);
    _objc_storeStrong(&DAT_028e3d18,0);
  }
  FUN_01686b84();
  DAT_028e3d2b = 0;
  DAT_028e3d30 = 0;
  FUN_01686f5c();
  _objc_storeStrong(&local_18,0);
  return;
}

