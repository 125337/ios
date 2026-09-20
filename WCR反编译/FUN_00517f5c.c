// FUN_00517f5c @ 00517f5c

void FUN_00517f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  local_18 = (undefined8 *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar1,param_4);
  if (DAT_028cb070 != (code *)0x0) {
    puVar1 = local_18;
    (*DAT_028cb070)(local_18,local_20,local_28,local_30);
  }
  FUN_0051890c();
  if (((ulong)puVar1 & 1) != 0) {
    FUN_0051a68c(local_18);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

