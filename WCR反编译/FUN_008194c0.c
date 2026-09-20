// FUN_008194c0 @ 008194c0

void FUN_008194c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028cd180)(local_18,local_20,local_28);
  _WCRFrostedBubbleApplyToCell(local_18);
  _objc_storeStrong(&local_28,0);
  return;
}

