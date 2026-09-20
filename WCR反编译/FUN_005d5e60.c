// FUN_005d5e60 @ 005d5e60

void FUN_005d5e60(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_editShield_forScene__026a5bc0);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_editShield__026a5bc8);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_editShield__026a5bc8,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_editShield_forScene__026a5bc0,*(undefined8 *)(param_1 + 0x20),0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

