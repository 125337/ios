// FUN_001fc268 @0x1fc268


void FUN_001fc268(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar4;

  long lVar5;

  long lVar6;

  undefined1 auVar7 [16];

  undefined8 local_540;

  long lStack_538;

  long *local_530;

  undefined8 uStack_528;

  undefined8 local_520;

  undefined8 uStack_518;

  undefined8 uStack_510;

  undefined8 uStack_508;

  undefined *local_500;

  undefined8 local_4f8;

  code *local_4f0;

  undefined *puStack_4e8;

  undefined **local_4e0;

  undefined1 auStack_4d8 [128];

  undefined4 local_458;

  undefined2 local_454;

  long local_58;

  

  local_58 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_autoreleasePoolPush();

  FUN_001fcfe4();

  uVar2 = _objc_getClass("MainFrameSectionFoldView");

  _MSHookMessageEx(uVar2,"didMoveToSuperview",FUN_00200020,&DAT_003eab08);

  _MSHookMessageEx(uVar2,"layoutSubviews",FUN_002000c0,&DAT_003eab10);

  _MSHookMessageEx(uVar2,"setIsFolding:foldCount:",FUN_00200150,&DAT_003eab18);

  uVar2 = _objc_getClass("MainFrameItemView");

  _MSHookMessageEx(uVar2,"setFrame:",FUN_0020018c,&DAT_003eab20);

  _MSHookMessageEx(uVar2,"layoutSubviews",FUN_002001c8,&DAT_003eab28);

  _MSHookMessageEx(uVar2,"updateUnreadCountView",FUN_002005f8,&DAT_003eab30);

  uVar2 = _objc_getClass("UITableView");

  _MSHookMessageEx(uVar2,"setFrame:",FUN_00200a14,&DAT_003eab38);

  _MSHookMessageEx(uVar2,"setContentOffset:",FUN_00200e94,&DAT_003eab40);

  _MSHookMessageEx(uVar2,"setContentOffset:animated:",FUN_00200ec0,&DAT_003eab48);

  _MSHookMessageEx(uVar2,"layoutSubviews",FUN_00200eec,&DAT_003eab50);

  uVar2 = _objc_getClass("UITableViewCell");

  _MSHookMessageEx(uVar2,"setFrame:",FUN_00200f74,&DAT_003eab58);

  _MSHookMessageEx(uVar2,"layoutSubviews",FUN_002010e8,&DAT_003eab60);

  _MSHookMessageEx(uVar2,"setSelected:",FUN_002011a0,&DAT_003eab68);

  _MSHookMessageEx(uVar2,"setSelected:animated:",FUN_002011f0,&DAT_003eab70);

  _MSHookMessageEx(uVar2,"setHighlighted:",FUN_00201240,&DAT_003eab78);

  _MSHookMessageEx(uVar2,"setHighlighted:animated:",FUN_00201290,&DAT_003eab80);

  uVar2 = _objc_getClass("NewMainFrameCell");

  _MSHookMessageEx(uVar2,"layoutSubviews",FUN_002012e0,&DAT_003eab88);

  _MSHookMessageEx(uVar2,"setSelected:",FUN_0020131c,&DAT_003eab90);

  _MSHookMessageEx(uVar2,"setSelected:animated:",FUN_00201348,&DAT_003eab98);

  _MSHookMessageEx(uVar2,"setHighlighted:",FUN_00201374,&DAT_003eaba0);

  _MSHookMessageEx(uVar2,"setHighlighted:animated:",FUN_002013a0,&DAT_003eaba8);

  _MSHookMessageEx(uVar2,"addGestureRecognizer:",FUN_002013cc,&DAT_003eabb0);

  uVar2 = _objc_getClass("ThemeBoxSegmentedView");

  _MSHookMessageEx(uVar2,"layoutSubviews",FUN_0020149c,&DAT_003eabb8);

  uVar2 = _objc_getClass("MFBannerBtn");

  _MSHookMessageEx(uVar2,"layoutSubviews",FUN_00201538,&DAT_003eabc0);

  uVar2 = _objc_getClass("NewMainFrameViewController");

  _MSHookMessageEx(uVar2,"viewDidLoad",FUN_002015d4,&DAT_003eabc8);

  _MSHookMessageEx(uVar2,"viewWillAppear:",FUN_0020160c,&DAT_003eabd0);

  _MSHookMessageEx(uVar2,"viewDidLayoutSubviews",FUN_0020164c,&DAT_003eabd8);

  _MSHookMessageEx(uVar2,"scrollViewDidScroll:",FUN_0020167c,&DAT_003eabe0);

  _MSHookMessageEx(uVar2,"traitCollectionDidChange:",FUN_00201a94,&DAT_003eabe8);

  _MSHookMessageEx(uVar2,"tableView:numberOfRowsInSection:",FUN_00201b5c,&DAT_003eabf0);

  _MSHookMessageEx(uVar2,"tableView:cellForRowAtIndexPath:",FUN_00202a20,&DAT_003eabf8);

  _MSHookMessageEx(uVar2,"tableView:heightForRowAtIndexPath:",FUN_002043f4,&DAT_003eac00);

  local_458 = 0x403a4071;

  local_454 = 0x71;

  _class_addMethod(uVar2,"xzy_chatListGroupingRowTypeAtVisualIndexPath:totalRows:",FUN_002047e8,

                   &local_458);

  _MSHookMessageEx(uVar2,"tableView:heightForHeaderInSection:",FUN_002049f4,&DAT_003eac08);

  _MSHookMessageEx(uVar2,"tableView:heightForFooterInSection:",FUN_00204c5c,&DAT_003eac10);

  _MSHookMessageEx(uVar2,"tableView:viewForHeaderInSection:",FUN_00204de8,&DAT_003eac18);

  _MSHookMessageEx(uVar2,"tableView:viewForFooterInSection:",FUN_0020517c,&DAT_003eac20);

  _MSHookMessageEx(uVar2,"tableView:willDisplayCell:forRowAtIndexPath:",FUN_0020535c,&DAT_003eac28);

  _MSHookMessageEx(uVar2,"tableView:didEndDisplayingCell:forRowAtIndexPath:",FUN_00205ad8,

                   &DAT_003eac30);

  _MSHookMessageEx(uVar2,"tableView:didSelectRowAtIndexPath:",FUN_00205e4c,&DAT_003eac38);

  _MSHookMessageEx(uVar2,"tableView:canEditRowAtIndexPath:",FUN_00206618,&DAT_003eac40);

  _MSHookMessageEx(uVar2,"tableView:editingStyleForRowAtIndexPath:",FUN_002068e4,&DAT_003eac48);

  _MSHookMessageEx(uVar2,"tableView:willBeginEditingRowAtIndexPath:",FUN_00206bb0,&DAT_003eac50);

  _MSHookMessageEx(uVar2,"tableView:didEndEditingRowAtIndexPath:",FUN_00206e60,&DAT_003eac58);

  _MSHookMessageEx(uVar2,"tableView:commitEditingStyle:forRowAtIndexPath:",FUN_0020711c,

                   &DAT_003eac60);

  _MSHookMessageEx(uVar2,"tableView:titleForDeleteConfirmationButtonForRowAtIndexPath:",FUN_002073dc

                   ,&DAT_003eac68);

  _MSHookMessageEx(uVar2,"logicGetSessionAtIndexPath:",FUN_002076c8,&DAT_003eac70);

  _MSHookMessageEx(uVar2,"tableView:leadingSwipeActionsConfigurationForRowAtIndexPath:",FUN_00207c80

                   ,&DAT_003eac78);

  _MSHookMessageEx(uVar2,"tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:",

                   FUN_00207f6c,&DAT_003eac80);

  _MSHookMessageEx(uVar2,"tableView:editActionsForRowAtIndexPath:",FUN_00208258,&DAT_003eac88);

  _MSHookMessageEx(uVar2,"reloadAll",FUN_00208544,&DAT_003eac90);

  _MSHookMessageEx(uVar2,"reloadSessions",FUN_002085e0,&DAT_003eac98);

  _MSHookMessageEx(uVar2,"clearSessionCache",FUN_0020867c,&DAT_003eaca0);

  _MSHookMessageEx(uVar2,"insertSessionCellAtIndexes:scrollToCell:",FUN_002086d0,&DAT_003eaca8);

  _MSHookMessageEx(uVar2,"deleteSessionCellAtIndexes:",FUN_002089e4,&DAT_003eacb0);

  _MSHookMessageEx(uVar2,"updateSession:",FUN_00208a8c,&DAT_003eacb8);

  _MSHookMessageEx(uVar2,"logicUpdateSession:",FUN_00208cd0,&DAT_003eacc0);

  _MSHookMessageEx(uVar2,"newMessageByContact:msgWrapToAdd:animated:FromOtherTab:",FUN_00208f14,

                   &DAT_003eacc8);

  _MSHookMessageEx(uVar2,"newMessageByContact:msgWrapToAdd:animated:FromOtherTab:reuse:extraInfo:",

                   FUN_00208fd8,&DAT_003eacd0);

  _MSHookMessageEx(uVar2,

                   "newMessageByContact:msgWrapToAdd:animated:FromOtherTab:reuse:extraInfo:completion:"

                   ,FUN_002090cc,&DAT_003eacd8);

  _MSHookMessageEx(uVar2,

                   "newMessageByContact:msgWrapToAdd:animated:FromOtherTab:reuse:extraInfo:navigationController:completion:"

                   ,FUN_002091f0,&DAT_003eace0);

  _MSHookMessageEx(uVar2,"onLogicHideSession:",FUN_0020932c,&DAT_003eace8);

  _MSHookMessageEx(uVar2,"onLogicDeleteSessionByUsername:",FUN_002093d0,&DAT_003eacf0);

  _MSHookMessageEx(uVar2,"deleteSessionCell:atSection:withUser:",FUN_00209474,&DAT_003eacf8);

  _MSHookMessageEx(uVar2,"insertRow:",FUN_00209534,&DAT_003ead00);

  _MSHookMessageEx(uVar2,"removeRow:",FUN_00209580,&DAT_003ead08);

  _MSHookMessageEx(uVar2,"refreshAfterMuteFlagChange",FUN_002095cc,&DAT_003ead10);

  _MSHookMessageEx(uVar2,"startLoadingForSessionRebuild",FUN_00209650,&DAT_003ead18);

  _MSHookMessageEx(uVar2,"stopLoadingForSessionRebuild",FUN_002096a4,&DAT_003ead20);

  uVar2 = _objc_getClass("MMThemeManager");

  _MSHookMessageEx(uVar2,"setCurrentTheme:",FUN_00209734,&DAT_003ead28);

  _MSHookMessageEx(uVar2,"loadUserPreferedTheme",FUN_00209750,&DAT_003ead30);

  _MSHookMessageEx(uVar2,"reloadThemeResource",FUN_00209780,&DAT_003ead38);

  _MSHookMessageEx(uVar2,"clearImageCache",FUN_0020979c,&DAT_003ead40);

  uVar2 = _objc_getClass("MMBadgeView");

  _MSHookMessageEx(uVar2,"layoutSubviews",FUN_002097b8,&DAT_003ead48);

  FUN_00294200(&_OBJC_CLASS___NSNotificationCenter);

  uVar2 = _objc_retainAutoreleasedReturnValue();

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar2,auVar7._8_8_,&cf_XZYSettingsDidChangeNotification,0,auVar7._0_8_,

               &PTR___NSConcreteGlobalBlock_0038f038);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar2,auVar7._8_8_,

               *(undefined8 *)PTR__UIApplicationWillResignActiveNotification_003883d8,0,auVar7._0_8_

               ,&PTR___NSConcreteGlobalBlock_0038f058);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar2,auVar7._8_8_,

               *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_003883b8,0,

               auVar7._0_8_,&PTR___NSConcreteGlobalBlock_0038f078);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar2,auVar7._8_8_,

               *(undefined8 *)PTR__UIApplicationWillEnterForegroundNotification_003883d0,0,

               auVar7._0_8_,&PTR___NSConcreteGlobalBlock_0038f098);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  uVar4 = *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_003883b0;

  FUN_002912a0(uVar2,auVar7._8_8_,uVar4,0,auVar7._0_8_,&PTR___NSConcreteGlobalBlock_0038f0b8);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  local_500 = PTR___NSConcreteStackBlock_003886f0;

  local_4f8 = 0xc2000000;

  local_4f0 = FUN_0020b3a8;

  puStack_4e8 = &DAT_0038f0f8;

  local_4e0 = &PTR___NSConcreteGlobalBlock_0038f0d8;

  uVar3 = _objc_retainBlock(&local_500);

  FUN_002987a0(&_OBJC_CLASS___NSOperationQueue);

  auVar7 = _objc_retainAutoreleasedReturnValue();

  FUN_002912a0(uVar2,auVar7._8_8_,uVar4,0,auVar7._0_8_,&PTR___NSConcreteGlobalBlock_0038f0d8);

  _objc_unsafeClaimAutoreleasedReturnValue();

  _objc_release(auVar7._0_8_);

  uStack_518 = 0;

  local_520 = 0;

  uStack_508 = 0;

  uStack_510 = 0;

  lStack_538 = 0;

  local_540 = 0;

  uStack_528 = 0;

  local_530 = (long *)0x0;

  auVar7 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bece0,extraout_x1,&local_540,

                        auStack_4d8,0x10);

  if (auVar7._0_8_ != 0) {

    lVar5 = *local_530;

    do {

      uVar4 = auVar7._8_8_;

      lVar6 = 0;

      do {

        if (*local_530 != lVar5) {

          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_003bece0);

          uVar4 = extraout_x1_00;

        }

        FUN_002912a0(uVar2,uVar4,*(undefined8 *)(lStack_538 + lVar6 * 8),0,0,uVar3);

        _objc_unsafeClaimAutoreleasedReturnValue();

        lVar6 = lVar6 + 1;

        uVar4 = extraout_x1_01;

      } while (auVar7._0_8_ != lVar6);

      auVar7 = FUN_00293880(&PTR__OBJC_CLASS___NSConstantArray_003bece0,extraout_x1_01,&local_540,

                            auStack_4d8,0x10);

    } while (auVar7._0_8_ != 0);

  }

  _objc_release(uVar3);

  _objc_release(local_4e0);

  _objc_release(uVar2);

  _objc_autoreleasePoolPop(uVar1);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_58) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




