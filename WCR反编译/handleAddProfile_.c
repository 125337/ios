// handleAddProfile: @ 01e1a740

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatProfilesViewController::handleAddProfile_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRSuperFloatProfileStore_026cee48;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_40 = &cf_eMn_;
  }
  else {
    local_40 = local_30;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addProfileWithName__026c5e48,local_40);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__mR);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

