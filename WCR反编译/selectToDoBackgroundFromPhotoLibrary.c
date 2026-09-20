// selectToDoBackgroundFromPhotoLibrary @ 01ecb468

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListSettingsViewController::selectToDoBackgroundFromPhotoLibrary
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_60;
  undefined *local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_alloc_init();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceType__0269fb68,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910,local_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAllowsEditing__026a0ba0,0);
  local_28 = &cf_public_image;
  local_20 = &cf_public_movie;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMediaTypes__0269fb70);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pendingMediaVariant_026be588);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60 = &cf_light;
  }
  _objc_setAssociatedObject(puVar1,"todoBgVariant",local_60,1);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

