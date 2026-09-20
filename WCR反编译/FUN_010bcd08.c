// FUN_010bcd08 @ 010bcd08

void FUN_010bcd08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long local_30;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (((pcVar1 == (cfstringStruct *)0x0) ||
      (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      lVar2 == 0)) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_stringByAppendingPathComponent__026cab30,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_media___);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

