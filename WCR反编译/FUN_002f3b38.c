// FUN_002f3b38 @ 002f3b38

/* WARNING: Removing unreachable block (ram,0x002f3c20) */
/* WARNING: Removing unreachable block (ram,0x002f3dc0) */

void FUN_002f3b38(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined *local_58;
  undefined1 *local_50;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    FUN_002f3a6c();
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      FUN_002eeb0c(&cf__bV_Y6R0RjR4_g);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,
                 PTR_s_authorizationStatusForAccessLeve_026a1760,2);
      lVar1 = local_28;
      puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      local_50 = puVar3;
      if ((puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) ||
         ((dword *)puVar3 == &MACH_HEADER.cputype)) {
        puVar2 = PTR_WCRefineScreenshotSaveHelper_026ce520;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineScreenshotSaveHelper_026ce520,PTR_s_sharedHelper_026a1f30);
        _objc_retainAutoreleasedReturnValue();
        local_58 = puVar2;
        _UIImageWriteToSavedPhotosAlbum
                  (local_28,puVar2,PTR_s_screenshotSaved_didFinishSavingW_026a1f38,0);
        _objc_storeStrong(&local_58,0);
      }
      else if (puVar3 == (undefined1 *)0x0) {
        local_80 = PTR___NSConcreteStackBlock_02578660;
        local_78 = 0xc2000000;
        local_74 = 0;
        local_70 = FUN_002f50dc;
        local_68 = &DAT_0257bd48;
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_requestAuthorizationForAccessLev_026a1768,2,&local_80);
        _objc_storeStrong(&local_60,0);
      }
      else {
        puVar2 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        FUN_002eeb0c(&cf__bV_Y6R0RjR4_g);
      }
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

