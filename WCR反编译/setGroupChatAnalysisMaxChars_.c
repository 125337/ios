// setGroupChatAnalysisMaxChars: @ 009bda2c

/* Function Stack Size: 0x18 bytes */

void WCRefineAIStore::setGroupChatAnalysisMaxChars_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,param_1,&cf_WCRAIGroupAnalysisMaxCharsV1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

