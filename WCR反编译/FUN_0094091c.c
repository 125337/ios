// FUN_0094091c @ 0094091c

ulong FUN_0094091c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_40;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  FUN_00941344(local_18,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
  if ((uVar1 & 1) == 0) {
    local_40 = 0;
  }
  else {
    local_40 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_longLongValue_0269d5e0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return local_40;
}

