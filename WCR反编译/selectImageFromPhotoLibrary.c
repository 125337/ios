// selectImageFromPhotoLibrary @ 01f2623c

/* Function Stack Size: 0x10 bytes */

void WCRefineTouchTrailViewController::selectImageFromPhotoLibrary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___PHPickerConfiguration_026ceee0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___PHPickerFilter_026ceee8;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPickerFilter_026ceee8,PTR_s_imagesFilter_026b30e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFilter__026b30e8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSelectionLimit__026b30f0,1);
  puVar1 = PTR__OBJC_CLASS___PHPickerViewController_026ceef0;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_30,1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

