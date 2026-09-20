// FUN_0177044c @ 0177044c

void FUN_0177044c(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRegistryPublishScheduled__026b4408,0);
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_persistRegistrySnapshot_026b4398);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

