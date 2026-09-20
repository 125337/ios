// FUN_00611dc4 @ 00611dc4

void FUN_00611dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_20;
  FUN_00611f24();
  if ((uVar2 & 1) != 0) {
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    lVar1 = local_30;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
      goto LAB_00611ee4;
    }
  }
  lVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = lVar1;
LAB_00611ee4:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

