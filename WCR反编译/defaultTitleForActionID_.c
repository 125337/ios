// defaultTitleForActionID: @ 01cc8a84

/* Function Stack Size: 0x18 bytes */

ID WCRefineProfileCardActionConfigViewController::defaultTitleForActionID_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
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
  puVar1 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineProfileCardActionCatalog_026ced78,PTR_s_isCustomPageActionID__026b0670,
             local_30);
  if (((ulong)puVar1 & 1) == 0) {
    pcVar3 = (cfstringStruct *)PTR_WCRefineProfileCardActionCatalog_026ced78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineProfileCardActionCatalog_026ced78,
               PTR_s_displayTitleForActionID_customTi_026b0578,local_30,0);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  else {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_customTitleMap_026c35b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_50 = &cf_ubl;
    }
    else {
      local_50 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

