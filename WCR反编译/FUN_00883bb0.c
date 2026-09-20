// FUN_00883bb0 @ 00883bb0

void FUN_00883bb0(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_38;
  cfstringStruct *local_18;
  
  pcVar1 = DAT_028cd4e0;
  FUN_008825d8();
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_38 = &cf___;
  }
  else {
    local_38 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

