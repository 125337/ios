// wcr_pageSheetTitle @ 01f8430c

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackPickerViewController::wcr_pageSheetTitle(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_directory_026ba278);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = false;
  bVar1 = false;
  if (IVar4 == 0) {
    local_70 = &::cf_S;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_directory_026ba278);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    local_40 = (cfstringStruct *)param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_68 = local_40;
    if (local_40 == (cfstringStruct *)0x0) {
      local_68 = &::cf_S;
    }
    local_70 = local_68;
    local_30 = (cfstringStruct *)param_1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_autoreleaseReturnValue();
  return (ID)local_70;
}

