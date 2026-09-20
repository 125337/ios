// resolvedDirectory @ 01f84194

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackPickerViewController::resolvedDirectory(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_58;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_directory_026ba278);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (IVar2 == 0) {
    local_58 = PTR_WCRefineVoicePackStore_026cea20;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoicePackStore_026cea20,PTR_s_rootAbsolutePath_026ae1f8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_58;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_directory_026ba278);
    _objc_retainAutoreleasedReturnValue();
    local_58 = (undefined *)param_1;
    local_30 = (undefined *)param_1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (IVar2 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_autoreleaseReturnValue();
  return (ID)local_58;
}

