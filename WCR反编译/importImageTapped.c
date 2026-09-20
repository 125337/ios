// importImageTapped @ 019e7970

/* Function Stack Size: 0x10 bytes */

void WCRefineGlyphDrawingEditorViewController::importImageTapped(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImagePickerController_026ce390,
             PTR_s_isSourceTypeAvailable__0269fb60,0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elvQ);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
    _objc_alloc_init();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceType__0269fb68,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDelegate__026ca910,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_28,1);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

