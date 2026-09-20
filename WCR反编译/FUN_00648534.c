// FUN_00648534 @ 00648534

void FUN_00648534(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 ,uint param_6)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cbb10)(local_18,local_20,local_28,param_4 & 1,param_5 & 1,param_6 & 1);
  if ((param_6 & 1) != 0) {
    FUN_00660e04(DAT_02323c88,local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

