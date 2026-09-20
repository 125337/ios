// FUN_0041374c @ 0041374c

void FUN_0041374c(undefined8 param_1,long param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long local_38;
  undefined4 local_30;
  int local_2c;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_30 = param_4;
  local_2c = param_3;
  local_28 = param_2;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  if (local_28 < 1) {
    if (local_2c == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf____local__u_type__u);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____svr__lld)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

