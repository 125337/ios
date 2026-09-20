// FUN_018686f0 @ 018686f0

byte FUN_018686f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((uVar2 == 0) || (local_20 == 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_28;
    FUN_01868ca4();
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_28, FUN_01868dc4(), puVar1 = PTR_s_isInContactList__0269efe0, (uVar2 & 1) == 0
       )) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isInContactList__0269efe0);
      if ((uVar2 & 1) == 0) {
        local_11 = 1;
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1,local_28);
        local_11 = (byte)uVar2 & 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

