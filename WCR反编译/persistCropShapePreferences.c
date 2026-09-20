// persistCropShapePreferences @ 0166dda8

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::persistCropShapePreferences(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropUsingFullScreenPrefs_026b24e0);
  puVar1 = local_28;
  if ((IVar2 & 1) == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShapeUI_026b1ea8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setInteger_forKey__026a9610,IVar2,&cf_WCRSFCropShapeUI);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropCornerRadius_026b1eb0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setDouble_forKey__026a0790,&cf_WCRSFCropCornerRadius);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShadowAmount_026b1ee0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setDouble_forKey__026a0790,&cf_WCRSFCropShadowAmount);
    puVar1 = local_28;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShadowInner_026b1f00);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setBool_forKey__026a9618,IVar2,&cf_WCRSFCropShadowInner);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShapeUI_026b1ea8);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setInteger_forKey__026a9610,IVar2,&cf_WCRSFCropFSShapeUI);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropCornerRadius_026b1eb0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setDouble_forKey__026a0790,&cf_WCRSFCropFSCornerRadius);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShadowAmount_026b1ee0);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setDouble_forKey__026a0790,&cf_WCRSFCropFSShadowAmount);
    puVar1 = local_28;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShadowInner_026b1f00);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setBool_forKey__026a9618,IVar2,&cf_WCRSFCropFSShadowInner);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

