// handleSpecialSliderDidEnd: @ 01843574

/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::handleSpecialSliderDidEnd_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6578);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithFloat__0269fe98);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_markDirtyAndPersist_026b6600);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

