// FUN_0154c564 @ 0154c564

void FUN_0154c564(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  long local_40;
  long local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_01533bf8();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar1 == 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__;
      local_2c = 1;
    }
    else {
      lVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringToIndex__0269d6c0,1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      lVar3 = local_28;
      local_38 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_substringFromIndex__0269d120,lVar3 + -1);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_40 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__________)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = pcVar4;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

