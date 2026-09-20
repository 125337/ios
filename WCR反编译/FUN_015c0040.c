// FUN_015c0040 @ 015c0040

long FUN_015c0040(undefined8 param_1,char *param_2)

{
  ushort uVar1;
  ulong uVar2;
  long local_68;
  char local_41;
  ulong local_40;
  long local_38;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (param_2 != (char *)0x0) {
    *param_2 = '\0';
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_18 = 0x7fffffffffffffff;
  }
  else {
    local_38 = 0;
    local_41 = '\0';
    for (local_40 = 0; uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0), local_40 < uVar2;
        local_40 = local_40 + 1) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_characterAtIndex__0269fa18,local_40);
      uVar1 = (ushort)uVar2;
      if ((uVar1 < 0x30) || (0x39 < uVar1)) break;
      local_41 = '\x01';
      local_38 = local_38 * 10 + (long)(int)(uVar1 - 0x30);
    }
    if (param_2 != (char *)0x0) {
      *param_2 = local_41;
    }
    if (local_41 == '\0') {
      local_68 = 0x7fffffffffffffff;
    }
    else {
      local_68 = local_38;
    }
    local_18 = local_68;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

