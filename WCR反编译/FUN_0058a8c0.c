// FUN_0058a8c0 @ 0058a8c0

void FUN_0058a8c0(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_005820e8(local_20,&cf_repeatLimit,0);
  FUN_005820e8(local_20,&cf_fireCount,0);
  if (lVar1 < 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_NP_kpe;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__S);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

