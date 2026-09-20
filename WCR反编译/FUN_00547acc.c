// FUN_00547acc @ 00547acc

void FUN_00547acc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  (*DAT_028cb3a8)(local_18,local_20,local_28);
  FUN_00551580();
  FUN_00551868();
  FUN_0055101c((double)lVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

