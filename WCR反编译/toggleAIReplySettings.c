// toggleAIReplySettings @ 017bad78

/* Function Stack Size: 0x10 bytes */

void WCRefineAIFeatureViewController::toggleAIReplySettings(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_boolForKey__0269f3d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setBool_forKey__026a9618,(uint)puVar2 ^ 1,&cf_WCRAIReplySettingsExpandedV1
            );
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTable_026aa898);
  _objc_storeStrong(&local_28,0);
  return;
}

