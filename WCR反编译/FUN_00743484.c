// FUN_00743484 @ 00743484

void FUN_00743484(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  undefined8 local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_34 = param_5;
  _objc_storeStrong(&local_40,param_6);
  (*DAT_028cc700)(local_18,local_20,local_28,local_30,local_34,local_40);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return;
}

