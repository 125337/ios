// FUN_003b4484 @ 003b4484

/* WARNING: Removing unreachable block (ram,0x003b45f4) */
/* WARNING: Removing unreachable block (ram,0x003b45d4) */

void FUN_003b4484(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = (undefined *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = &DAT_028ca0d8;
    _objc_loadWeakRetained();
    puVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == puVar1) {
      puVar2 = local_28;
      FUN_003b4224(0);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLiveRefreshScheduled__026a2e88,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcrGrouping_refreshFromLiveData_026a26a0);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLiveRefreshScheduled__026a2e88,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLiveRefreshScheduled__026a2e88,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

