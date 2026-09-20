// FUN_0033e47c @ 0033e47c

ulong FUN_0033e47c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_0033d258(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_longLongValue_0269d5e0);
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

