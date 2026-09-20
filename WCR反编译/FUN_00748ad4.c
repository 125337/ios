// FUN_00748ad4 @ 00748ad4

undefined4 FUN_00748ad4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_0074c70c(local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
  if ((uVar1 & 1) == 0) {
    local_14 = 0;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_unsignedIntValue_0269db10);
    local_14 = (undefined4)uVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_14;
}

