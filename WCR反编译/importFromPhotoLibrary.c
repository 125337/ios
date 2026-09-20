// importFromPhotoLibrary @ 019a0ab8

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::importFromPhotoLibrary(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIImagePickerController_026ce390,
             PTR_s_isSourceTypeAvailable__0269fb60,0);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRYN_ecvQ_eQ);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIImagePickerController_026ce390;
    _objc_alloc_init();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceType__0269fb68,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAllowsEditing__026a0ba0,0);
    local_28 = *(undefined8 *)PTR__kUTTypeImage_02578710;
    local_20 = *(undefined8 *)PTR__kUTTypeMovie_02578728;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMediaTypes__0269fb70);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1);
    _objc_storeStrong(&local_40,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

