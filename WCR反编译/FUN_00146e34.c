// FUN_00146e34 @ 00146e34

void FUN_00146e34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  FUN_0014735c(local_28,&cf_applyLiquid_pre);
  if (DAT_028c87a0 != (code *)0x0) {
    (*DAT_028c87a0)(local_18,local_20,local_28);
  }
  FUN_0014735c(local_28,&cf_applyLiquid_post);
  if ((DAT_028c87b8 & 1) != 0) {
    FUN_001473c8(local_28);
  }
  if (((DAT_028c87b8 & 1) != 0) || ((DAT_028c87b9 & 1) != 0)) {
    FUN_00147a34(local_28);
    FUN_0014735c(local_28,&cf_applyLiquid_forced);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

