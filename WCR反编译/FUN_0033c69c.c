// FUN_0033c69c @ 0033c69c

void FUN_0033c69c(void)

{
  char *pcVar1;
  
  pcVar1 = "MMImagePickerManagerOptionObj";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_m_isJustReturnMMAsset_026a2170,FUN_0033c94c,&DAT_028c9f50);
  _MSHookMessageEx(pcVar1,PTR_s_isWAVideoCompressed_026a2178,FUN_0033c9ac,&DAT_028c9f58);
  _MSHookMessageEx(pcVar1,PTR_s_uiMaxVideoDuration_026a2180,FUN_0033ca0c,&DAT_028c9f60);
  _MSHookMessageEx(pcVar1,PTR_s_canSendOriginalImage_026a2188,FUN_0033ca68,&DAT_028c9f68);
  _MSHookMessageEx(pcVar1,PTR_s_forceSendOriginalImage_026a2190,FUN_0033cac8,&DAT_028c9f70);
  _MSHookMessageEx(pcVar1,PTR_s_hideOriginButton_026a2198,FUN_0033cb28,&DAT_028c9f78);
  _MSHookMessageEx(pcVar1,PTR_s_isOpenSendOriginVideo_026a21a0,FUN_0033cb88,&DAT_028c9f80);
  _MSHookMessageEx(pcVar1,PTR_s_isNotShowVideoSizeAlertView_026a21a8,FUN_0033cbe8,&DAT_028c9f88);
  pcVar1 = "MMAssetInfo";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_isExceededOriginFileSizeLimit_026a21b0,FUN_0033cc48,&DAT_028c9f90);
  _MSHookMessageEx(pcVar1,PTR_s_originLimitSize_026a21b8,FUN_0033cca4,&DAT_028c9f98);
  pcVar1 = "MMConfigMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_getInputLimitVideoSize_026a21c0,FUN_0033cd30,&DAT_028c9fa0);
  pcVar1 = "MMImagePickerController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_canSendOriginImage_026a21c8,FUN_0033cd88,&DAT_028c9fa8);
  _MSHookMessageEx(pcVar1,PTR_s_canSendOriginalImage_026a2188,FUN_0033cdf8,&DAT_028c9fb0);
  _MSHookMessageEx(pcVar1,PTR_s_hideOriginButton_026a2198,FUN_0033ce68,&DAT_028c9fb8);
  pcVar1 = "MMAssetPickerController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutBottomBarWithTop__026a21d0,FUN_0033ced8,&DAT_028c9fc0);
  _MSHookMessageEx(pcVar1,PTR_s_reloadBottomBar_026a21d8,FUN_0033cf2c,&DAT_028c9fc8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_0033cf78,&DAT_028c9fd0);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0033cfbc,&DAT_028c9fd8);
  return;
}

