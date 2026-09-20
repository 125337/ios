// clearBindingForItem: @ 01f8db54

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackPickerViewController::clearBindingForItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  puVar1 = PTR_WCRefineVoicePackStore_026cea20;
  if (lVar3 != 0) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_relativePath_026ac370);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_clearBindingForRelativePath__026b0d38);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nd__);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadItems_026ae4d8);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

