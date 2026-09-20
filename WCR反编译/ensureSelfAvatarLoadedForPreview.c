// ensureSelfAvatarLoadedForPreview @ 01827a80

/* Function Stack Size: 0x10 bytes */

void WCRefineAvatarFrameLibraryViewController::ensureSelfAvatarLoadedForPreview
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  undefined1 auStack_90 [24];
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined *local_68;
  byte local_59;
  ID local_58;
  byte local_49;
  ID local_48;
  uint local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewSelfAvatarLoading_026b60b8);
  if ((param_1 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentSelfAvatarURLForPreview_026b60c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar3;
    if ((IVar3 == 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0), IVar3 == 0)) {
      local_3c = 1;
    }
    else {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewSelfAvatarURL_026b60c8);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_49 = 0;
      local_59 = 0;
      bVar2 = false;
      if (IVar4 != 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewSelfAvatarURL_026b60c8);
        _objc_retainAutoreleasedReturnValue();
        local_49 = 1;
        local_48 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar2 = false;
        if ((IVar4 & 1) != 0) {
          IVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewSelfAvatarImage_026b60a8);
          _objc_retainAutoreleasedReturnValue();
          local_59 = 1;
          bVar2 = IVar4 != 0;
          local_58 = IVar4;
        }
      }
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_58);
      }
      if ((local_49 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (bVar2) {
        local_3c = 1;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar5;
        if (puVar5 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setPreviewSelfAvatarURL__026b60d0,local_38);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setPreviewSelfAvatarLoading__026b60d8,1);
          _objc_initWeak(auStack_70,local_28);
          puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_68;
          local_b8 = PTR___NSConcreteStackBlock_02578660;
          local_b0 = 0xc2000000;
          local_ac = 0;
          local_a8 = FUN_01827ef8;
          local_a0 = &DAT_02589878;
          _objc_copyWeak(auStack_90,auStack_70);
          IVar3 = local_38;
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = IVar3;
          puVar7 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_dataTaskWithURL_completionHandle_026aaf48,puVar1,&local_b8);
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_resume_026a1720);
          _objc_storeStrong(&local_78);
          _objc_storeStrong(&local_98,0);
          _objc_destroyWeak(auStack_90);
          _objc_destroyWeak(auStack_70);
        }
        local_3c = (uint)(puVar5 == (undefined *)0x0);
        _objc_storeStrong(&local_68,0);
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

