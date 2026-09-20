// editorFont @ 01963eb8

/* Function Stack Size: 0x10 bytes */

ID WCRefineFileManagerPreviewViewController::editorFont(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_d0;
  undefined *local_50;
  undefined *local_30;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorFontSize_026b9da8);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fontWithName_size__026a1cd0,&cf_Menlo);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_50 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorFontSize_026b9da8);
    (*(code *)PTR__objc_msgSend_02578628)
              (in_d0,*(undefined8 *)PTR__UIFontWeightRegular_02578158,puVar2,
               PTR_s_monospacedSystemFontOfSize_weigh_026aa590);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    local_30 = puVar2;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue();
  return (ID)local_50;
}

