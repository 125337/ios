// FUN_002800d4 @ 002800d4

undefined4 FUN_002800d4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_h264);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_h265);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_h266);
      if ((uVar1 & 1) == 0) {
        local_14 = 0;
      }
      else {
        local_14 = 3;
      }
    }
    else {
      local_14 = 2;
    }
  }
  else {
    local_14 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

