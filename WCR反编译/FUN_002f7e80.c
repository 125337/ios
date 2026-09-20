// FUN_002f7e80 @ 002f7e80

byte FUN_002f7e80(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  byte local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  bVar1 = local_20 != 0;
  if (bVar1) {
    local_28 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    FUN_002f826c();
    local_30 = (byte)lVar2;
  }
  local_11 = local_30 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

