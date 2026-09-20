// FUN_00179ec8 @ 00179ec8

byte FUN_00179ec8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_0017bc94();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    FUN_0017b8cc();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = lVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

