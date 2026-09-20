// avatarLinkEnabled @ 020456ac

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::avatarLinkEnabled(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_40;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048,&cf_avatarLinkEnabled);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  if ((undefined *)param_1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_avatarLinkEnabled);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_boolValue_026ca540);
    local_40 = 0;
    if ((param_1 & 1) != 0) {
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKey__0269e048,
                 &cf_chatAvatarProfileCardGroupAvatarGestureEnabled);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_40 = (uint)puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if ((local_40 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_30;
      local_30 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_avatarLinkEnabled);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
    }
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_boolValue_026ca540);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (bool)puVar1;
}

