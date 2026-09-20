// isCompositeCapturePending @ 010a740c

/* Function Stack Size: 0x10 bytes */

bool WCRefineMessageRepositoryStore::isCompositeCapturePending(ID param_1,SEL param_2)

{
  uint uVar1;
  
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  uVar1 = (uint)DAT_028e3310;
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return uVar1 & 1;
}

