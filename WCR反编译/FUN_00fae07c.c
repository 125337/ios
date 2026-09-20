// FUN_00fae07c @ 00fae07c

uint FUN_00fae07c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  uint local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_30 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_30;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_34 = 0;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_wcrefine);
    local_34 = (uint)pcVar2;
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_34 & 1;
}

