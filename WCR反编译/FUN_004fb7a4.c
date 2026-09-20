// FUN_004fb7a4 @ 004fb7a4

byte FUN_004fb7a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_s_returnToOriginalMsg__0269d600;
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_returnToOriginalMsg__0269d600);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,local_28);
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

