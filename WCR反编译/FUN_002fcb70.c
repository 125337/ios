// FUN_002fcb70 @ 002fcb70

void FUN_002fcb70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_3;
  local_30 = param_2;
  local_24 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homepageCornerEnabled_0269fc40);
  if (((ulong)puVar1 & 1) != 0) {
    _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterAddObserver
              (puVar1,0,FUN_002fd090,&cf_com_qimiao_wcrefine_settings_changed,0,4);
    pcVar2 = "MMTableViewCell";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_setFrame__026ca960,FUN_002fd0f8,&DAT_028c9ad0);
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_002fd65c,&DAT_028c9ad8);
    _MSHookMessageEx(pcVar2,PTR_s_setBackgroundColor__026ca888,FUN_0030469c,&DAT_028c9ae0);
    _MSHookMessageEx(pcVar2,PTR_s_setHighlighted_animated__0269e608,FUN_00304a18,&DAT_028c9ae8);
    pcVar2 = "ThemeBoxSegmentedView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_00305bd8,&DAT_028c9af0);
    pcVar2 = "WCToolGroupsBannerView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_00305c14,&DAT_028c9af8);
    pcVar2 = "MMUnderlineTabsView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_00305c50,&DAT_028c9b00);
    pcVar2 = "WCSegmentedControl";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_00305c8c,&DAT_028c9b08);
    pcVar2 = "WCRefineTelegramTabStripView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_00305cc8,&DAT_028c9b10);
    pcVar2 = "UIView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_setBackgroundColor__026ca888,FUN_00305d04,&DAT_028c9b18);
    pcVar2 = "MMFavImageComponent";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_0030624c,&DAT_028c9b20);
    pcVar2 = "FavImagePreview";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_00306490,&DAT_028c9b28);
    pcVar2 = "NewContactsItemCell";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_003066d4,&DAT_028c9b30);
    pcVar2 = "MMMainTableView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_0030e7e8,&DAT_028c9b38);
    pcVar2 = "MMTableSectionHeaderView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_0030ee74,&DAT_028c9b40);
    pcVar2 = "MMTableView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_0030f400,&DAT_028c9b48);
  }
  pcVar2 = "ContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_viewDidAppear__0269cd50,FUN_0030f700,&DAT_028c9b50);
  _MSHookMessageEx(pcVar2,PTR_s_updateCount_026a1fd0,FUN_0030f750,&DAT_028c9b58);
  _MSHookMessageEx(pcVar2,PTR_s_onContactsDataChange_026a1fd8,FUN_0030f794,&DAT_028c9b60);
  _objc_storeStrong(&local_40,0);
  return;
}

