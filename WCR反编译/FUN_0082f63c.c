// FUN_0082f63c @ 0082f63c

byte FUN_0082f63c(double param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (((local_20 == 0) ||
      (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768),
      (uVar1 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8), param_1 <= DAT_02323d38)
     ) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOpaque_0269f438);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      FUN_0082317c();
      local_11 = (byte)uVar1 & 1;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

