// FUN_008ad5e0 @ 008ad5e0

void FUN_008ad5e0(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "VoiceMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_filteredMenuItems__026a1e08,FUN_008ade40,&DAT_028cdea8);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressVoiceForward_026a99d0,FUN_008adfc0);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressAddCloneSamp_026a99d8,FUN_008ae030);
  pcVar1 = "BaseMsgContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessage__0269d028,FUN_008ae0a0,&DAT_028cdeb0);
  _MSHookMessageEx(pcVar1,PTR_s_SendTextMessage_replyingMessage__0269d030,FUN_008ae160,&DAT_028cdeb8
                  );
  pcVar1 = "FavoritesItem";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_canBeForwardWithMsg__026a99e0,FUN_008ae258,&DAT_028cdec0);
  _MSHookMessageEx(pcVar1,PTR_s_canBeForwardWithMsg_026a99e8,FUN_008ae354,&DAT_028cdec8);
  _MSHookMessageEx(pcVar1,PTR_s_canBeForward_026a99f0,FUN_008ae444,&DAT_028cded0);
  pcVar1 = "MyFavoritesListViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getFavForawrdViewController_026a99f8,FUN_008ae4ec,&DAT_028cded8);
  _MSHookMessageEx(pcVar1,PTR_s_onSelectFavItem_tableView_atInde_026a9a00,FUN_008ae598,&DAT_028cdee0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onSelectFavDataItem_tableView_at_026a9a08,FUN_008ae740,&DAT_028cdee8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_forwardData__026a9a10,FUN_008ae85c,&DAT_028cdef0);
  pcVar1 = "FavBaseSearchViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onSelectFavItem_tableView_atInde_026a9a00,FUN_008ae910,&DAT_028cdef8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onSelectFavDataItem_tableView_at_026a9a08,FUN_008aeab8,&DAT_028cdf00
                  );
  pcVar1 = "MyFavoritesViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_forwardData__026a9a10,FUN_008aebd4,&DAT_028cdf08);
  pcVar1 = "EnterpriseMsgContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_canFavoritesItemBeForward__026a9a18,FUN_008aec88,&DAT_028cdf10);
  pcVar1 = "FavForwardLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_ForwardFavItemList_delegate__026a5b80,FUN_008aedf0,&DAT_028cdf18);
  _MSHookMessageEx(pcVar1,PTR_s_ForwardFavItemList_toUser_delega_026a5a50,FUN_008aeea8,&DAT_028cdf20
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ForwardFavItemList_toUser_delega_026a9a20,FUN_008aef90,&DAT_028cdf28
                  );
  _MSHookMessageEx(pcVar1,PTR_s_forwardFavDataItemWraps_delegate_026a9a28,FUN_008af0a8,&DAT_028cdf30
                  );
  _MSHookMessageEx(pcVar1,PTR_s_forwardFavDataItemWraps_ToUser_d_026a9a30,FUN_008af160,&DAT_028cdf38
                  );
  _MSHookMessageEx(pcVar1,PTR_s_forwardFavDataItemWraps_ToUser_d_026a9a38,FUN_008af248,&DAT_028cdf40
                  );
  _MSHookMessageEx(pcVar1,PTR_s_forwardFavDataItemWraps_ToUser_d_026a9a40,FUN_008af344,&DAT_028cdf48
                  );
  _MSHookMessageEx(pcVar1,PTR_s_forwardFavDataItemWraps_ToUser_d_026a9a48,FUN_008af45c,&DAT_028cdf50
                  );
  _MSHookMessageEx(pcVar1,PTR_s_checkBaseMsgForwardFavDataItemWr_026a9a50,FUN_008af588,&DAT_028cdf58
                  );
  pcVar1 = "MultiSelectController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_sendMultiMsgToFriend__026a3948,FUN_008af688,&DAT_028cdf60);
  _MSHookMessageEx(pcVar1,PTR_s_CheckMsgForSendToFriend_026a3940,FUN_008af868,&DAT_028cdf68);
  pcVar1 = "SharePreConfirmSheetView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onConfirmButtonClick_026a9a58,FUN_008af9ec,&DAT_028cdf70);
  _MSHookMessageEx(pcVar1,PTR_s_onCancelButtonClick_026a9a60,FUN_008b03c8,&DAT_028cdf78);
  pcVar1 = "ForwardMessageLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_forwardMessage__026a0d68,FUN_008b0408,&DAT_028cdf80);
  _MSHookMessageEx(pcVar1,PTR_s_checkMessageWrap_toContact__026a9a68,FUN_008b07d4,&DAT_028cdf88);
  _MSHookMessageEx(pcVar1,PTR_s_forwardMsgList_toContacts__026a9a70,FUN_008b0ab8,&DAT_028cdf90);
  _MSHookMessageEx(pcVar1,PTR_s_forwardMsgList_msgOriginList_toC_026a3a38,FUN_008b0dc4,&DAT_028cdf98
                  );
  _MSHookMessageEx(pcVar1,PTR_s_forwardMsgList_msgOriginList_toC_026a9a78,FUN_008b0f18,&DAT_028cdfa0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsg_ToContact__026a9a80,FUN_008b107c,&DAT_028cdfa8);
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsgList_ToContact__026a9a88,FUN_008b1b3c,&DAT_028cdfb0);
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsgList_ToContact_batchRe_026a3a40,FUN_008b24d0,&DAT_028cdfb8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsgList_ToContact_WithRev_026a9a90,FUN_008b2e78,&DAT_028cdfc0
                  );
  pcVar1 = "ForwardMsgUtil";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_IsMsgCanSend__026a3980,FUN_008b3840,&DAT_028cdfc8);
  _MSHookMessageEx(pcVar1,PTR_s_GetMsgForbiddenBriefDesc__026a3988,FUN_008b3a1c,&DAT_028cdfd0);
  _MSHookMessageEx(pcVar1,PTR_s_ConvertMsgToTextIfCannotSend__026a3990,FUN_008b3bf0,&DAT_028cdfd8);
  _MSHookMessageEx(pcVar1,PTR_s_GenForwardMsgFromMsgWrap_ToConta_026a9a98,FUN_008b3dc4,&DAT_028cdfe0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsg_ToContact_Scene__026a9aa0,FUN_008b3fdc,&DAT_028cdfe8);
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsg_ToContact_Scene_forwa_026a9aa8,FUN_008b4178,&DAT_028cdff0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsg_ToContact_Scene_forwa_026a9ab0,FUN_008b432c,&DAT_028cdff8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsg_ToContact_Scene_forwa_026a9ab8,FUN_008b4530,&DAT_028ce000
                  );
  _MSHookMessageEx(pcVar1,PTR_s_ForwardMsg_ToContact_Scene_forwa_026a4148,FUN_008b47bc,&DAT_028ce008
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}

