// ensureAvatarLoaded @ 0183c6bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::ensureAvatarLoaded(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  ID local_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  ID local_a8;
  undefined1 local_99;
  ID local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [12];
  uint local_4c;
  undefined *local_48;
  undefined1 local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isPageAvatarSpecialKey_026b6618);
  if ((param_1 & 1) == 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewAvatarLoading_026b6620);
    local_99 = 0;
    bVar3 = true;
    uVar1 = (IVar4 & 1) == 0;
    if ((bool)uVar1) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewAvatarImage_026b6628);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = IVar4 != 0;
      local_99 = uVar1;
      local_98 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      uVar1 = local_99;
    }
    local_99 = uVar1;
    if (!bVar3) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarURLForUsername_026b6648);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
      if (IVar4 == 0) {
        local_4c = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_a8);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = puVar5;
        if (puVar5 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setPreviewAvatarURL__026b6650,local_a8);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewAvatarLoading__026b6638,1);
          _objc_initWeak(auStack_b8,local_28);
          puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_b0;
          local_e8 = PTR___NSConcreteStackBlock_02578660;
          local_e0 = 0xc2000000;
          local_dc = 0;
          local_d8 = FUN_0183ce64;
          local_d0 = &DAT_02589878;
          _objc_copyWeak(auStack_c0,auStack_b8);
          IVar4 = local_a8;
          (*(code *)PTR__objc_retain_02578638)();
          local_c8 = IVar4;
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_dataTaskWithURL_completionHandle_026aaf48,puVar2,&local_e8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _objc_storeStrong(&local_c8,0);
          _objc_destroyWeak(auStack_c0);
          _objc_destroyWeak(auStack_b8);
        }
        local_4c = (uint)(puVar5 == (undefined *)0x0);
        _objc_storeStrong(&local_b0,0);
      }
      _objc_storeStrong(&local_a8,0);
    }
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewAvatarLoading_026b6620);
    local_39 = 0;
    bVar3 = true;
    uVar1 = (IVar4 & 1) == 0;
    if ((bool)uVar1) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewAvatarImage_026b6628);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = IVar4 != 0;
      local_39 = uVar1;
      local_38 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      uVar1 = local_39;
    }
    local_39 = uVar1;
    puVar5 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
    if (!bVar3) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_syncPreviewAvatarImageForSpecial_026ab1f0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar5;
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if (local_48 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPreviewAvatarLoading__026b6638,1);
        _objc_initWeak(auStack_58,local_28);
        puVar5 = PTR_WCRefineAvatarFramePageOverlayHelper_026cefb0;
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        local_90 = PTR___NSConcreteStackBlock_02578660;
        local_88 = 0xc2000000;
        local_84 = 0;
        local_80 = FUN_0183cd74;
        local_78 = &DAT_02589958;
        _objc_copyWeak(auStack_70,auStack_58);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_loadPreviewAvatarForSpecialKey_c_026b6640,IVar4,&local_90);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        local_4c = 1;
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_58);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setPreviewAvatarImage__026b6630,local_48);
        local_4c = 1;
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  return;
}

