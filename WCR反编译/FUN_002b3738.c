// FUN_002b3738 @ 002b3738

long FUN_002b3738(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_002b3a24(local_20,param_2);
  if (lVar1 + -0x7fffffffffffffff == 0) {
    local_18 = 0x7fffffffffffffff;
  }
  else {
    lVar2 = local_20;
    FUN_002b3c08(lVar1 + -0x7fffffffffffffff,local_20,lVar1);
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

