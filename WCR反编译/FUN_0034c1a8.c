// FUN_0034c1a8 @ 0034c1a8

void FUN_0034c1a8(long param_1)

{
  long lVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_handler_0269fbe8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_handler_0269fbe8);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

