// _WCRefineClearClownOverridesForMessage @ 00f1af34

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void _WCRefineClearClownOverridesForMessage(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  _WCRefineClownMessageKey();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    _WCRefineSetClownTextOverride(local_18);
    _WCRefineSetClownTimeOverride(local_18,0);
    _WCRefineSetClownYinYangOverride(local_18,0);
    FUN_00f16cb4();
    lVar1 = DAT_028e2b58;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b58,PTR_s_removeObjectForKey__0269d700,local_20);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b60,PTR_s_removeObjectForKey__0269d700,local_20);
    lVar2 = DAT_028e2b58;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b58,PTR_s_count_0269cfe0);
    _DAT_028e2bb4 = (uint)(lVar2 != 0);
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b38,PTR_s_removeObjectForKey__0269d700,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

