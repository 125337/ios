// FUN_010c1774 @ 010c1774

long FUN_010c1774(undefined8 param_1)

{
  ushort uVar1;
  ulong uVar2;
  ulong local_40;
  long local_38;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_010b66f4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_18 = 0;
  }
  else {
    local_38 = 0;
    for (local_40 = 0; uVar2 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0), local_40 < uVar2;
        local_40 = local_40 + 1) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_characterAtIndex__0269fa18,local_40);
      uVar1 = (ushort)uVar2;
      if ((uVar1 < 0x30) || (0x39 < uVar1)) {
        local_18 = 0;
        goto LAB_010c18a4;
      }
      local_38 = local_38 * 10 + (long)(int)(uVar1 - 0x30);
    }
    local_18 = local_38;
  }
LAB_010c18a4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

