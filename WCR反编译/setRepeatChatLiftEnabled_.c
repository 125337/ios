// setRepeatChatLiftEnabled: @ 02022e58

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setRepeatChatLiftEnabled_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined *puVar2;
  SEL SVar3;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
  _objc_retainAutoreleasedReturnValue();
  SVar3 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setObject_forKey__026ca9e8,puVar2);
  (*(code *)PTR__objc_release_02578630)(SVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_30;
  if ((local_21 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_repeatChatSinkEnabled);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

