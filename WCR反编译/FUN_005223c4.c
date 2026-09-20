// FUN_005223c4 @ 005223c4

void FUN_005223c4(void)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MicroMessengerAppDelegate";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_userNotificationCenter_willPrese_026a49b0,FUN_005226b0,&DAT_028cb0f0
                  );
  pcVar1 = "NotificationActionsMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_userNotificationCenter_willPrese_026a49b0,FUN_0052281c,&DAT_028cb0f8
                  );
  pcVar1 = "WCFacade";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_filterTimelineItem__026a49b8,FUN_00522988,&DAT_028cb100);
  pcVar1 = "WCSNSMessage";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_upgradeDataIfNeeded_026a49c0,FUN_00522a78,&DAT_028cb108);
  _MSHookMessageEx(pcVar1,PTR_s_isWCMessageDeleted_026a49c8,FUN_00523f60,&DAT_028cb110);
  pcVar1 = "WCUserComment";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_bDeleted_026a49d0,FUN_00524048,&DAT_028cb118);
  _MSHookMessageEx(pcVar1,PTR_s_deletedByFeedOwner_026a49d8,FUN_00524130,&DAT_028cb120);
  pcVar1 = "WCImageFullScreenViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00524218,&DAT_028cb128);
  _MSHookMessageEx(pcVar1,PTR_s_setCurrentVisibleIndexSet__026a49e0,FUN_005242a4,&DAT_028cb130);
  pcVar1 = "WCImageFullScreenViewContainer";
  _objc_getClass();
  _class_addMethod(pcVar1,PTR_s_wcRefine_playLivePhotoIfNeeded_026a49e8,FUN_0052448c);
  _MSHookMessageEx(pcVar1,PTR_s_startPlayingLivePhoto__026a49f0,FUN_005245ec,&DAT_028cb138);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar3);
  }
  return;
}

