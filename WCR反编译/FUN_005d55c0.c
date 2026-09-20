// FUN_005d55c0 @ 005d55c0

void FUN_005d55c0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar3 = param_1 + 0x30;
  local_28 = lVar2;
  _objc_loadWeakRetained();
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
  local_30 = lVar3;
  FUN_005d5760();
  if ((uVar1 & 1) != 0) {
    if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_WCRefine_reloadTimeline_026a5830);
    }
    else {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_unsafeClaimAutoreleasedReturnValue(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

