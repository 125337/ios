// openTemplateEditor @ 017f3a8c

/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::openTemplateEditor(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  _objc_alloc_init();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setSourceType__0269fb68,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAllowsEditing__026a0ba0,0);
  puVar1 = local_28;
  puVar2 = PTR_s_isFrameEditorPicker_026b5938;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(puVar1,puVar2,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_28,1);
  _objc_storeStrong(&local_28,0);
  return;
}

