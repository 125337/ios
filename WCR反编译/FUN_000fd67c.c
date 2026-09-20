// FUN_000fd67c @ 000fd67c

undefined8
FUN_000fd67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5,undefined8 param_6)

{
  undefined8 local_a0;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_28 = 0;
  local_20 = param_1;
  uStack_18 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_38 = param_5;
  _objc_storeStrong(&local_40,param_6);
  local_a0 = local_20;
  if (local_38 + -1 == 0) {
    FUN_000fd818(local_20,uStack_18,local_28,local_30);
  }
  else {
    FUN_000fe51c(local_38 + -1,local_20,uStack_18,local_30,local_40);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_a0;
}

