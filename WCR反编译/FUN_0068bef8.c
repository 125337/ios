// FUN_0068bef8 @ 0068bef8

void FUN_0068bef8(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_30;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    local_78 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_initWithData_encoding__026a3378,local_20,4)
    ;
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    bVar1 = local_78 == (cfstringStruct *)0x0;
    local_38 = local_78;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_<binary_lubytes>);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar3;
      local_40 = pcVar3;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_78;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

