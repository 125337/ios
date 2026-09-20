// FUN_0071e8f8 @ 0071e8f8

void FUN_0071e8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulong *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0071ef54();
  if (((uVar1 & 1) != 0) &&
     (((uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
       uVar3 == 2 ||
       (uVar3 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20),
       uVar3 == 3)) && (uVar3 = local_28, FUN_00722790(0), (uVar3 & 1) != 0)))) {
    FUN_007210dc(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

