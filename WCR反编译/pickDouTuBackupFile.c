// pickDouTuBackupFile @ 01b6f300

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::pickDouTuBackupFile(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_80;
  undefined *local_78;
  SEL local_70;
  ID local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  *(undefined1 *)(param_1 + (long)_pickingDouTuBackup) = 1;
  local_60 = &cf_public_database;
  local_58 = &cf_public_data;
  local_50 = &cf_public_item;
  local_48 = &cf_public_folder;
  local_40 = &cf_public_zip_archive;
  local_38 = &cf_public_image;
  local_30 = &cf_public_text;
  local_28 = &cf_public_plain_text;
  local_20 = &cf_public_utf8_plain_text;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_70 = param_2;
  local_68 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,9);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  local_78 = puVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDelegate__026ca910,local_68);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAllowsMultipleSelection__026ae558,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_presentViewController_animated_c_0269d2b0,local_80,1);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

