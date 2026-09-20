// FUN_00433e4c @ 00433e4c

void FUN_00433e4c(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "WAForwardMessageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_forwardMessage_fromViewControlle_026a38a8,FUN_004344ac,&DAT_028ca8a0
                  );
  pcVar1 = "WAShareAppMessageContextModel";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_bMutliContact_026a38b0,FUN_00434668,&DAT_028ca8a8);
  pcVar1 = "SessionSelectController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m_bShowMultiSelectRightBtn_026a38b8,FUN_004346d0,&DAT_028ca8b0);
  pcVar1 = "ForwardMessageLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_showContactSelectViewController_026a38c0,FUN_0043477c,&DAT_028ca8b8)
  ;
  pcVar1 = "ImageController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_maxImageCount_026a38c8,FUN_0043487c,&DAT_028ca8c0);
  pcVar1 = "BaseMsgContentLogicController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onRecordCountRemain__026a38d0,FUN_00434994,&DAT_028ca8c8);
  pcVar1 = "AudioSender";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_OnRecorderPart_Offset_Len_EndFla_026a38d8,FUN_00434a04,&DAT_028ca8d0
                  );
  pcVar1 = "SightFacade";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_sightCaptureMaxDurationWithScene_026a38e0,FUN_00434b6c,&DAT_028ca8d8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_allowableSightMaxDurationForScen_026a38e8,FUN_00434c20,&DAT_028ca8e0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_getSWTranscodingDurationThreshol_026a38f0,FUN_00434cd4,&DAT_028ca8e8
                  );
  pcVar1 = "ShortVideoToolbar";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_sightCaptureMaxDuration_026a38f8,FUN_00434d90,&DAT_028ca8f0);
  pcVar1 = "SightMovieWriter";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setMaxMovieDuration__026a3900,FUN_00434ed8,&DAT_028ca8f8);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getMultiSelectMaxCount_026a3908,FUN_00434f8c,&DAT_028ca900);
  _MSHookMessageEx(pcVar1,PTR_s_onUserClickDeleteMsgButton_026a3910,FUN_00435074,&DAT_028ca908);
  pcVar1 = "WCShareReportUtils";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getMultiSelecCommonReportParams__026a3918,FUN_0043527c,&DAT_028ca910
                  );
  _MSHookMessageEx(pcVar1,PTR_s_generateMsgListDesc__026a3920,FUN_004353a4,&DAT_028ca918);
  _MSHookMessageEx(pcVar1,PTR_s_reportMultiToolButtonClick_chatN_026a3928,FUN_00435490,&DAT_028ca920
                  );
  _MSHookMessageEx(pcVar1,PTR_s_getMsgWrapWithMsgIDList_chatName_026a3930,FUN_00435640,&DAT_028ca928
                  );
  pcVar1 = "WAWebViewReportStatMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_registOutMenuActionOnMutiSelectM_026a3938,FUN_00435778,&DAT_028ca930
                  );
  pcVar1 = "MultiSelectController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_CheckMsgForSendToFriend_026a3940,FUN_004358a0,&DAT_028ca938);
  _MSHookMessageEx(pcVar1,PTR_s_sendMultiMsgToFriend__026a3948,FUN_004359c4,&DAT_028ca940);
  _MSHookMessageEx(pcVar1,PTR_s_OnForwardMessageSend__026a3950,FUN_00436090,&DAT_028ca948);
  _MSHookMessageEx(pcVar1,PTR_s_OnForwardMessageCancel__026a3958,FUN_00436428,&DAT_028ca950);
  _MSHookMessageEx(pcVar1,PTR_s_IsMsgExceedRecordSizeWithAlert__026a3960,FUN_004364e8,&DAT_028ca958)
  ;
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setM_uiVoiceTime__026a3968,FUN_00436628,&DAT_028ca960);
  _MSHookMessageEx(pcVar1,PTR_s_forbidDetailPage_026a3970,FUN_00436684,&DAT_028ca968);
  _MSHookMessageEx(pcVar1,PTR_s_forbidSubPageWithMd5__026a3978,FUN_004366ec,&DAT_028ca970);
  pcVar1 = "ForwardMsgUtil";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_IsMsgCanSend__026a3980,FUN_004367c4,&DAT_028ca978);
  _MSHookMessageEx(pcVar1,PTR_s_GetMsgForbiddenBriefDesc__026a3988,FUN_00436908,&DAT_028ca980);
  _MSHookMessageEx(pcVar1,PTR_s_ConvertMsgToTextIfCannotSend__026a3990,FUN_00436a3c,&DAT_028ca988);
  pcVar1 = "FavoritesItem";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_checkIllegalTypeBeforeForwardInD_026a3998,FUN_00436b70,&DAT_028ca990
                  );
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_canShowForwardMenuItem_026a39a0,FUN_00436c34,&DAT_028ca998);
  _class_addMethod(pcVar1,PTR_s_WCRefine_onLongPressRestrictedFo_026a39a8,FUN_00436cac);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}

