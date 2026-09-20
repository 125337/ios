// persistLastAnnotateTool @ 0166e03c

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::persistLastAnnotateTool(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_restoringFullscreenEditorMemory_026b2578);
  if ((IVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_annotateShapeTool_026b1e28);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setInteger_forKey__026a9610,param_1,&cf_WCRSFCropFSLastAnnotateTool);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

