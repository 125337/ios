// FUN_000693b4 @ 000693b4

void FUN_000693b4(undefined8 param_1)

{
  long lVar1;
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
    _objc_getAssociatedObject(local_18,&DAT_028c7cb0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (lVar1 == 0) {
      local_1c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stop_0269dd58);
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tapMonitor_0269dcf8);
      _objc_retainAutoreleasedReturnValue();
      local_30 = lVar1;
      if (lVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_removeGestureRecognizer__026ca808,lVar1);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTapMonitor__0269dd08,0);
      }
      _objc_setAssociatedObject(local_18,&DAT_028c7cb0,0,1);
      _objc_storeStrong(&local_30,0);
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

