// saveEdit @ 0196bc6c

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::saveEdit(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  cfstringStruct *local_60;
  long local_40;
  undefined1 local_31;
  long local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar2 = local_28;
  local_30 = 0;
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_filePath_026b9cb0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_writeToFile_atomically_encoding__026a33a8,IVar3,1,4,&local_40);
  _objc_storeStrong(&local_30,local_40);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_31 = SUB81(pcVar2,0);
  if (((ulong)pcVar2 & 1) == 0) {
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_OX_1Y__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCachedTextContent__026ba0f8,local_28);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditorBaselineContent__026b9f68);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadThemeResourcesIfNeededAfte_026ba100);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alwaysEditText_026ba0d8);
    if ((IVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_endEditCleanup_026ba0e0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshAfterSave_026ba108);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

