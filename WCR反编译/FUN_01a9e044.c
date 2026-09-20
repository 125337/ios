// FUN_01a9e044 @ 01a9e044

/* WARNING: Removing unreachable block (ram,0x01a9e0ec) */

void FUN_01a9e044(void)

{
  undefined *puVar1;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGroupedBackgroundColor_0269e878);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

