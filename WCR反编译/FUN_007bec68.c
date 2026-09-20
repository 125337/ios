// FUN_007bec68 @ 007bec68

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_007bec68(void)

{
  undefined *puVar1;
  char *pcVar2;
  size_t sVar3;
  undefined *puVar4;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = "WCTableViewCellLeftConfig";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_title_0269d250,FUN_007bf334,&DAT_028ccd48);
  pcVar2 = "MMTabbarItem";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_initWithTitle_normalImage_select_026a83b0,FUN_007bf400,&DAT_028ccd50
                  );
  _MSHookMessageEx(pcVar2,PTR_s_setNormalTitle__026a83b8,FUN_007bf7d0,&DAT_028ccd58);
  pcVar2 = "MMTabBarItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_setTitle__0269cef0,FUN_007bfa80,&DAT_028ccd60);
  pcVar2 = "MMTabBarController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_setTabBarItemTitle_forIndex__026a83c0,FUN_007bfd30,&DAT_028ccd68);
  pcVar2 = "MMUILabel";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_setTextColor__026caa98,FUN_007c00a8,&DAT_028ccd70);
  _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_007c0230,&DAT_028ccd78);
  _MSHookMessageEx(pcVar2,PTR_s_traitCollectionDidChange__0269f168,FUN_007c038c,&DAT_028ccd80);
  _MSHookMessageEx(pcVar2,PTR_s_setText__026caa88,FUN_007c0568,&DAT_028ccd88);
  _MSHookMessageEx(pcVar2,PTR_s_setAttributedText__026a0000,FUN_007c12fc,&DAT_028ccd90);
  pcVar2 = "MFTitleView";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_updateTitleView_title__026a6768,FUN_007c2870,&DAT_028ccd98);
  pcVar2 = "MMTableViewInfo";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_getTitle__026a83c8,FUN_007c2d34,&DAT_028ccda0);
  pcVar2 = "NewSettingViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_viewWillAppear__0269cd48,FUN_007c3044,&DAT_028ccda8);
  _MSHookMessageEx(pcVar2,PTR_s_reloadTableData_0269dca8,FUN_007c308c,&DAT_028ccdb0);
  _MSHookMessageEx(pcVar2,PTR_s_viewDidAppear__0269cd50,FUN_007c30c8,&DAT_028ccdb8);
  pcVar2 = "WCPluginsMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_registerControllerWithTitle_vers_026a83d0,FUN_007c3110,&DAT_028ccdc0
                  );
  _MSHookMessageEx(pcVar2,PTR_s_registerSwitchWithTitle_key__026a83d8,FUN_007c4058,&DAT_028ccdc8);
  pcVar2 = "MoreViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_setupFinderEntranceRedDot_rightT_026a83e0,FUN_007c48ec,&DAT_028ccdd0
                  );
  _MSHookMessageEx(pcVar2,PTR_s_rightValueForWCMallSection_026a83e8,FUN_007c49e4,&DAT_028ccdd8);
  _MSHookMessageEx(pcVar2,PTR_s_reddotForWCMallSection_026a83f0,FUN_007c4a44,&DAT_028ccde0);
  pcVar2 = "MMTableViewCell";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_007c4ab0,&DAT_028ccde8);
  sVar3 = _strlen("@");
  _memcpy(auStack_428,"@",sVar3);
  sVar3 = _strlen("@");
  auStack_428[sVar3 & 0xffffffff] = 0x40;
  auStack_428[(int)sVar3 + 1] = 0x3a;
  auStack_428[(int)sVar3 + 2] = 0;
  _class_addMethod(pcVar2,PTR_s_viewController_026a5588,FUN_007c5aa0);
  pcVar2 = "UILabel";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_setText__026caa88,FUN_007c5bfc,&DAT_028ccdf0);
  _MSHookMessageEx(pcVar2,PTR_s_setAttributedText__026a0000,FUN_007c63d8,&DAT_028ccdf8);
  pcVar2 = "NewContactsItemCell";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_007c6f9c,&DAT_028cce00);
  pcVar2 = "ContactsViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_viewDidAppear__0269cd50,FUN_007c6fd8,&DAT_028cce08);
  _MSHookMessageEx(pcVar2,PTR_s_updateCount_026a1fd0,FUN_007c7020,&DAT_028cce10);
  _MSHookMessageEx(pcVar2,PTR_s_onContactsDataChange_026a1fd8,FUN_007c705c,&DAT_028cce18);
  FUN_007c7098();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028ccd10;
  DAT_028ccd10 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028ccd00;
  DAT_028ccd00 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028ccd30;
  DAT_028ccd30 = puVar4;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

