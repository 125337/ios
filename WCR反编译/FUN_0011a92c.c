// FUN_0011a92c @ 0011a92c

void FUN_0011a92c(undefined8 param_1)

{
  char *pcVar1;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = "CContactMgr";
  _objc_getClass();
  FUN_0010f1e0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = (cfstringStruct *)pcVar1;
  if ((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    else {
      local_68 = local_20;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getContactByName__0269d178,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_40 = (cfstringStruct *)pcVar1;
    FUN_0011ee0c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = (cfstringStruct *)pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if ((cfstringStruct *)pcVar1 == (cfstringStruct *)0x0) {
      if (local_20 == (cfstringStruct *)0x0) {
        local_a0 = &cf___;
      }
      else {
        local_a0 = local_20;
      }
      local_90 = local_a0;
    }
    else {
      local_90 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_90;
    local_38 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

