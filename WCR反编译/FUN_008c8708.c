// FUN_008c8708 @ 008c8708

void FUN_008c8708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 uint param_5)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028ce1e0)(local_18,local_20,local_28,param_4,param_5 & 1);
  _objc_storeStrong(&local_28,0);
  return;
}

