// presentHTMLPicker @ 01d06130

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::presentHTMLPicker(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  SEL local_50;
  ID local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = &cf_UIDocumentPickerViewController;
  local_50 = param_2;
  local_48 = param_1;
  _NSClassFromString();
  local_58 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___N_eceNbhV);
  }
  else {
    _objc_alloc();
    local_40 = &cf_public_html;
    local_38 = &cf_public_xhtml;
    local_30 = &cf_public_zip_archive;
    local_28 = &cf_public_data;
    local_20 = &cf_public_item;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithDocumentTypes_inMode__026a2270,puVar2,0);
    local_60 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDelegate__026ca910,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAllowsMultipleSelection__026ae558,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_presentViewController_animated_c_0269d2b0,local_60,1);
    _objc_storeStrong(&local_60,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

