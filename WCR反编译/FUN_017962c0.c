// FUN_017962c0 @ 017962c0

void FUN_017962c0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long *local_d8;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  long local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58 [3];
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  local_38 = param_2;
  FUN_017965f4();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_30;
  local_40 = pcVar2;
  FUN_01796978();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_a0 = &cf_<default>;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58[0] = local_a0;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = local_30;
  FUN_017959f8();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_c0 = &cf_<unknown>;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_c0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_d8 = (long *)&local_60;
  }
  else {
    local_d8 = (long *)&local_40;
  }
  pcVar2 = (cfstringStruct *)*local_d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = (long)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_28 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld______);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

