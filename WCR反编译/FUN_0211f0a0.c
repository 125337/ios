// FUN_0211f0a0 @ 0211f0a0

byte FUN_0211f0a0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  local_29 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKey__0269e048,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  local_11 = local_29;
  if ((uVar1 & 1) != 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
    local_11 = (byte)uVar1;
  }
  local_11 = local_11 & 1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

