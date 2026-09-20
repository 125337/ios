// presentResourcePicker @ 01fc4a20

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::presentResourcePicker(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbbe__N);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setImportMode__026ca188,1);
    puVar1 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
    _objc_alloc();
    local_40 = &cf_public_png;
    local_38 = &cf_public_svg_image;
    local_30 = &cf_public_css;
    local_28 = &cf_public_xml;
    local_20 = &cf_public_data;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,5
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_initWithDocumentTypes_inMode__026a2270,puVar2,0);
    local_58 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelegate__026ca910,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setAllowsMultipleSelection__026ae558,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1);
    _objc_storeStrong(&local_58,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

