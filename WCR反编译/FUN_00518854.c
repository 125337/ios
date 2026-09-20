// FUN_00518854 @ 00518854

void FUN_00518854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(puVar1,param_3);
  FUN_0051890c();
  if ((((ulong)puVar1 & 1) == 0) && (DAT_028cb0a0 != (code *)0x0)) {
    (*DAT_028cb0a0)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

