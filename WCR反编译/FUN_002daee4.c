// FUN_002daee4 @ 002daee4

void FUN_002daee4(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long local_48;
  long local_40 [3];
  long local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    lVar2 = local_18;
    FUN_0029ded4(local_18,0x24f749);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_18;
    local_28 = lVar2;
    FUN_0029ded4(local_18,0x24f74b);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_18;
    local_40[0] = lVar3;
    FUN_0029ded4(local_18,0x24f757);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    FUN_002db080(local_28);
    FUN_002db080(local_40[0]);
    FUN_002db080(local_48);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(local_40,0);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

