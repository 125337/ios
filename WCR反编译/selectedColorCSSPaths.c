// selectedColorCSSPaths @ 015d09a8

/* Function Stack Size: 0x10 bytes */

ID WCRefineWechatThemeStore::selectedColorCSSPaths(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEnabled_026a0ef0);
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    local_40 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cssFilePaths_026b0f88);
    _objc_retainAutoreleasedReturnValue();
    local_40 = param_1;
    local_30 = param_1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_autoreleaseReturnValue();
  return local_40;
}

