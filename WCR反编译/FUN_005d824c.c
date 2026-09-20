// FUN_005d824c @ 005d824c

void FUN_005d824c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cb7c8)(local_18,local_20,local_28);
  lVar1 = local_18;
  FUN_005db058();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar1;
  if (lVar1 != 0) {
    DAT_028cb7d1 = 1;
    FUN_005d8d4c(lVar1);
    DAT_028cb7d1 = 0;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

