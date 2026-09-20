// FUN_007915e4 @ 007915e4

void FUN_007915e4(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *puVar5;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  byte local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  byte local_90;
  byte local_89;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined4 local_50;
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
  if ((((ulong)puVar1 & 1) == 0) ||
     (puVar1 = local_40,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mainFrameCornerEnabled_026a1ff0),
     ((ulong)puVar1 & 1) == 0)) {
    local_50 = 1;
  }
  else {
    pcVar2 = "MainFrameTableView";
    _objc_getClass();
    local_58 = pcVar2;
    _MSHookMessageEx(pcVar2,PTR_s_initWithFrame_style__026a2618,FUN_00791abc,&DAT_028ccab8);
    _MSHookMessageEx(local_58,PTR_s_layoutSubviews_0269de80,FUN_00791de4,&DAT_028ccac0);
    pcVar2 = "NewMainFrameViewController";
    _objc_getClass();
    local_60 = pcVar2;
    _MSHookMessageEx(pcVar2,PTR_s_viewWillAppear__0269cd48,FUN_00796e88,&DAT_028ccac8);
    _MSHookMessageEx(local_60,PTR_s_viewDidAppear__0269cd50,FUN_00796ed0,&DAT_028ccad0);
    pcVar2 = "MFWebMMBtn";
    _objc_getClass();
    local_68 = pcVar2;
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_00796f10,&DAT_028ccad8);
    pcVar2 = "MFBannerBtn";
    _objc_getClass();
    local_70 = pcVar2;
    _MSHookMessageEx(pcVar2,PTR_s_setBackgroundColor__026ca888,FUN_0079707c,&DAT_028ccae0);
    _MSHookMessageEx(local_70,PTR_s_layoutSubviews_0269de80,FUN_0079735c,&DAT_028ccae8);
    pcVar2 = "NewMainFrameCell";
    _objc_getClass();
    local_78 = pcVar2;
    _MSHookMessageEx(pcVar2,PTR_s_setFrame__026ca960,FUN_00797514,&DAT_028ccaf0);
    _MSHookMessageEx(local_78,PTR_s_layoutSubviews_0269de80,FUN_00797918,&DAT_028ccaf8);
    pcVar2 = "UISwipeActionPullView";
    _objc_getClass();
    local_80 = pcVar2;
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_007981a8,&DAT_028ccb00);
    pcVar2 = "MainFrameSectionFoldView";
    _objc_getClass();
    local_88 = pcVar2;
    _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_00798428,&DAT_028ccb08);
    pcVar2 = local_88;
    _MSHookMessageEx(local_88,PTR_s_setBackgroundColor__026ca888,FUN_00798bf0,&DAT_028ccb10);
    _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterAddObserver
              (pcVar2,0,FUN_00798c70,&cf_com_qimiao_wcrefine_settings_changed,0,4);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mainFrameSpacingUnifyEnabled_026a2d70);
    local_89 = (byte)puVar1;
    FUN_00798cd8((uint)puVar1 & 1);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    puVar3 = puVar5;
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc0000000;
    local_a4 = 0;
    local_a0 = FUN_00798da0;
    local_98 = &DAT_0257ac30;
    local_90 = local_89 & 1;
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    dVar4 = _dispatch_time(0,1000000000);
    _objc_retainAutoreleaseReturnValue(puVar5);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    local_d0 = 0xc0000000;
    local_cc = 0;
    local_c8 = FUN_00798dd4;
    local_c0 = &DAT_0257ac30;
    local_b8 = local_89 & 1;
    _dispatch_after(dVar4,puVar5,&local_d8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40,0);
  return;
}

