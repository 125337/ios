// saveFramedImageToAlbum:completion: @ 017fb6d4

/* Function Stack Size: 0x20 bytes */

void WCRefineAssistFunctionViewController::saveFramedImageToAlbum_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  long local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58;
  undefined1 *local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (local_38 == 0) {
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))();
    }
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_authorizationStatus_026a1770);
    local_50 = puVar3;
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      puVar4 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_38;
      puVar3 = PTR___NSConcreteStackBlock_02578660;
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_017fb95c;
      local_60 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_40;
      local_58 = lVar2;
      local_a0 = puVar3;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_017fb9ac;
      local_88 = &DAT_02581780;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_performChanges_completionHandler_026a1740,&local_78,&local_a0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_58,0);
      local_44 = 0;
    }
    else {
      if (local_40 != 0) {
        (**(code **)(local_40 + 0x10))();
      }
      local_44 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

