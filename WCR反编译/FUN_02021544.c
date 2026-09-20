// FUN_02021544 @ 02021544

void FUN_02021544(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  local_40 = &cf_c_;
  if (local_30 != 1) {
    local_40 = &cf_cd;
  }
  (*(code *)PTR__objc_retain_02578638)();
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

