// presentAlbumPickerWithMode: @ 01e15020

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatButtonConfigViewController::presentAlbumPickerWithMode_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImagePickerController_026ce390,
             PTR_s_isSourceTypeAvailable__0269fb60,0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_vQNS_u);
    local_2c = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_40 = &cf_light;
    }
    else {
      local_40 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingAlbumMode__026c5d60,local_40);
    puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImagePickerController_026ce390,PTR_s_new_0269d288);
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceType__0269fb68,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setAllowsEditing__026a0ba0,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_38,1);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

