// showImagePickerWithSourceType:actionType: @ 01c69d74

/* Function Stack Size: 0x20 bytes */

void WCRefineNavigationAvatarViewController::showImagePickerWithSourceType_actionType_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  _objc_alloc_init();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceType__0269fb68,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAllowsEditing__026a0ba0,1);
  if (local_30 != 0) {
    _objc_setAssociatedObject(local_38,"actionType",local_30,1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_38,1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

