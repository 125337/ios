// setAvatarLinkEnabled: @ 02045988

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setAvatarLinkEnabled_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  undefined *puVar2;
  uint local_48;
  byte local_31;
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
  local_31 = local_21 & 1;
  local_48 = 0;
  local_30 = param_1;
  if ((local_21 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_objectForKey__0269e048,
               &cf_chatAvatarProfileCardGroupAvatarGestureEnabled);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = (uint)IVar1;
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  IVar1 = local_30;
  if ((local_48 & 1) != 0) {
    local_31 = 0;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_31);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,&cf_avatarLinkEnabled);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_30,0);
  return;
}

