// FUN_002c007c @ 002c007c

byte FUN_002c007c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if ((local_20 == 0) || (uVar1 = local_20, FUN_002b83f8(), (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768);
    if (((uVar1 & 1) == 0) && (uVar1 = local_20, FUN_002c73bc(), (uVar1 & 1) == 0)) {
      FUN_002b6bb8(local_20,local_28,1);
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(0,local_20,PTR_s_setAlpha__026ca860);
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

