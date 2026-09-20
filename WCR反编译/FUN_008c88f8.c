// FUN_008c88f8 @ 008c88f8

void FUN_008c88f8(undefined8 param_1)

{
  uint uVar1;
  long lVar3;
  long local_30;
  uint local_28;
  long local_18;
  long *plVar2;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  FUN_008c8a38();
  if (((uVar1 & 1) == 0) || (DAT_028ce050 == 0)) {
    FUN_022192a0();
    local_28 = 1;
  }
  else {
    lVar3 = local_18;
    FUN_008c8ad4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar3;
    if (lVar3 != 0) {
      FUN_02219090(lVar3);
    }
    local_28 = (uint)(lVar3 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

