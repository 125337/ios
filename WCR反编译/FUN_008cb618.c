// FUN_008cb618 @ 008cb618

void FUN_008cb618(void)

{
  undefined *puVar1;
  undefined8 local_20;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_20 = (undefined *)0x0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue(local_20);
  return;
}

