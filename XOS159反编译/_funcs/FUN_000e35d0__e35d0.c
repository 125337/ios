// FUN_000e35d0 @0xe35d0


void FUN_000e35d0(void)



{

  undefined8 uVar1;

  undefined8 uVar2;

  undefined4 local_448;

  undefined2 local_444;

  long local_48;

  

  local_48 = *(long *)PTR____stack_chk_guard_00388738;

  uVar1 = _objc_getClass("UIVisualEffectView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000e3dc8,&DAT_003e7db0);

  _MSHookMessageEx(uVar1,"didMoveToSuperview",FUN_000e3ee4,&DAT_003e7db8);

  uVar1 = _objc_getClass("_UIVisualEffectContentView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000e3f20,&DAT_003e7dc0);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"addSnowAnimation",FUN_000e40d4,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeSnowAnimation",FUN_000e4aac,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"updateSnowEmitterPosition",FUN_000e4c88,&local_448);

  local_448 = 0x3a4040;

  _class_addMethod(uVar1,"getRandomVideoFromDocuments",FUN_000e4fec,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"refreshSnowAnimationForVideoBackground",FUN_000e5330,&local_448);

  _MSHookMessageEx(uVar1,"didMoveToSuperview",FUN_000e5648,&DAT_003e7dc8);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"cleanupAllResources",FUN_000e57a4,&local_448);

  uVar2 = _sel_registerName("dealloc");

  _MSHookMessageEx(uVar1,uVar2,FUN_000e5820,&DAT_003e7dd0);

  _MSHookMessageEx(uVar1,"setBounds:",FUN_000e5854,&DAT_003e7dd8);

  _MSHookMessageEx(uVar1,"setFrame:",FUN_000e58b8,&DAT_003e7de0);

  _MSHookMessageEx(uVar1,"setCenter:",FUN_000e59b8,&DAT_003e7de8);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"applyCustomBackgroundColor",FUN_000e5ab8,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeCustomBackgroundColor",FUN_000e5c5c,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"applyVideoBackground",FUN_000e5d60,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeVideoBackground",FUN_000e6758,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"restoreSnowAnimationFullEffect",FUN_000e6c58,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"updateVideoLayerFrame",FUN_000e6fa0,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"ensureVideoPlayback",FUN_000e7098,&local_448);

  local_448 = 0x403a4076;

  local_444 = (ushort)local_444._1_1_ << 8;

  _class_addMethod(uVar1,"videoDidFinishPlaying:",FUN_000e758c,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"applyImageBackground",FUN_000e78f4,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeImageBackground",FUN_000e7d58,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"updateImageLayerFrame",FUN_000e7ffc,&local_448);

  local_448 = 0x3a4040;

  _class_addMethod(uVar1,"getRandomImageFromDocuments",FUN_000e8168,&local_448);

  uVar1 = _objc_getClass("MMUILongPressImageView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000e84c8,&DAT_003e7df0);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"addRotationAnimation",FUN_000e8528,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeRotationAnimation",FUN_000e868c,&local_448);

  _MSHookMessageEx(uVar1,"didMoveToSuperview",FUN_000e86d8,&DAT_003e7df8);

  uVar1 = _objc_getClass("MMHeadImageView");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000e8778,&DAT_003e7e00);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"addRotationAnimation",FUN_000e87d8,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeRotationAnimation",FUN_000e893c,&local_448);

  _MSHookMessageEx(uVar1,"didMoveToSuperview",FUN_000e8988,&DAT_003e7e08);

  uVar1 = _objc_getClass("QuickReplyMsgNotifyView");

  _MSHookMessageEx(uVar1,"sizeToFitWidth:",FUN_000e8a28,&DAT_003e7e10);

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000e8c54,&DAT_003e7e18);

  local_448 = 0x643a4076;

  local_444 = 100;

  _class_addMethod(uVar1,"applyBorderAndCornerRadiusWithScaleX:scaleY:",FUN_000e924c,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeBorderAndCornerRadius",FUN_000e98f8,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"addOuterGlowOverlay",FUN_000e9d70,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeOuterGlowOverlay",FUN_000ea070,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"updateOuterGlowOverlay",FUN_000ea0e4,&local_448);

  uVar1 = _objc_getClass("QuickReplyMsgViewController");

  _MSHookMessageEx(uVar1,"viewDidLayoutSubviews",FUN_000ea158,&DAT_003e7e20);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"setupBorderImageView",FUN_000ea4a8,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"updateBorderImageFrame",FUN_000eaba4,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeBorderImageView",FUN_000ead38,&local_448);

  uVar1 = _objc_getClass("MMUILabel");

  _MSHookMessageEx(uVar1,"layoutSubviews",FUN_000eadac,&DAT_003e7e28);

  _MSHookMessageEx(uVar1,"didMoveToSuperview",FUN_000eae34,&DAT_003e7e30);

  local_448 = 0x3a4042;

  _class_addMethod(uVar1,"isTopMostMMUILabelInQuickReplyView",FUN_000eaef8,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"applyNicknameColorIfNeeded",FUN_000eafdc,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeNicknameColorIfNeeded",FUN_000eb18c,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"applyContentColorIfNeeded",FUN_000eb290,&local_448);

  local_448 = 0x3a4076;

  _class_addMethod(uVar1,"removeContentColorIfNeeded",FUN_000eb5b8,&local_448);

  local_448 = 0x3a4042;

  _class_addMethod(uVar1,"isBottomMostMMUILabelInQuickReplyView",FUN_000eb6bc,&local_448);

  if (*(long *)PTR____stack_chk_guard_00388738 == local_48) {

    return;

  }

                    /* WARNING: Subroutine does not return */

  ___stack_chk_fail();

}




