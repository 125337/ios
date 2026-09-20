// FUN_01e2fb3c @ 01e2fb3c

/* WARNING: Type propagation algorithm not settling */

void FUN_01e2fb3c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  ulong local_30 [3];
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30[1] = 0;
  local_30[2] = param_2;
  _objc_storeStrong(local_30 + 1,param_3);
  uVar1 = local_30[2];
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf_wcr_sf_catalog_fold_;
  uVar2 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30[0],PTR_s_hasPrefix__0269d320,&cf_wcr_sf_catalog_fold_);
  uVar1 = local_30[0];
  if ((uVar2 & 1) == 0) {
    local_3c = 1;
  }
  else {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasSuffix__0269d018,&cf__);
    uVar2 = local_48;
    if ((uVar1 & 1) != 0) {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringToIndex__0269d6c0,uVar1 - 1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48;
      local_48 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_integerValue_026ca750);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toggleCatalogGroup__026c6398,uVar1);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(&local_18,0);
  return;
}

