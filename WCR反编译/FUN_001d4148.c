// FUN_001d4148 @ 001d4148

void FUN_001d4148(undefined8 param_1)

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
  FUN_001cf8b0();
  if (((uVar1 & 1) == 0) || (local_18 == 0)) {
    local_28 = 1;
  }
  else {
    lVar3 = local_18;
    FUN_001d4d18();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar3;
    if (lVar3 != 0) {
      FUN_001d0988(lVar3);
    }
    local_28 = (uint)(lVar3 == 0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

