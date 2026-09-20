// FUN_01b00a90 @ 01b00a90

void FUN_01b00a90(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_backgroundPlayer_026be668);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundVideoPausedByVisibilit_026be7b8);
    bVar1 = false;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar2 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (bVar1) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundPlayer_026be668);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

