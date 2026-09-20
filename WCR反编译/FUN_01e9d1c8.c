// FUN_01e9d1c8 @ 01e9d1c8

ulong FUN_01e9d1c8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  ulong local_40;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  else {
    local_58 = local_18;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dataUsingEncoding__026a12e8,4);
  _objc_retainAutoreleasedReturnValue();
  local_68 = local_58;
  if (local_58 == (cfstringStruct *)0x0) {
    local_68 = (cfstringStruct *)PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_data_0269d850);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_68;
  if (local_58 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(local_58);
  pcVar1 = local_20;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_bytes_026a9630);
  local_40 = 0xcbf29ce484222325;
  for (local_48 = (cfstringStruct *)0x0; pcVar2 = local_20,
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0), local_48 < pcVar2;
      local_48 = (cfstringStruct *)((long)&local_48->field0_0x0 + 1)) {
    local_40 = (local_40 ^ *(byte *)((long)&local_48->field0_0x0 + (long)&pcVar1->field0_0x0)) *
               0x100000001b3;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_40;
}

