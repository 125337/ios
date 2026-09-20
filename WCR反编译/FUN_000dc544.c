// FUN_000dc544 @ 000dc544

byte FUN_000dc544(undefined8 param_1)

{
  uint uVar1;
  long lVar3;
  long local_38;
  undefined4 local_30;
  long local_20;
  byte local_11;
  long *plVar2;
  
  plVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  if ((local_20 == 0) || (FUN_000d8808(), (uVar1 & 1) == 0)) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    lVar3 = local_20;
    FUN_000dc670();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_selectedSegmentIndex_0269e998);
    local_11 = lVar3 == 3;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

