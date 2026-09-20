// FUN_005820e8 @ 005820e8

ulong FUN_005820e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  local_30 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if ((uVar1 & 1) == 0) {
    local_18 = local_30;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

