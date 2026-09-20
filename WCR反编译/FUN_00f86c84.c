// FUN_00f86c84 @ 00f86c84

void FUN_00f86c84(undefined8 param_1)

{
  long lVar1;
  long local_38;
  long local_30;
  long local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f723);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_viewWithTag__026cabe0,0x24f722);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeFromSuperview_026ca800);
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f722);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_18;
    FUN_00f876ec();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_viewWithTag__026cabe0,0x24f723);
      _objc_retainAutoreleasedReturnValue();
      local_38 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_viewWithTag__026cabe0,0x24f722);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeFromSuperview_026ca800);
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewWithTag__026cabe0,0x24f722);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

