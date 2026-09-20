// FUN_008a6c48 @ 008a6c48

void FUN_008a6c48(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_2 + 0x20;
  local_20 = param_2;
  local_18 = param_2;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if ((lVar2 != 0) && (FUN_008a6b70(), lVar1 = local_28, lVar2 == *(long *)(param_2 + 0x28))) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    _CFAbsoluteTimeGetCurrent();
    FUN_008a6d2c(param_1,lVar1,uVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

