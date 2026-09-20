// wcrToggleReply: @ 017cfad8

/* Function Stack Size: 0x18 bytes */

void WCRefineAISessionSettingsViewController::wcrToggleReply_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,uVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_wcrSet_key__026b5108,puVar3,_WCRAISessionConversationEnabled);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar1 = local_18;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,uVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_wcrSet_key__026b5108,puVar3,_WCRAISessionAutoReplyEnabled);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcrReloadTable_026b5088);
  _objc_storeStrong(&local_28,0);
  return;
}

