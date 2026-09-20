// FUN_0068f488 @ 0068f488

void FUN_0068f488(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0067d82c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_<empty>;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    if (uVar1 < 9) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&cf_len__lu___);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringToIndex__0269d6c0,4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,uVar3 - 4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&cf_l);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

