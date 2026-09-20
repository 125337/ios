// openUserDetail: @ 0184ae04

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameSpecialUsersViewController::openUserDetail_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,"WCRAvatarFrameSpecialUsername");
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getUserInfoValueForKey__026a83f8);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_getUserInfoValueForKey__026a83f8,&cf_username);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar1 & 1) != 0) {
        _objc_storeStrong(&local_30,local_38);
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pushDetailForUsername__026b6848,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

