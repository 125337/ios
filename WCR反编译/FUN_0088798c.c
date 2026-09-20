// FUN_0088798c @ 0088798c

void FUN_0088798c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_220;
  undefined *local_218;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  ulong local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined *local_128 [3];
  undefined4 local_10c;
  long local_108;
  ulong local_100;
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
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
  local_100 = 0;
  _objc_storeStrong(&local_100,param_1);
  local_108 = 0;
  _objc_storeStrong(&local_108,param_2);
  lVar5 = local_108;
  if ((local_100 == 0) || (local_108 == 0)) {
    local_10c = 1;
  }
  else {
    uVar1 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_accessibilityLabel_0269e1c8);
    _objc_retainAutoreleasedReturnValue();
    FUN_00876528(lVar5);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    lVar5 = local_108;
    uVar1 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_accessibilityIdentifier_0269ec20);
    _objc_retainAutoreleasedReturnValue();
    FUN_00876528(lVar5);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    lVar5 = local_108;
    uVar1 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    FUN_00876528(lVar5);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_78 = &cf__imageName;
    local_70 = &cf_imageName;
    local_68 = &cf__assetName;
    local_60 = &cf_assetName;
    local_58 = &cf__iconName;
    local_50 = &cf_iconName;
    local_48 = &cf__normalImageName;
    local_40 = &cf_normalImageName;
    local_38 = &cf__selectedImageName;
    local_30 = &cf_selectedImageName;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,
               10);
    _objc_retainAutoreleasedReturnValue();
    local_128[0] = puVar2;
    _memset(auStack_170,0,0x40);
    puVar2 = local_128[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_218 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_f8,0x10);
    if (local_218 != (undefined *)0x0) {
      lVar5 = *local_160;
      local_220 = (undefined *)0x0;
      do {
        do {
          if (*local_160 - lVar5 != 0) {
            _objc_enumerationMutation(*local_160 - lVar5,puVar2);
          }
          local_130 = *(undefined8 *)(local_168 + (long)local_220 * 8);
          uVar1 = local_100;
          FUN_00876968(local_100,local_130);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_178 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar1 & 1) != 0) {
            FUN_00876528(local_108,local_178);
          }
          _objc_storeStrong(&local_178,0);
          local_220 = local_220 + 1;
        } while (local_220 < local_218);
        local_218 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_f8,
                   0x10);
        local_220 = (undefined *)0x0;
      } while (local_218 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_100;
    puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = local_100;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_180 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_imageForState__0269edf0,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00876aec();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      uVar1 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_imageForState__0269edf0,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_00876aec();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_currentImage_026a3e50);
      _objc_retainAutoreleasedReturnValue();
      FUN_00876aec();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      FUN_00876aec();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar1 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_imageForState__0269edf0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_108;
      local_188 = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        FUN_0088842c(lVar5);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      _objc_storeStrong(&local_188);
      _objc_storeStrong(&local_180,0);
    }
    uVar1 = local_100;
    puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      local_190 = uVar1;
      FUN_00876aec(uVar1,local_108);
      lVar5 = local_108;
      if (local_190 != 0) {
        uVar1 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        FUN_0088842c(lVar5);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      _objc_storeStrong(&local_190,0);
    }
    _objc_storeStrong(local_128,0);
    local_10c = 0;
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

