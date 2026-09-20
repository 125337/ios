// FUN_01b20ef4 @ 01b20ef4

void FUN_01b20ef4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    FUN_01b2fd38();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_38 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getContactByName__0269d178,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      FUN_01b2fe8c();
      pcVar1 = local_28;
      if (((ulong)pcVar2 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
      else {
        pcVar2 = local_40;
        FUN_01b22924();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      local_2c = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

