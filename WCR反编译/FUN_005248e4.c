// FUN_005248e4 @ 005248e4

void FUN_005248e4(void)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "WCDataItem";
  _objc_getClass();
  pcVar2 = pcVar1;
  _object_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_fromServerObject__026a49f8,FUN_00524bc4,&DAT_028cb148);
  _MSHookMessageEx(pcVar1,PTR_s_exceedsVisibleTimeRange_026a4a00,FUN_00525140,&DAT_028cb150);
  _MSHookMessageEx(pcVar1,PTR_s_isPrivate_026a4710,FUN_005251ac,&DAT_028cb158);
  _MSHookMessageEx(pcVar1,PTR_s_setContentDesc__026a4a08,FUN_00525218,&DAT_028cb160);
  _MSHookMessageEx(pcVar1,PTR_s_contentDesc_026a4a10,FUN_005258fc,&DAT_028cb168);
  pcVar1 = "WCMediaItem";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_pathForPreview_026a4a18,FUN_00525f98,&DAT_028cb170);
  _MSHookMessageEx(pcVar1,PTR_s_pathForData_026a4a20,FUN_005260c4,&DAT_028cb178);
  _MSHookMessageEx(pcVar1,PTR_s_pathForSightData_026a4a28,FUN_005261f0,&DAT_028cb180);
  _MSHookMessageEx(pcVar1,PTR_s_pathForExistData_026a4a30,FUN_0052631c,&DAT_028cb188);
  _MSHookMessageEx(pcVar1,PTR_s_pathForHdData_026a4a38,FUN_00526448,&DAT_028cb190);
  pcVar1 = "WCTimelineMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_onFirstPageUpdated_dataChanged_d_026a4a40,FUN_00526574,&DAT_028cb198
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onNextPageUpdated_datas_adDatas__026a4a48,FUN_00526744,&DAT_028cb1a0
                  );
  pcVar1 = "WCHomepageMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getHomepageData_026a4a50,FUN_00526894,&DAT_028cb1a8);
  _MSHookMessageEx(pcVar1,PTR_s_deleteDataItem_notify__026a4a58,FUN_00526e1c,&DAT_028cb1b0);
  _MSHookMessageEx(pcVar1,PTR_s_onDataUpdated_maxItemID_minItemI_026a4a60,FUN_005272e0,&DAT_028cb1b8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onNoMoreDataWithRet_andTip__026a4a68,FUN_00527550,&DAT_028cb1c0);
  pcVar1 = "WCTimeLineViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_005277e4,&DAT_028cb1c8);
  _MSHookMessageEx(pcVar1,PTR_s_viewWillDisappear__0269eb30,FUN_005278ac,&DAT_028cb1d0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidDisappear__0269de98,FUN_005278ec,&DAT_028cb1d8);
  return;
}

