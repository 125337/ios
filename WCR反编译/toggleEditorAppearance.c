// toggleEditorAppearance @ 019645e0

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerPreviewViewController::toggleEditorAppearance(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editorDarkMode_026b9fb0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setEditorDarkMode__026b9fb8,(uint)param_1 ^ 1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editorDarkMode_026b9fb0);
  uVar1 = 2;
  if ((IVar2 & 1) == 0) {
    uVar1 = 1;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_setOverrideUserInterfaceStyle__026caa00,uVar1);
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondarySystemGroupedBackground_026ae530);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editorCard_026b9fc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editor_026b9fa0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recolorEditor_026b9e38);
  _objc_storeStrong(&local_28,0);
  return;
}

