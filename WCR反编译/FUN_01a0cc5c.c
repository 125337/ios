// FUN_01a0cc5c @ 01a0cc5c

void FUN_01a0cc5c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long local_40;
  uint local_34;
  ulong local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = uVar2;
  if (uVar2 == 0) {
    local_34 = 1;
  }
  else {
    lVar3 = local_20;
    FUN_01a08fe8();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    bVar1 = true;
    if (lVar3 != 0) {
      uVar5 = *(ulong *)(param_1 + 0x28);
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar4 <= uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    if (!bVar1) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_persistItems_026bb728);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__fbc);
    }
    local_34 = (uint)bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

