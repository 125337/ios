// FUN_00ec370c @ 00ec370c

byte FUN_00ec370c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  local_20 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_11 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_add);
    local_28 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_addoutline);
      local_28 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_add2);
        local_28 = (byte)uVar2;
      }
    }
    local_11 = local_28 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

