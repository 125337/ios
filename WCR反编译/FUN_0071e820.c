// FUN_0071e820 @ 0071e820

void FUN_0071e820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if ((uVar1 == 1) && (FUN_0071ef54(0), (uVar1 & 1) != 0)) {
    FUN_007210dc(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

