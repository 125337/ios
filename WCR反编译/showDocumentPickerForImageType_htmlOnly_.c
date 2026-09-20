// showDocumentPickerForImageType:htmlOnly: @ 01cdf1bc

/* Function Stack Size: 0x1c bytes */

void WCRefineProfileCardBeautifyViewController::showDocumentPickerForImageType_htmlOnly_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  cfstringStruct *local_d8;
  byte local_c9;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_c9 = (byte)param_4;
  pcVar1 = &cf_UIDocumentPickerViewController;
  _NSClassFromString();
  local_d8 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___N_eceNbhV);
    local_dc = 1;
  }
  else {
    local_e8 = (undefined *)0x0;
    if ((local_c9 & 1) == 0) {
      _WCRefineProfileBgWarehouseTabFromConfig();
      if (pcVar1 == (cfstringStruct *)0x1) {
        local_70 = &cf_public_mpeg_4;
        local_68 = &cf_com_apple_quicktime_movie;
        local_60 = &cf_public_movie;
        local_58 = &cf_public_data;
        local_50 = &cf_public_item;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_70,5);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_e8;
        local_e8 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        local_b0 = &cf_public_png;
        local_a8 = &cf_public_jpeg;
        local_a0 = &cf_com_compuserve_gif;
        local_98 = &cf_com_microsoft_bmp;
        local_90 = &cf_org_webmproject_webp;
        local_88 = &cf_public_image;
        local_80 = &cf_public_data;
        local_78 = &cf_public_item;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_b0,8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_e8;
        local_e8 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
      local_48 = &cf_public_html;
      local_40 = &cf_public_xhtml;
      local_38 = &cf_public_data;
      local_30 = &cf_public_item;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_e8;
      local_e8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = PTR__OBJC_CLASS___UIDocumentPickerViewController_026ce548;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setDelegate__026ca910,local_b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setAllowsMultipleSelection__026ae558,1);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0,PTR_s_respondsToSelector__026ca818,
               PTR_s_setShouldShowFileExtensions__026c3940);
    puVar3 = local_f0;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setValue_forKey__0269d300,puVar2,&cf_shouldShowFileExtensions);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_setAssociatedObject(local_f0,"imageType",local_c8);
    puVar3 = local_f0;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_c9 & 1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar3,"htmlOnly",puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_presentViewController_animated_c_0269d2b0,local_f0,1);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    local_dc = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

