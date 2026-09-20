// voiceCloneVoiceButtonLongPressAction @ 020382fc

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::voiceCloneVoiceButtonLongPressAction(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  undefined *puVar3;
  ID local_98;
  ID local_90;
  ID local_88;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar2 & 1) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_integerValue_026ca750);
  }
  if ((long)local_88 < 0) {
    local_90 = 0;
  }
  else {
    local_90 = local_88;
  }
  if ((long)local_90 < 2) {
    local_98 = local_90;
  }
  else {
    local_98 = 2;
  }
  _objc_storeStrong(&local_28,0);
  return local_98;
}

