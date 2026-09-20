// FUN_006a51a8 @ 006a51a8

byte FUN_006a51a8(void)

{
  undefined *puVar1;
  byte local_7c;
  undefined *local_70;
  undefined *local_68;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  byte local_29;
  undefined *local_28;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_arePrivateFriendsHidden_026a6620);
  local_11 = (byte)puVar1;
  local_29 = 0;
  local_39 = 0;
  if (((ulong)puVar1 & 1) == 0) {
    local_70 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_68 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_68 = *(undefined **)PTR____NSArray0___02578280;
    }
    local_70 = local_68;
    local_38 = puVar1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_70;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_7c = 1;
  local_48 = puVar1;
  if (((DAT_028cbe40 & 1) != 0) && (local_7c = 1, (local_11 & 1) == (DAT_028cbe41 & 1))) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isEqualToSet__026a6630,DAT_028cbe28);
    local_7c = (byte)puVar1 ^ 1;
  }
  DAT_028cbe40 = 1;
  DAT_028cbe41 = local_11 & 1;
  _objc_storeStrong(&DAT_028cbe28,local_48);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_20,0);
  return local_7c & 1;
}

