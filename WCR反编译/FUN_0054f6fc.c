// FUN_0054f6fc @ 0054f6fc

byte FUN_0054f6fc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  ulong uVar2;
  ulong local_48;
  undefined4 local_40;
  byte local_29;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_29 = param_3;
  if ((local_20 == 0) ||
     (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_11 = local_29 & 1;
    local_40 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
    local_11 = local_29;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_boolValue_026ca540);
      local_11 = (byte)uVar2;
    }
    local_11 = local_11 & 1;
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

