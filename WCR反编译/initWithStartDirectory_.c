// initWithStartDirectory: @ 01f81d84

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackPathPickerViewController::initWithStartDirectory_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID *pIVar2;
  undefined8 **ppuVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  cfstringStruct *local_40;
  undefined8 *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = local_18;
  local_18 = (ID *)0x0;
  ppuVar3 = &local_38;
  local_30 = PTR_WCRefineVoicePackPathPickerViewController_026d0290;
  _objc_msgSendSuper2(ppuVar3,PTR_s_initWithNibName_bundle__026a2600,0);
  local_18 = (ID *)ppuVar3;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    bVar1 = false;
    if (pcVar4 == (cfstringStruct *)0x0) {
      _NSHomeDirectory(0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_70 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_70 = &cf__;
      }
      local_60 = local_70;
      local_40 = pcVar4;
    }
    else {
      local_60 = local_28;
    }
    _objc_storeStrong((long)local_18 + (long)_directory,local_60);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
  }
  pIVar2 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar2;
}

