// FUN_01988d7c @ 01988d7c

ulong FUN_01988d7c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_28;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_28 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_systemdata);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_18,0);
  return (ulong)local_28 & 0xffffffff;
}

