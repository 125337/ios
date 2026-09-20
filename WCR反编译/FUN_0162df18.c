// FUN_0162df18 @ 0162df18

void FUN_0162df18(void)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_38 = &cf_WCRefineSearchSettingsViewController;
  _NSClassFromString();
  bVar1 = local_38 == (cfstringStruct *)0x0;
  local_18 = local_38;
  if (bVar1) {
    local_38 = (cfstringStruct *)0x0;
  }
  else {
    _objc_alloc_init();
    local_28 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_38;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cNd__uNS_u);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    FUN_0162dbb0(local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

