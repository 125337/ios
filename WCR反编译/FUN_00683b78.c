// FUN_00683b78 @ 00683b78

void FUN_00683b78(ulong param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  FUN_0068402c();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  FUN_0068410c();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar1 == 0) &&
     (uVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      _objc_storeStrong(&local_20,local_28);
    }
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if ((uVar1 == 0) ||
       (uVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,local_20),
       (uVar1 & 1) != 0)) {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

