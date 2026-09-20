// FUN_00873ab4 @ 00873ab4

void FUN_00873ab4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_448;
  undefined *local_440;
  undefined *local_2c0;
  undefined *local_2b8;
  undefined1 auStack_250 [8];
  long local_248;
  long *local_240;
  undefined8 local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined *local_198;
  undefined4 local_190;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_178 = (undefined *)0x0;
  _objc_storeStrong(&local_178,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_180 = puVar1;
  if (local_178 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = 1;
    local_170 = puVar1;
  }
  else {
    puVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_accessibilityLabel_0269e1c8);
    _objc_retainAutoreleasedReturnValue();
    FUN_00876528(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_180;
    puVar2 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_accessibilityLabel_0269e1c8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0087667c(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_68 = &cf__imageName;
    local_60 = &cf_imageName;
    local_58 = &cf__iconName;
    local_50 = &cf_iconName;
    local_48 = &cf__normalImageName;
    local_40 = &cf_normalImageName;
    local_38 = &cf__assetName;
    local_30 = &cf_assetName;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    local_198 = puVar1;
    _memset(auStack_1e0,0,0x40);
    puVar1 = local_198;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_e8,0x10);
    if (local_2b8 != (undefined *)0x0) {
      lVar4 = *local_1d0;
      local_2c0 = (undefined *)0x0;
      do {
        do {
          if (*local_1d0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar4,puVar1);
          }
          local_1a0 = *(undefined8 *)(local_1d8 + (long)local_2c0 * 8);
          puVar2 = local_178;
          FUN_00876968(local_178,local_1a0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_1e8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)puVar2 & 1) != 0) {
            FUN_00876528(local_180,local_1e8);
            FUN_0087667c(local_180,local_1e8);
          }
          _objc_storeStrong(&local_1e8,0);
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < local_2b8);
        local_2b8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_e8,
                   0x10);
        local_2c0 = (undefined *)0x0;
      } while (local_2b8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_178;
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_178;
    if (((ulong)puVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_imageForState__0269edf0,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00876aec();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_currentImage_026a3e50);
      _objc_retainAutoreleasedReturnValue();
      FUN_00876aec();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_1f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      FUN_00876aec();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_1f0,0);
    }
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_178);
    _objc_retainAutoreleasedReturnValue();
    local_1f8 = puVar1;
    while (puVar1 = local_1f8, (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_count_0269cfe0)
          , local_170 = local_180, puVar1 != (undefined *)0x0) {
      puVar1 = local_1f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_200 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_removeLastObject_0269e830);
      puVar1 = local_180;
      if (local_200 != local_178) {
        puVar2 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_accessibilityLabel_0269e1c8);
        _objc_retainAutoreleasedReturnValue();
        FUN_00876528(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar1 = local_180;
        puVar2 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_accessibilityLabel_0269e1c8);
        _objc_retainAutoreleasedReturnValue();
        FUN_0087667c(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar1 = local_200;
      puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_200;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        puVar1 = local_200;
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          puVar2 = local_180;
          local_208 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          FUN_00876528(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = local_180;
          puVar2 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_text_0269ce68);
          _objc_retainAutoreleasedReturnValue();
          FUN_0087667c(puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_208,0);
        }
      }
      else {
        puVar1 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        FUN_00876aec();
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      _memset(auStack_250,0,0x40);
      puVar1 = local_200;
      (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_440 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_440 != (undefined *)0x0) {
        lVar4 = *local_240;
        local_448 = (undefined *)0x0;
        do {
          do {
            if (*local_240 - lVar4 != 0) {
              _objc_enumerationMutation(*local_240 - lVar4,puVar1);
            }
            local_210 = *(undefined8 *)(local_248 + (long)local_448 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_addObject__0269d180,local_210);
            local_448 = local_448 + 1;
          } while (local_448 < local_440);
          local_440 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_250,auStack_168,
                     0x10);
          local_448 = (undefined *)0x0;
        } while (local_440 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(&local_200,0);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = 1;
    _objc_storeStrong(&local_1f8);
    _objc_storeStrong(&local_198,0);
  }
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_170);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

