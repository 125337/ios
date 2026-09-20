// FUN_00108784 @ 00108784

void FUN_00108784(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_110;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined4 local_64;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50 [3];
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar3 = local_28;
  local_30 = param_2;
  FUN_00108c2c(local_28,&cf_m_contact);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_28;
  local_38 = puVar3;
  FUN_00108c2c(local_28,&cf_m_chatContact);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_38;
  local_50[0] = puVar4;
  FUN_00108db0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_50[0];
  local_58 = puVar3;
  FUN_00108db0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserCanRemoveMember_inRoo_0269edd0
             ,local_58,puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elyQbXT);
    local_64 = 1;
  }
  else {
    puVar3 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_displayNameForUser_inRoom__0269ecd0,
               local_58,local_60);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRefineChatRoomKickHelper_026ce2d8;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomKickHelper_026ce2d8,PTR_s_currentUserCanManageRoom__0269ecc0,
               local_60);
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_71 = (byte)puVar4;
    puVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    local_90 = local_58;
    if (puVar4 == (undefined *)0x0) {
      local_110 = local_58;
    }
    else {
      local_110 = local_70;
    }
    pcVar1 = &cf__bXTyQ_g_;
    if ((local_71 & 1) == 0) {
      pcVar1 = &cf_NSd;
    }
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_00108e8c;
    local_98 = &DAT_02578f80;
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_28;
    local_88 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_presentNativePageSheetConfirmWit_0269ed28,&cf_yQ_J,local_110,pcVar1,
               &cf_yQ,&cf_Sm,&local_b0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

