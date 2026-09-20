// FUN_00338210 @ 00338210

byte FUN_00338210(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isSelf_0269ff30);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isSelf_0269ff30);
    local_11 = (byte)uVar1 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

