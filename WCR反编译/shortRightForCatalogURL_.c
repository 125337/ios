// shortRightForCatalogURL: @ 01e2e810

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatURLSchemeViewController::shortRightForCatalogURL_
             (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  _WCRSFURLSchemePlaceholders();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar3 = &::cf___;
  if (lVar2 == 0) {
    pcVar3 = &cf_v;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar3;
}

