// detailJumpButtonTapped: @ 01b1a98c

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::detailJumpButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6710);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar4 = local_18;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentDetailDimView_026bed00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_dismissDetailView__026becf8);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar1 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar1 & 1) != 0) {
    IVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_30;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_locateHistoryRecord_autoRemoveOn_026beb98,uVar1,IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

