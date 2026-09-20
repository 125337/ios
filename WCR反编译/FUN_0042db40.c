// FUN_0042db40 @ 0042db40

byte FUN_0042db40(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  if (((local_20 == 0) || (local_28 == 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_28),
     (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28,local_30);
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

