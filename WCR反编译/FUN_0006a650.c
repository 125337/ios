// FUN_0006a650 @ 0006a650

void FUN_0006a650(void)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "UIImage";
  _objc_getClass();
  _object_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_genRoundedImage_size_conerSize__0269de18,FUN_0006ab84,&DAT_028c7d90)
  ;
  _MSHookMessageEx(pcVar1,PTR_s_realGenRoundedImage_size_conerSi_0269de20,FUN_0006aca4,&DAT_028c7d98
                  );
  _MSHookMessageEx(pcVar1,PTR_s_genRoundedImage_size__0269de28,FUN_0006adc4,&DAT_028c7da0);
  pcVar1 = "MMHeadImageView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithUsrName_headImgUrl_bAuto_0269de30,FUN_0006aed4,&DAT_028c7da8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_preferCornerSize_0269de38,FUN_0006b168,&DAT_028c7db0);
  _MSHookMessageEx(pcVar1,PTR_s_setHeadImageViewCornerRadius__0269de40,FUN_0006b1c4,&DAT_028c7db8);
  _MSHookMessageEx(pcVar1,PTR_s_updateUsrName_withHeadImgUrl__0269de48,FUN_0006b240,&DAT_028c7dc0);
  _MSHookMessageEx(pcVar1,PTR_s_setHeadImageByName__0269de50,FUN_0006b3b8,&DAT_028c7dc8);
  _MSHookMessageEx(pcVar1,PTR_s_updateHeadImage__0269de58,FUN_0006b4f4,&DAT_028c7dd0);
  _MSHookMessageEx(pcVar1,PTR_s_ImageDidLoad_Url__0269de60,FUN_0006b5a4,&DAT_028c7dd8);
  _MSHookMessageEx(pcVar1,PTR_s_resetToDefaultImage_0269de68,FUN_0006b68c,&DAT_028c7de0);
  _MSHookMessageEx(pcVar1,PTR_s_checkAndUpdateImage_0269de70,FUN_0006b6e0,&DAT_028c7de8);
  _MSHookMessageEx(pcVar1,PTR_s_doUpdateHeadImg__0269de78,FUN_0006b734,&DAT_028c7df0);
  _MSHookMessageEx(pcVar1,PTR_s_setFrame__026ca960,FUN_0006b794,&DAT_028c7df8);
  _MSHookMessageEx(pcVar1,PTR_s_setBounds__026ca8a0,FUN_0006b830,&DAT_028c7e00);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0006b8cc,&DAT_028c7e08);
  _class_addMethod(pcVar1,PTR_s_wcr_reapplyAvatarDecorationsAfte_0269de88,FUN_0006ba40);
  pcVar1 = "UIViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_0006ba68,&DAT_028c7e10);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidLayoutSubviews_0269de90,FUN_0006baec,&DAT_028c7e18);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidDisappear__0269de98,FUN_0006bb70,&DAT_028c7e20);
  pcVar1 = "FakeHeadImageView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithRoundCorner__0269dea0,FUN_0006bbd4,&DAT_028c7e28);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0006bca4,&DAT_028c7e30);
  pcVar1 = "FakeMainFrameItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_updateHeadView_0269dea8,FUN_0006bce0,&DAT_028c7e38);
  pcVar1 = "MMUILongPressImageView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0006bd20,&DAT_028c7e40);
  _MSHookMessageEx(pcVar1,PTR_s_setImage__026ca978,FUN_0006bd5c,&DAT_028c7e48);
  pcVar1 = "ContactsItemView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0006bde8,&DAT_028c7e50);
  pcVar1 = "WCRefineContactsPackAvatarImageView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0006bf54,&DAT_028c7e58);
  _MSHookMessageEx(pcVar1,PTR_s_setImage__026ca978,FUN_0006bf90,&DAT_028c7e60);
  pcVar1 = "WCFinderHeadImageView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0006c01c,&DAT_028c7e68);
  _MSHookMessageEx(pcVar1,PTR_s_updateRadius_0269deb0,FUN_0006c058,&DAT_028c7e70);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar2);
  }
  return;
}

