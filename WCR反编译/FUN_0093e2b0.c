// FUN_0093e2b0 @ 0093e2b0

undefined4 FUN_0093e2b0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 local_3c;
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
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
  if ((uVar1 & 1) == 0) {
    local_3c = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_unsignedIntValue_0269db10);
    local_3c = (undefined4)uVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return local_3c;
}

