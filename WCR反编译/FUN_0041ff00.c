// FUN_0041ff00 @ 0041ff00

void FUN_0041ff00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long local_48 [3];
  long local_30;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_00411268();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = lVar1;
  FUN_00411268();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30;
  local_48[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar1 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      goto LAB_004200f4;
    }
  }
  pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_stringWithFormat__0269cca8,&cf_weapp_t__lu____c__lu___);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar3;
LAB_004200f4:
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

