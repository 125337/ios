// FUN_00f473e8 @ 00f473e8

void FUN_00f473e8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetResourceCreationOptions_026ceb60;
  local_30 = param_1;
  local_28 = param_1;
  _objc_alloc_init();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setUniformTypeIdentifier__026ac328,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &cf_img;
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    local_48 = uVar5;
    _UTTypeConformsTo(uVar5,&cf_com_compuserve_gif);
    if ((int)uVar5 == 0) {
      uVar5 = local_48;
      _UTTypeConformsTo(local_48,*(undefined8 *)PTR__kUTTypePNG_02578730);
      if ((int)uVar5 == 0) {
        uVar5 = local_48;
        _UTTypeConformsTo(local_48,*(undefined8 *)PTR__kUTTypeJPEG_02578720);
        if ((int)uVar5 != 0) {
          _objc_storeStrong(&local_40,&cf_jpg);
        }
      }
      else {
        _objc_storeStrong(&local_40,&cf_png);
      }
    }
    else {
      _objc_storeStrong(&local_40,&cf_gif);
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf_WCRefine______);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setOriginalFilename__026ac330);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar4 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_00f477ac;
  local_60 = &DAT_0257a7a0;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_38;
  local_58 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = puVar3;
  local_a0 = puVar1;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_00f47830;
  local_88 = &DAT_02581780;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_performChanges_completionHandler_026a1740,&local_78,&local_a0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

