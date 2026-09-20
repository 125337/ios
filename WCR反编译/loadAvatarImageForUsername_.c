// loadAvatarImageForUsername: @ 018469ac

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineAvatarFrameSpecialUsersViewController::loadAvatarImageForUsername_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [8];
  undefined *local_68;
  ID local_60;
  uint local_58;
  undefined1 local_51;
  ID local_50;
  byte local_41;
  ID local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  local_41 = 0;
  local_51 = 0;
  bVar3 = true;
  uVar1 = lVar4 != 0;
  if ((bool)uVar1) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarImageCache_026b67a0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar3 = IVar5 != 0;
    local_51 = uVar1;
    local_50 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    uVar1 = local_51;
  }
  local_51 = uVar1;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar3) {
    local_58 = 1;
  }
  else {
    puVar6 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0,
               PTR_s_isReservedSpecialKey__026b6610,local_38);
    if (((ulong)puVar6 & 1) == 0) {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarURLForUsername__026b6798,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_60 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
      if (IVar5 == 0) {
        local_58 = 1;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar6;
        if (puVar6 != (undefined *)0x0) {
          _objc_initWeak(auStack_70,local_28);
          puVar7 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_68;
          local_b0 = PTR___NSConcreteStackBlock_02578660;
          local_a8 = 0xc2000000;
          local_a4 = 0;
          local_a0 = FUN_01846df8;
          local_98 = &DAT_02589878;
          _objc_copyWeak(auStack_88,auStack_70);
          lVar4 = local_38;
          (*(code *)PTR__objc_retain_02578638)();
          local_90 = lVar4;
          puVar8 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_dataTaskWithURL_completionHandle_026aaf48,puVar2,&local_b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar8);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          _objc_storeStrong(&local_90,0);
          _objc_destroyWeak(auStack_88);
          _objc_destroyWeak(auStack_70);
        }
        local_58 = (uint)(puVar6 == (undefined *)0x0);
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_loadPageAvatarImageForSpecialKey_026b67b0,local_38);
      local_58 = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

