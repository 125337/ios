// beginUIAccess @ 015ad7d0

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackStore::beginUIAccess(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  DAT_028e3af8 = DAT_028e3af8 + 1;
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

