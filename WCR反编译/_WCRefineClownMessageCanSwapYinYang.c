// _WCRefineClownMessageCanSwapYinYang @ 00f15d9c

byte _WCRefineClownMessageCanSwapYinYang(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = true;
  if (local_20 != 0) {
    lVar2 = local_20;
    _WCRefineClownMessageKey();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = lVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    lVar2 = local_20;
    FUN_00f17624();
    if (((int)lVar2 == 10000) || ((int)lVar2 == 0x2712)) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

