// chatRoomMuteManageRule @ 0208d7a0

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::chatRoomMuteManageRule(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_38 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_30;
    puVar3 = local_38;
    SVar1 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar3);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  local_18 = (ulong)(puVar3 != (undefined *)0x0);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

