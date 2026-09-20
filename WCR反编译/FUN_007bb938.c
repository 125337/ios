// FUN_007bb938 @ 007bb938

void FUN_007bb938(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if (local_20 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_gearshape;
  }
  else if (local_20 == 2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_folder;
  }
  else if (local_20 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_person_2;
  }
  else if (local_20 == 5) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hidePinned_026a30d0);
    local_18 = &cf_pin;
    if ((uVar1 & 1) == 0) {
      local_18 = &cf_pin_slash;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  else if (local_20 == 7) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_eye_slash;
  }
  else if (local_20 == 8) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_chevron_left;
  }
  else if (local_20 == 9) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_chevron_right;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_ellipsis_circle;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

