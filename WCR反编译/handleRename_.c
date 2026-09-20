// handleRename: @ 01e1aa50

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatProfilesViewController::handleRename_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_renameCurrentProfile__026c5e50,local_30)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

