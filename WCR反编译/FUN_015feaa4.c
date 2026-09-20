// FUN_015feaa4 @ 015feaa4

void FUN_015feaa4(long param_1)

{
  long lVar1;
  long lVar2;
  uint local_3c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_3c = 1;
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_3c = (uint)lVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  if ((local_3c & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLoadingNextSessionPage__026b1748,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshSessionList_026b1418);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLoadingNextSessionPage__026b1748,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

