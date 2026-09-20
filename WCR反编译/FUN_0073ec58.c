// FUN_0073ec58 @ 0073ec58

byte FUN_0073ec58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  bVar1 = false;
  if (local_30 != 0) {
    lVar2 = local_30;
    FUN_0073f8a0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  if (bVar1) {
    local_11 = 1;
  }
  else {
    uVar3 = local_20;
    (*DAT_028cc640)(local_20,local_28,local_30);
    local_11 = (byte)uVar3 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

