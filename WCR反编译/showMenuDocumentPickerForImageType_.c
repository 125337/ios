// showMenuDocumentPickerForImageType: @ 01b86a98

/* Function Stack Size: 0x18 bytes */

void WCRefineMenuBeautifyViewController::showMenuDocumentPickerForImageType_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  puVar1 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  _objc_alloc();
  local_38 = &cf_public_image;
  local_30 = &cf_public_movie;
  local_28 = &cf_public_data;
  local_20 = &cf_public_item;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithDocumentTypes_inMode__026a2270,puVar2,0);
  local_58 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelegate__026ca910,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAllowsMultipleSelection__026ae558,0);
  _objc_setAssociatedObject(local_58,"imageType",local_50,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

