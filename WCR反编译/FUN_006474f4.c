// FUN_006474f4 @ 006474f4

void FUN_006474f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  cfstringStruct *local_8c8;
  cfstringStruct *local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined4 local_82c;
  undefined1 uStack_828;
  undefined1 uStack_827;
  undefined1 uStack_826;
  undefined1 uStack_825;
  undefined1 uStack_428;
  undefined1 uStack_427;
  undefined1 uStack_426;
  undefined1 uStack_425;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_82c = (undefined4)param_1;
  local_840 = param_3;
  local_838 = param_2;
  _objc_autoreleasePoolPush();
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSBundle_026ce418;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSBundle_026ce418,PTR_s_mainBundle_026a0c28);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_8c8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_8c8 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_848 = local_8c8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_848;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_848,PTR_s_isEqualToString__0269ccc8,&cf_com_tencent_xin);
  if ((((((ulong)pcVar1 & 1) != 0) ||
       (pcVar1 = local_848,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_848,PTR_s_hasPrefix__0269d320,&cf_com_tencent_xin), ((ulong)pcVar1 & 1) != 0
       )) || (pcVar1 = local_848,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_848,PTR_s_isEqualToString__0269ccc8,&cf_com_tencent_qy_xin),
             ((ulong)pcVar1 & 1) != 0)) ||
     (pcVar1 = local_848,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_848,PTR_s_hasPrefix__0269d320,&cf_com_tencent_qy_xin),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar3 = "BaseMsgContentViewController";
    _objc_getClass();
    uStack_428 = 0x76;
    uStack_427 = 0x40;
    uStack_426 = 0x3a;
    uStack_425 = 0;
    _class_addMethod(pcVar3,PTR_s_wcr_onNewFileTipTap_026a61c0,FUN_00647f28);
    uStack_828 = 0x76;
    uStack_827 = 0x40;
    uStack_826 = 0x3a;
    uStack_825 = 0;
    _class_addMethod(pcVar3,PTR_s_wcr_relayoutNewFileAndQuoteTips_026a61c8,FUN_006480dc);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidLoad_0269cee8,FUN_00648104,&DAT_028cbac0);
    _MSHookMessageEx(pcVar3,PTR_s_viewWillAppear__0269cd48,FUN_00648148,&DAT_028cbac8);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidAppear__0269cd50,FUN_006481a4,&DAT_028cbad0);
    _MSHookMessageEx(pcVar3,PTR_s_viewDidDisappear__0269de98,FUN_00648210,&DAT_028cbad8);
    _MSHookMessageEx(pcVar3,PTR_s_reloadTableData_0269dca8,FUN_0064828c,&DAT_028cbae0);
    _MSHookMessageEx(pcVar3,PTR_s_reloadMessages_026a61d0,FUN_006482d0,&DAT_028cbae8);
    _MSHookMessageEx(pcVar3,PTR_s_reloadMessagesInternal_026a61d8,FUN_00648314,&DAT_028cbaf0);
    _MSHookMessageEx(pcVar3,PTR_s_onLoadFirstUnreadMsg__026a61e0,FUN_00648358,&DAT_028cbaf8);
    _MSHookMessageEx(pcVar3,PTR_s_onLoadFirstScreenMsg__0269eb28,FUN_00648404,&DAT_028cbb00);
    _MSHookMessageEx(pcVar3,PTR_s_addMessageNode_addMoreMsg_addNew_026a61e8,FUN_00648468,
                     &DAT_028cbb08);
    _MSHookMessageEx(pcVar3,PTR_s_addMessageNode_layout_addMoreMsg_0269eaf8,FUN_00648534,
                     &DAT_028cbb10);
    _MSHookMessageEx(pcVar3,PTR_s_scrollViewDidEndDragging_willDec_0269eb38,FUN_00648614,
                     &DAT_028cbb18);
    _MSHookMessageEx(pcVar3,PTR_s_scrollViewDidEndDecelerating__0269eb40,FUN_0064875c,&DAT_028cbb20)
    ;
    _MSHookMessageEx(pcVar3,PTR_s_scrollViewDidEndScrollingAnimati_026a61f0,FUN_00648834,
                     &DAT_028cbb28);
    _MSHookMessageEx(pcVar3,PTR_s_showJumpNextRedTips_026a61f8,FUN_0064890c,&DAT_028cbb30);
    _MSHookMessageEx(pcVar3,PTR_s_insertFirstUnreadMsgToJumpItem__026a6200,FUN_00648960,
                     &DAT_028cbb38);
    _MSHookMessageEx(pcVar3,PTR_s_onMultiRedTipsVisitMsg__026a6208,FUN_006489f4,&DAT_028cbb40);
    _MSHookMessageEx(pcVar3,PTR_s_onClickEdgeTipsView__0269eb50,FUN_00649284,&DAT_028cbb48);
    pcVar3 = "MainFrameCellData";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_m_textForGreenLabel_026a6210,FUN_0064960c,&DAT_028cbb50);
    _MSHookMessageEx(pcVar3,PTR_s_m_widthForGreenLabelText_026a6218,FUN_00649edc,&DAT_028cbb58);
    _MSHookMessageEx(pcVar3,PTR_s_updateRedTips_026a6220,FUN_0064a498,&DAT_028cbb60);
    pcVar3 = "MainFrameItemView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_updateWithCellData__026a3008,FUN_0064a620,&DAT_028cbb68);
    _MSHookMessageEx(pcVar3,PTR_s_updateMessageLabel_026a3000,FUN_0064b0d0,&DAT_028cbb70);
    _MSHookMessageEx(pcVar3,PTR_s_updateNoneVoiceGreenLabelAndMsgL_026a6228,FUN_0064b220,
                     &DAT_028cbb78);
    _MSHookMessageEx(pcVar3,PTR_s_updateMessageForSingle_026a6230,FUN_0064b370,&DAT_028cbb80);
    _MSHookMessageEx(pcVar3,PTR_s_updateMessageForChatRoom_026a6238,FUN_0064b4c0,&DAT_028cbb88);
    _MSHookMessageEx(pcVar3,PTR_s_layoutSubviews_0269de80,FUN_0064b610,&DAT_028cbb90);
    pcVar3 = "MainFrameItemRedTipsLabel";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_setText__026caa88,FUN_0064b7ec,&DAT_028cbb98);
    _MSHookMessageEx(pcVar3,PTR_s_updateWithTypes__026a6240,FUN_0064be3c,&DAT_028cbba0);
    pcVar3 = "EnterpriseSessionItemView";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_updateWithSessionCellData__026a6248,FUN_0064c458,&DAT_028cbba8);
    _MSHookMessageEx(pcVar3,PTR_s_onUpdateCellWithCellData__026a6250,FUN_0064c514,&DAT_028cbbb0);
    _MSHookMessageEx(pcVar3,PTR_s_updateMsgLabelWithSessionCellDat_026a6258,FUN_0064c5d0,
                     &DAT_028cbbb8);
    _MSHookMessageEx(pcVar3,PTR_s_updateAlertLabelWithSessionCellD_026a6260,FUN_0064c68c,
                     &DAT_028cbbc0);
    pcVar3 = "MMBaseSessionTableViewCell";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_updateMsgLabelWithSessionCellDat_026a6258,FUN_0064c748,
                     &DAT_028cbbc8);
    _MSHookMessageEx(pcVar3,PTR_s_updateAlertLabelWithSessionCellD_026a6260,FUN_0064c804,
                     &DAT_028cbbd0);
    _MSHookMessageEx(pcVar3,PTR_s_updateWithSessionCellData__026a6248,FUN_0064c8c0,&DAT_028cbbd8);
    _MSHookMessageEx(pcVar3,PTR_s_onUpdateCellWithCellData__026a6250,FUN_0064c97c,&DAT_028cbbe0);
    pcVar3 = "MsgRedTipsMgr";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_OnAddMsg_MsgWrap__0269e630,FUN_0064ca38,&DAT_028cbbe8);
    _MSHookMessageEx(pcVar3,PTR_s_handleRedTipsOnAddMsg__026a6268,FUN_0064cb00,&DAT_028cbbf0);
    _MSHookMessageEx(pcVar3,PTR_s_clearSessionRedTips__026a6270,FUN_0064cb90,&DAT_028cbbf8);
    pcVar3 = "MainFrameLogicController";
    _objc_getClass();
    _MSHookMessageEx(pcVar3,PTR_s_onNewMsgArriving_NotifyFlag__026a6278,FUN_0064cc98,&DAT_028cbc00);
  }
  _objc_storeStrong(&local_848,0);
  _objc_autoreleasePoolPop(param_1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

