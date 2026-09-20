// FUN_00f6af40 @ 00f6af40

void FUN_00f6af40(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_40;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  pcVar1 = *(cfstringStruct **)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_customName_026ac8a0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setText__026caa88,local_40);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setPlaceholder__0269e9c8,&cf_OY_7b_S);
  _objc_storeStrong(&local_20,0);
  return;
}

