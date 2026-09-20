// activityViewController:dataTypeIdentifierForActivityType: @ 0090d1b8

/* Function Stack Size: 0x20 bytes */

ID WCRefineLogExportItemSource::activityViewController_dataTypeIdentifierForActivityType_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  pcVar1 = &cf_public_plain_text;
  _objc_autoreleaseReturnValue();
  return (ID)pcVar1;
}

