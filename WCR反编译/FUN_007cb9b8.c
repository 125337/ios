// FUN_007cb9b8 @ 007cb9b8

void FUN_007cb9b8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *local_58;
  undefined8 *local_48;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((DAT_028ccce8 == 0) && (DAT_028cccf0 == 0)) {
    local_18 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInterfaceStyle_026cabc8);
    if (lVar1 == 2) {
      if (DAT_028cccf0 == 0) {
        local_48 = &DAT_028ccce8;
      }
      else {
        local_48 = &DAT_028cccf0;
      }
      uVar2 = *local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    else {
      if (DAT_028ccce8 == 0) {
        local_58 = &DAT_028cccf0;
      }
      else {
        local_58 = &DAT_028ccce8;
      }
      uVar2 = *local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

