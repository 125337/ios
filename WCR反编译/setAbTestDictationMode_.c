// setAbTestDictationMode: @ 020302ac

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setAbTestDictationMode_(ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  long_long lVar2;
  undefined *puVar3;
  SEL SVar4;
  ID local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = param_1;
  FUN_02030270();
  IVar1 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,lVar2 == 1);
  _objc_retainAutoreleasedReturnValue();
  SVar4 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,puVar3);
  (*(code *)PTR__objc_release_02578630)(SVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar1 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,lVar2 == 2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar3,&cf_disableChatVoiceDictationEnabled);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_removeObjectForKey__0269d700,&cf_abTestDictationEnabled);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

