// FUN_01587398 @ 01587398

byte FUN_01587398(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_01528d34();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
  }
  else {
    FUN_015794bc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _objc_sync_enter();
    FUN_015794bc();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)lVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

