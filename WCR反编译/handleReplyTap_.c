// handleReplyTap: @ 01d1e8d8

/* Function Stack Size: 0x18 bytes */

void WCRefineQuickReplyPanel::handleReplyTap_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6928);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    uVar1 = local_30;
    puVar2 = PTR_WCRefineQuickReplyStore_026cec50;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_chatName_026aa868);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_invitee_026c4150);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_executeItem_chatName_invitee__026c4158,uVar1,IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((((ulong)puVar2 & 1) != 0) &&
       (puVar2 = PTR_WCRefineQuickReplyStore_026cec50,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineQuickReplyStore_026cec50,PTR_s_continuousSendEnabled_026c4148),
       ((ulong)puVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissPanel_026c4160);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

