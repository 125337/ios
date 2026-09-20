// FUN_007d06d0 @ 007d06d0

byte FUN_007d06d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)lVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

