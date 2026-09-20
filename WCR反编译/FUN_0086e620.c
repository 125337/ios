// FUN_0086e620 @ 0086e620

void FUN_0086e620(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5
                 ,uint param_6)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((DAT_028cd85d & 1) == 0) || (uVar1 = local_28, FUN_0088d270(), (uVar1 & 1) == 0)) {
    (*DAT_028cd718)(local_18,local_20,local_28,param_4 & 1,param_5 & 1,param_6 & 1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

