// showKickLogs @ 018b6b34

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomManageViewController::showKickLogs(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_recentKickLogsText_026b7b78);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_018b6c74;
  local_38 = &DAT_0257a770;
  local_28 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf__NU_,puVar3,&cf_RdU_,
             &local_50,&cf_sQ);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

