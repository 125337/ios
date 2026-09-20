// showPicker @ 01b784ac

/* Function Stack Size: 0x10 bytes */

void WCRefineLongPressMenuViewController::showPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRLongPressMenuPickerViewController_026cf3f8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRLongPressMenuPickerViewController_026cf3f8,PTR_s_new_0269d288);
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_28 = puVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_30,1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

