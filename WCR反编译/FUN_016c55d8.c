// FUN_016c55d8 @ 016c55d8

void FUN_016c55d8(undefined8 param_1,byte param_2,byte param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  undefined8 local_28;
  byte local_1a;
  byte local_19;
  undefined8 local_18;
  
  local_28 = 0;
  local_1a = param_3;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_4);
  if ((local_19 & 1) == 0) {
    FUN_016abf68(&cf__Sm_gmR);
  }
  else {
    pcVar1 = &cf__fbcTTagv_SNS;
    if ((local_1a & 1) == 0) {
      pcVar1 = &cf__mR;
    }
    FUN_016abf68(pcVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

