// FUN_000a32f4 @ 000a32f4

void FUN_000a32f4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_20;
  _NSSelectorFromString();
  if (local_18 != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,uVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,uVar1,param_3 & 1);
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

