// FUN_0013c570 @ 0013c570

void FUN_0013c570(long param_1)

{
  ulong uVar1;
  ulong local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = uVar1;
  if ((uVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_wcr_suspendPlayback_0269f2a0),
     (uVar1 & 1) == 0)) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_player_0269f278);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_player_0269f278);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

