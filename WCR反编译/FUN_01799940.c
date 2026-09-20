// FUN_01799940 @ 01799940

void FUN_01799940(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    lVar2 = local_18;
    _objc_retainBlock();
    local_28 = lVar2;
    (**(code **)(lVar2 + 0x10))();
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

