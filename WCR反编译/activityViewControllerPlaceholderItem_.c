// activityViewControllerPlaceholderItem: @ 0090cd8c

/* Function Stack Size: 0x18 bytes */

ID WCRefineLogExportItemSource::activityViewControllerPlaceholderItem_
             (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textLogs_026aa0e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  else {
    local_50 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textLogs_026aa0e0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_50;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

