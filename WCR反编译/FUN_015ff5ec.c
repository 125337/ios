// FUN_015ff5ec @ 015ff5ec

void FUN_015ff5ec(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatDisplayMode_026b16c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatSessionScope_026b1810);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatSeparateSessions_026b13b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatRecentLimit_026b1708);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatIncludeMuted_026b17c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatIncludeFoldedGroups_026b17c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatIncludeServiceAccounts_026b17d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatIncludePublicAccounts_026b17d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatUnreadFirst_026b1808);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatShowNickname_026b13c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatAvatarSize_026b13c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatPinnedAlwaysVisible_026b1818);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatPinnedUsernames_026b17f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatRemovedUsernames_026b1608);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatTopUsernames_026b15f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_stringWithFormat__0269cca8,
             &cf__ld__ld__d__ld__d__d__d__d__d__d___0f__d__lu__lu__lu);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar4);
  return;
}

