// FUN_0033c2c8 @ 0033c2c8

void FUN_0033c2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  long local_88;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  if (local_38 == 0) {
    local_88 = local_30;
  }
  else {
    local_88 = local_38;
  }
  FUN_0033e0e0(local_28,local_18,local_88);
  if (DAT_028c9f40 != (code *)0x0) {
    (*DAT_028c9f40)(local_18,local_20,local_28,local_30,local_38);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

