// FUN_00f621fc @ 00f621fc

void FUN_00f621fc(long param_1)

{
  cfstringStruct *local_40;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setPlaceholder__0269e9c8,&cf_w);
  local_40 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_40 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setText__026caa88,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setClearButtonMode__026a64e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setAutocapitalizationType__026ac818,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setAutocorrectionType__026ac820,1);
  _objc_storeStrong(&local_20,0);
  return;
}

