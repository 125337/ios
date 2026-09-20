// FUN_004e65f0 @ 004e65f0

void FUN_004e65f0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_2c;
  undefined8 local_28;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_2c = 1;
  }
  else {
    uVar1 = local_20;
    _NSStringFromSelector();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasSuffix__0269d018,&cf__);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_20);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,local_20,local_28);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

