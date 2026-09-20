// FUN_01dd3c2c @ 01dd3c2c

void FUN_01dd3c2c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_board_026c5450);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (lVar3 != 0) {
      lVar2 = *(long *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_board_026c5450);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar3 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar2);
    }
  }
  else {
    puVar1 = PTR_WCRefineSessionStatsViewController_026ce2c0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = puVar1;
    FUN_01dc977c(*(undefined8 *)(param_1 + 0x30),puVar1);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

