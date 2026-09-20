// FUN_000bf144 @ 000bf144

void FUN_000bf144(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_20 != 0) &&
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_containsObject__0269cbb8,local_20),
     (uVar1 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_addObject__0269d180,local_20);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

