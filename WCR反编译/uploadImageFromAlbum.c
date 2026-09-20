// uploadImageFromAlbum @ 01cace70

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginTopViewController::uploadImageFromAlbum(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_authorizationStatus_026a1770);
  local_30 = local_18;
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  local_28 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01cacfc4;
    local_38 = &DAT_02589398;
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_requestAuthorization__026a1778,&local_50);
    _objc_storeStrong(&local_30,0);
  }
  else if ((puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) ||
          ((dword *)puVar2 == &MACH_HEADER.cputype)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentImagePickerForUpload_026c2fc8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showPermissionAlert_026c2fd0);
  }
  return;
}

