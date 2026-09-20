// importFontFile @ 019dcfc8

/* Function Stack Size: 0x10 bytes */

void WCRefineFontBeautifyViewController::importFontFile(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_78;
  ID local_68;
  undefined *local_60;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  local_40 = &cf_public_truetype_ttf_font;
  local_38 = &cf_public_opentype_font;
  local_30 = &cf_public_zip_archive;
  local_28 = &cf_public_data;
  local_20 = &cf_public_item;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
  local_58 = puVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDelegate__026ca910,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAllowsMultipleSelection__026ae558,1);
  IVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pendingListController_026bafd0);
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar3;
  if (IVar3 == 0) {
    local_78 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_78;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_68,PTR_s_presentViewController_animated_c_0269d2b0,local_60,1);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

