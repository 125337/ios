// FUN_00815bd0 @ 00815bd0

void FUN_00815bd0(void)

{
  char *pcVar1;
  undefined *puVar2;
  
  pcVar1 = "MMThemeManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_svgImageNamed_size_color_alpha_a_026a0010,FUN_008160b8,&DAT_028cd0e8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed__0269fd20,FUN_008166a8,&DAT_028cd0f0);
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed_warnIfNotFound__026a0008,FUN_008169a8,&DAT_028cd0f8);
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed_inBundle__026a8bd0,FUN_00816cbc,&DAT_028cd100);
  pcVar1 = "UIImage";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed__0269fd20,FUN_00816ff8,&DAT_028cd108);
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed_inBundle_compatibleWi_026a8bd8,FUN_008172f8,&DAT_028cd110
                  );
  pcVar1 = "MMThemeManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_svgImageNamed_size_color_alpha_a_026a0010,FUN_00817664,&DAT_028cd118
                  );
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed__0269fd20,FUN_00817da0,&DAT_028cd120);
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed_warnIfNotFound__026a0008,FUN_0081808c,&DAT_028cd128);
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed_inBundle__026a8bd0,FUN_008181f4,&DAT_028cd130);
  pcVar1 = "CBTAskXiaoWeiLogoHelper";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_applyAskXiaoWeiLogoToMenuItem_wi_026a8be0,FUN_00818514,&DAT_028cd138
                  );
  _MSHookMessageEx(pcVar1,PTR_s_makeAskXiaoWeiLogoViewWithBounds_026a8be8,FUN_00818794,&DAT_028cd140
                  );
  pcVar1 = "UIImage";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed__0269fd20,FUN_00818820,&DAT_028cd148);
  _MSHookMessageEx(pcVar1,PTR_s_imageNamed_inBundle_compatibleWi_026a8bd8,FUN_00818b0c,&DAT_028cd150
                  );
  pcVar1 = "BubbleInfo";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_edgeInsets_026a8bf0,FUN_00818e5c,&DAT_028cd158);
  _MSHookMessageEx(pcVar1,PTR_s_getBubbleImage_isDarkMode_useCac_026a8bf8,FUN_00818f20,&DAT_028cd160
                  );
  pcVar1 = "CommonMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setFrameForBgImageView__026a0040,FUN_008193dc,&DAT_028cd168);
  _MSHookMessageEx(pcVar1,PTR_s_layoutContentView_026a0048,FUN_00819448,&DAT_028cd170);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00819484,&DAT_028cd178);
  _MSHookMessageEx(pcVar1,PTR_s_setViewModel__026a0050,FUN_008194c0,&DAT_028cd180);
  pcVar1 = "MMInputMsgReferView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_updateWithSize_arrStyles__026a8c00,FUN_0081954c,&DAT_028cd188);
  _MSHookMessageEx(pcVar1,PTR_s_doLayout_026a8c08,FUN_008195f0,&DAT_028cd190);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0081962c,&DAT_028cd198);
  pcVar1 = "RichTextView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_00819668,&DAT_028cd1a0);
  _MSHookMessageEx(pcVar1,PTR_s_setBackgroundColor__026ca888,FUN_008196a4,&DAT_028cd1a8);
  FUN_0081994c();
  FUN_0081ac80();
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR___dispatch_main_q_02578680;
  if ((DAT_028cd1b0 & 1) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  FUN_0081ae44();
  FUN_0081ba24();
  FUN_0081c150();
  FUN_0081c9cc();
  _WCRefineRunAfterMainFrameFirstAppear(0x4004000000000000,&PTR___NSConcreteGlobalBlock_025805f0);
  _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver();
  return;
}

