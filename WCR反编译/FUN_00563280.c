// FUN_00563280 @ 00563280

void FUN_00563280(undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,uint param_5
                 )

{
  undefined8 local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  if (((local_21 & 1) != 0) && ((DAT_028cb559 & 1) == 0)) {
    FUN_005717f4(local_18,local_30);
  }
  (*DAT_028cb4e8)(local_18,local_20,local_21 & 1,local_30,param_5 & 1);
  _objc_storeStrong(&local_30,0);
  return;
}

