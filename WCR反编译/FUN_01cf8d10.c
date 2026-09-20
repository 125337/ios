// FUN_01cf8d10 @ 01cf8d10

void FUN_01cf8d10(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_b8;
  undefined1 auStack_b0 [24];
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_38 = (undefined *)0x0;
    local_44 = 1;
  }
  else {
    local_28 = &DAT_028e4720;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0258c100);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileModificationDate_02578020);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_objectForKeyedSubscript__0269d098,
               *(undefined8 *)PTR__NSFileSize_02578028);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____f__llu);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = DAT_028e4718;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4718,PTR_s_objectForKey__0269e048,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
    local_60 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_assetWithURL__0269f560);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setAppliesPreferredTrackTransfor_026aa7e8,1);
      uVar6 = 0x407e000000000000;
      uVar5 = 0x4070e00000000000;
      FUN_01d0a614();
      local_90 = uVar6;
      uStack_88 = uVar5;
      local_80 = uVar6;
      uStack_78 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar5,local_70,PTR_s_setMaximumSize__026aa7f0);
      puVar2 = local_70;
      _CMTimeMake(1,2);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,auStack_b0,0);
      local_98 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_38 = (undefined *)0x0;
        local_44 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_b8 = puVar3;
        _CGImageRelease(local_98);
        if (local_b8 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e4718,PTR_s_setObject_forKey__026ca9e8,local_b8,local_58);
        }
        puVar2 = local_b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = puVar2;
        local_44 = 1;
        _objc_storeStrong(&local_b8,0);
      }
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_44 = 1;
      local_38 = puVar3;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

