// FUN_0082317c @ 0082317c

byte FUN_0082317c(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_28;
  long local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  if (lVar2 == 0) {
    local_11 = false;
  }
  else {
    lVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_resolvedColorWithTraitCollection_0269fc58);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_28 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar2 = local_28;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_CGColor_026ca470);
    _CGColorGetAlpha(lVar2);
    local_11 = DAT_02323ec0 < param_1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

