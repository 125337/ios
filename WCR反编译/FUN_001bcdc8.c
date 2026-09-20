// FUN_001bcdc8 @ 001bcdc8

void FUN_001bcdc8(long param_1,undefined8 param_2)

{
  long lVar1;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8ba0)(param_1,param_2);
  lVar1 = local_18;
  FUN_001f26a0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 != 0) {
    FUN_001f29cc(lVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

