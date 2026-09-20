// FUN_00641458 @ 00641458

void FUN_00641458(long param_1)

{
  cfstringStruct *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar2;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isCancelled_026a1c20);
    pcVar1 = &cf_home_transition_cancelled;
    if ((uVar5 & 1) == 0) {
      pcVar1 = &cf_home_transition_completed;
    }
    uVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isCancelled_026a1c20);
    FUN_00636798(lVar2,lVar4,pcVar1,(uVar5 & 1) == 0);
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

