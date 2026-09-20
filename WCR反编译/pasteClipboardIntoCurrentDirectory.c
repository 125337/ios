// pasteClipboardIntoCurrentDirectory @ 019976fc

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::pasteClipboardIntoCurrentDirectory(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ID IVar6;
  cfstringStruct *local_50;
  ID local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined4 local_2c;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR_WCRFileManagerState_026cf1c8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_clipboardPaths_026ba1e0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (puVar4 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__4_g_Nzz);
    local_2c = 1;
  }
  else {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_clipboardPaths_026ba1e0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_clipboardMode_026ba658);
    IVar6 = local_18;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resolvedDirectory_026ba370);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_38;
    local_48 = IVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if ((undefined1 *)((long)&MACH_HEADER.reserved + 1) < puVar4) {
      pcVar1 = &cf_yR;
      if (local_40 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        pcVar1 = &cf_Y6R;
      }
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_ck_W_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_50,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_pasteSources_mode_destDir_index__026ba660,local_38,local_40,local_48,0
               ,0,0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

