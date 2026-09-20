// didSelectAvatarFramePath:isNight: @ 01841b34

/* Function Stack Size: 0x1c bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::didSelectAvatarFramePath_isNight_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  ID local_38;
  byte local_29;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_29 = (byte)param_4;
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,"WCRefineAvatarFrameSelectTarget");
  _objc_retainAutoreleasedReturnValue();
  if (local_28 == (cfstringStruct *)0x0) {
    local_58 = &::cf___;
  }
  else {
    local_58 = local_28;
  }
  local_38 = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_isEqualToString__0269ccc8,&cf___WCR_AF_NONE_ITEM__);
  if (((ulong)local_58 & 1) != 0) {
    _objc_storeStrong(&local_40,&::cf___);
  }
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_chatPage);
  if ((IVar1 & 1) == 0) {
    IVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_chatList);
    if ((IVar1 & 1) != 0) {
      if ((local_29 & 1) == 0) {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      else {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
      }
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
  }
  else {
    if ((local_29 & 1) == 0) {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_markDirtyPersistAndReload_026b66f0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

