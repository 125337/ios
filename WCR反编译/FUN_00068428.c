// FUN_00068428 @ 00068428

void FUN_00068428(long param_1)

{
  long lVar1;
  long lVar2;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if ((local_28 != 0) && (lVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_panGestureRecognizer_0269dd98);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),local_28,PTR_s_startWithSpeed__0269dda8);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

