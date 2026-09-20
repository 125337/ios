// FUN_002db080 @ 002db080

void FUN_002db080(undefined8 param_1)

{
  long lVar1;
  long local_40 [3];
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
    _objc_getAssociatedObject(local_18,&DAT_028c9822);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_pause_0269f2d8);
    lVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9823);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setHidden__026ca970,0);
    }
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

