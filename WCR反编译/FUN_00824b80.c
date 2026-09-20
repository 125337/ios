// FUN_00824b80 @ 00824b80

void FUN_00824b80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined8 local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar3 = local_20;
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_nil;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_resolvedColorWithTraitCollection_0269fc58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_20 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    lVar3 = local_20;
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_CGColor_026ca470);
    _CGColorGetAlpha(lVar3);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringWithFormat__0269cca8,&cf___3f);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar4;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

