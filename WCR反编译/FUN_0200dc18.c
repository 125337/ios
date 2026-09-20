// FUN_0200dc18 @ 0200dc18

void FUN_0200dc18(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar1 = local_28;
    FUN_0219ccbc();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_48 = local_28;
    }
    local_38 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_48;
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

