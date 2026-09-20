// FUN_00410cf8 @ 00410cf8

void FUN_00410cf8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_90;
  cfstringStruct *local_48 [3];
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_30 = lVar1;
  FUN_00411268();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_90 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_90 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_90;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (pcVar2 = local_48[0], (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0)
     , pcVar2 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

