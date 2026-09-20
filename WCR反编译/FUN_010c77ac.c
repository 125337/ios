// FUN_010c77ac @ 010c77ac

void FUN_010c77ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  _objc_autoreleasePoolPush();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_allCachedDataItems_026ae7a0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_autoCleanupVisibleItemsOlderThan_026ae7a8,
             *(undefined8 *)(param_1 + 0x28));
  _objc_autoreleasePoolPop(lVar1);
  return;
}

