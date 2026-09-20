// FUN_000b3cb8 @ 000b3cb8

undefined8 FUN_000b3cb8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  local_18 = param_2;
  if (uVar1 != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__O);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_U_);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_Ss);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_b);
          if (((uVar1 & 1) != 0) ||
             (uVar1 = local_20,
             (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_b),
             (uVar1 & 1) != 0)) {
            local_18 = 3;
          }
        }
        else {
          local_18 = 2;
        }
      }
      else {
        local_18 = 1;
      }
    }
    else {
      local_18 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

