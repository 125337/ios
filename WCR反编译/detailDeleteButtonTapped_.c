// detailDeleteButtonTapped: @ 01b1ab60

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::detailDeleteButtonTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ID local_48;
  ulong local_40;
  uint local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6710);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    IVar2 = local_18;
    puVar4 = PTR_WCRefineHelper_026ce000;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_01b1ad3c;
    local_50 = &DAT_02583a90;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_30;
    local_48 = IVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_RdU_,&cf_nxRdagcU_T,&cf_Rd
               ,&local_68,&cf_Sm);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

