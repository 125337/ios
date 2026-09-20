// FUN_004f0a28 @ 004f0a28

void FUN_004f0a28(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct **local_48;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = &cf__b_b_;
  if (local_18 == (cfstringStruct *)0x0) {
    local_48 = &local_20;
  }
  else {
    local_48 = &local_18;
  }
  pcVar1 = *local_48;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_28,local_20);
  }
  pcVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

