// endUIAccess @ 015ad834

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackStore::endUIAccess(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  if ((0 < DAT_028e3af8) && (DAT_028e3af8 = DAT_028e3af8 + -1, DAT_028e3af8 == 0)) {
    DAT_028e3b00 = DAT_028e3b00 + 1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_flushDurationCacheNowIfNeede_026b0be0);
  }
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

