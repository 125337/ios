// FUN_0054255c @ 0054255c

byte FUN_0054255c(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  byte local_40;
  long local_38;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar3 = local_20;
  uVar2 = 0;
  local_40 = 0;
  bVar1 = local_20 != 0;
  if (bVar1) {
    FUN_005426b8();
    _objc_getAssociatedObject(lVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = (byte)lVar4;
    local_38 = lVar3;
  }
  local_11 = local_40 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

