// wcr_removeInvitedMember: @ 0152e268

/* Function Stack Size: 0x18 bytes */

void WCRInvitedMemberListViewController::wcr_removeInvitedMember_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_e0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined *local_90;
  ID local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [15];
  byte local_59;
  undefined *local_58;
  undefined4 local_4c;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = local_38;
  _objc_getAssociatedObject(local_38,DAT_028c5dd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_roomId_026b03b8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar5;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((puVar2 == (undefined *)0x0) ||
     (IVar4 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     IVar4 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elyQbXT);
    local_4c = 1;
  }
  else {
    puVar2 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_displayNameForUser_inRoom__0269ecd0,
               local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserCanManageRoom__0269ecc0,
               local_48);
    local_59 = (byte)puVar3;
    _objc_initWeak(auStack_68,local_28);
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_90 = local_40;
    if (puVar3 == (undefined *)0x0) {
      local_e0 = local_40;
    }
    else {
      local_e0 = local_58;
    }
    pcVar1 = &cf__bXTyQ_g_;
    if ((local_59 & 1) == 0) {
      pcVar1 = &cf_NSd;
    }
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_0152e610;
    local_98 = &DAT_0257c978;
    (*(code *)PTR__objc_retain_02578638)();
    IVar4 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = IVar4;
    _objc_copyWeak(auStack_80,auStack_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_presentNativePageSheetConfirmWit_0269ed28,&cf_yQ_J,local_e0,pcVar1,
               &cf_yQ,&cf_Sm,&local_b0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    _objc_destroyWeak(auStack_80);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

