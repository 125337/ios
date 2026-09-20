// FUN_00941ef8 @ 00941ef8

void FUN_00941ef8(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  if (local_20 == 1) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_40 = &cf__;
    }
    else {
      local_40 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_40;
  }
  else if (local_20 == 3) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  else if (local_20 == 0x22) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  else if (local_20 == 0x2a) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  else if (local_20 == 0x2b) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  else if (local_20 == 0x2f) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  else if (local_20 == 0x30) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  else if (local_20 == 0x31) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_80 = &cf__;
    }
    else {
      local_80 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_90 = &cf__;
    }
    else {
      local_90 = local_28;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

