// FUN_015d16dc @ 015d16dc

uint FUN_015d16dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  uint local_34;
  undefined8 local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf__);
  local_34 = 0;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf___MACOSX);
    local_34 = (uint)uVar1 ^ 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_34 & 1;
}

