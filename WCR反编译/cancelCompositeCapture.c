// cancelCompositeCapture @ 010a73b0

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageRepositoryStore::cancelCompositeCapture(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  DAT_028e3310 = 0;
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

