// displaySelectedTitle @ 01bf96e4

/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsTailPickerViewController::displaySelectedTitle(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displaySelectedAppID_026c0ba8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_e;
    local_34 = 1;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineMomentsTailCatalog_026ce7d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsTailCatalog_026ce7d0,PTR_s_nameForAppID__026a5c60,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_50 = local_30;
    }
    else {
      local_50 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

