// FUN_0152119c @ 0152119c

byte FUN_0152119c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong local_38;
  uint local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (((local_20 == 0) ||
      (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      lVar2 == 0)) || (uVar3 = local_20, FUN_015267b8(local_20,local_28), (uVar3 & 1) == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
      local_11 = (byte)uVar3 & 1;
    }
    local_2c = (uint)bVar1;
    _objc_storeStrong(&local_38,0);
    if (local_2c == 0) {
      local_11 = 0;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

