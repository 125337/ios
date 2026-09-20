// FUN_016857a8 @ 016857a8

void FUN_016857a8(void)

{
  undefined *puVar1;
  undefined8 local_20;
  
  puVar1 = PTR_WCRSuperFloatDisplayHelper_026ceea0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatDisplayHelper_026ceea0,PTR_s_enrichedSnapshot_026b2878);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_20 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue(local_20);
  return;
}

