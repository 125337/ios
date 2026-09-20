// FUN_00237630 @ 00237630

void FUN_00237630(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = &cf_wcrToggleProfileSwitchesExpanded;
  local_a0 = &cf_copyFriendID;
  local_98 = &cf_wcRefineViewFriendProfileCard;
  local_90 = &cf_wcrOpenSessionStats;
  local_88 = &cf_toggleSessionChatIndentOverride_;
  local_80 = &cf_toggleSessionChatSinkOverride_;
  local_78 = &cf_toggleSessionChatLiftOverride_;
  local_70 = &cf_toggleCustomContactAvatar_;
  local_68 = &cf_toggleAvatarForContact_;
  local_60 = &cf_toggleRedEnvelopSkipPerson_;
  local_58 = &cf_toggleAutoAcceptTransferPerson_;
  local_50 = &cf_toggleMessageBlockContact_;
  local_48 = &cf_toggleAutoParseLinkContact_;
  local_40 = &cf_toggleAutoParseLinkOutgoingContact_;
  local_38 = &cf_toggleKeywordAutoReplyContact_;
  local_30 = &cf_wcr_aiToggleConversation_;
  local_28 = &cf_wcr_aiToggleReplyPerson_;
  local_20 = &cf_wcr_aiOpenSessionSettings;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a8,
             0x12);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028c9280;
  DAT_028c9280 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

