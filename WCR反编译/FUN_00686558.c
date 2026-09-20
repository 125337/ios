// FUN_00686558 @ 00686558

void FUN_00686558(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  FUN_0067f32c(local_28);
  uVar1 = local_20;
  FUN_006909b0(local_20,local_28,local_28);
  if ((uVar1 & 1) == 0) {
    if (local_18 == 0) {
      FUN_00684440(&cf_6e>kS1Y_);
    }
    else {
      FUN_00691874(local_18,local_28);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

