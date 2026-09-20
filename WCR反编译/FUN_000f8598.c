// FUN_000f8598 @ 000f8598

void FUN_000f8598(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_48 [3];
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  FUN_000fad94(local_18,0,0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_18;
  local_30 = lVar1;
  FUN_000fad94(local_18,1,0);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = lVar2;
  if ((local_28 == local_30) || (local_28 - lVar2 == 0)) {
    FUN_00102c2c(0,local_18,local_28);
  }
  else {
    FUN_00103314(local_28 - lVar2,local_18);
    (*DAT_028c8428)(local_18,local_20,local_28);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

