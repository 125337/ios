// FUN_001da018 @ 001da018

void FUN_001da018(undefined8 param_1)

{
  long lVar1;
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
    _objc_getAssociatedObject(local_18,DAT_026dfa98);
    _objc_retainAutoreleasedReturnValue();
    local_28 = lVar1;
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_removeFromSuperlayer_026ca7f8);
      _objc_setAssociatedObject(local_18,DAT_026dfa98,0,1);
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

