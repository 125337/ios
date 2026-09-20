// FUN_006a44e4 @ 006a44e4

void FUN_006a44e4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((((ulong)puVar2 & 1) != 0) &&
     (puVar1 = PTR_WCRefinePrivateFriendManager_026ce160,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefinePrivateFriendManager_026ce160,
                PTR_s_isEntryVisibleForCurrentUser_0269e560), ((ulong)puVar1 & 1) != 0)) {
    FUN_006ad15c();
  }
  return;
}

