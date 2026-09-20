// FUN_0088575c @ 0088575c

void FUN_0088575c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long local_58;
  long local_50;
  undefined4 local_44;
  long local_40;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_008825d8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_40 = lVar1;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_44 = 1;
  }
  else if (lVar1 == 1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
    local_44 = 1;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringToIndex__0269d6c0,1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_50 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringFromIndex__0269d120,local_40 + -1)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__________);
    _objc_retainAutoreleasedReturnValue();
    local_44 = 1;
    local_18 = pcVar3;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

