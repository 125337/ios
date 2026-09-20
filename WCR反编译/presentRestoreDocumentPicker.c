// presentRestoreDocumentPicker @ 01ca2784

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginManagementViewController::presentRestoreDocumentPicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  local_58 = param_2;
  local_50 = param_1;
  _objc_alloc();
  local_48 = &cf_public_zip_archive;
  local_40 = &cf_com_pkware_zip_archive;
  local_38 = &cf_public_plist;
  local_30 = &cf_com_apple_property_list;
  local_28 = &cf_public_data;
  local_20 = &cf_public_item;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithDocumentTypes_inMode__026a2270,puVar2,0);
  local_60 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDelegate__026ca910,local_50);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAllowsMultipleSelection__026ae558,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_presentViewController_animated_c_0269d2b0,local_60,1);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

