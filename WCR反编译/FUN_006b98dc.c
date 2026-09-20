// FUN_006b98dc @ 006b98dc

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_006b98dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_680;
  undefined *local_678;
  undefined *local_628;
  undefined *local_5d8;
  undefined *local_5d0;
  cfstringStruct *local_578;
  undefined *local_538;
  undefined *local_530;
  undefined *local_4d0;
  undefined *local_4c8;
  cfstringStruct *local_458;
  undefined1 auStack_3f0 [8];
  long local_3e8;
  long *local_3e0;
  long local_3b0;
  byte local_3a1;
  undefined *local_3a0;
  byte local_391;
  undefined *local_390;
  undefined *local_388;
  undefined *local_380;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  long local_338;
  undefined *local_330;
  cfstringStruct *local_328;
  undefined1 auStack_320 [8];
  long local_318;
  long *local_310;
  long local_2e0;
  undefined *local_2d8;
  undefined1 auStack_2d0 [8];
  long local_2c8;
  long *local_2c0;
  long local_290;
  cfstringStruct *local_288;
  undefined *local_280;
  undefined1 local_271;
  undefined *local_270 [3];
  undefined *local_258;
  int local_24c;
  ulong local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined1 auStack_228 [128];
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_238 = (undefined *)0x0;
  _objc_storeStrong(&local_238,param_1);
  local_240 = (undefined *)0x0;
  _objc_storeStrong(&local_240,param_2);
  local_248 = 0;
  _objc_storeStrong(&local_248,param_3);
  puVar2 = local_238;
  if ((local_238 == (undefined *)0x0) || (local_240 == (undefined *)0x0)) {
    local_230 = (undefined *)0x0;
    local_24c = 1;
    goto LAB_006bab38;
  }
  local_258 = (undefined *)0x0;
  puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_238;
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_270[0] = puVar1;
    uVar6 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_248,PTR_s_isEqualToString__0269ccc8,&cf_AddFriendEntryViewController);
    if ((uVar6 & 1) != 0) {
      puVar2 = local_270[0];
      FUN_006bb580();
      local_271 = SUB81(puVar2,0);
      if ((((ulong)puVar2 & 1) != 0) &&
         (puVar2 = local_270[0], FUN_006bbc64(local_270[0],local_240), ((ulong)puVar2 & 1) != 0)) {
        local_258 = local_258 + 1;
      }
    }
    uVar6 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_248,PTR_s_isEqualToString__0269ccc8,&cf_AddFriendEntryViewController);
    if ((uVar6 & 1) == 0) {
      puVar2 = local_270[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_270[0],PTR_s_imageForState__0269edf0,0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_270[0];
      local_280 = puVar2;
      FUN_006bbf80(local_270[0],puVar2,local_248);
      if (((ulong)puVar1 & 1) != 0) {
        if (DAT_028cc158 == (cfstringStruct *)0x0) {
          local_458 = &cf___;
        }
        else {
          local_458 = DAT_028cc158;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_288 = local_458;
        _objc_setAssociatedObject(local_270[0],&DAT_028cc1b8,local_458,3);
        puVar2 = local_270[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_270[0],PTR_s_imageView_0269f230);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar2 != (undefined *)0x0) {
          puVar2 = local_270[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_270[0],PTR_s_imageView_0269f230);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_270[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_270[0],PTR_s_imageView_0269f230);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_270[0],PTR_s_setImage_forState__0269cc60,local_240,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_270[0],PTR_s_setImage_forState__0269cc60,local_240,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_270[0],PTR_s_setImage_forState__0269cc60,local_240,4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_270[0],PTR_s_setImage_forState__0269cc60,local_240,2);
        _objc_storeStrong(&local_288,0);
      }
      _objc_storeStrong(&local_280,0);
    }
    _objc_storeStrong(local_270,0);
  }
  puVar2 = local_238;
  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    uVar6 = local_248;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_248,PTR_s_isEqualToString__0269ccc8,&cf_AddFriendEntryViewController);
    puVar2 = local_238;
    if ((uVar6 & 1) != 0) {
      _memset(auStack_2d0,0,0x40);
      puVar2 = local_238;
      (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_4c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_4c8 != (undefined *)0x0) {
        lVar4 = *local_2c0;
        local_4d0 = (undefined *)0x0;
        do {
          do {
            if (*local_2c0 - lVar4 != 0) {
              _objc_enumerationMutation(*local_2c0 - lVar4,puVar2);
            }
            lVar5 = *(long *)(local_2c8 + (long)local_4d0 * 8);
            local_290 = lVar5;
            FUN_006b98dc(lVar5,local_240,local_248);
            local_258 = local_258 + lVar5;
            local_4d0 = local_4d0 + 1;
          } while (local_4d0 < local_4c8);
          local_4c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2d0,auStack_a8,
                     0x10);
          local_4d0 = (undefined *)0x0;
        } while (local_4c8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_230 = local_258;
      local_24c = 1;
      goto LAB_006bab38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_2d8 = puVar2;
    FUN_006bca28(puVar2,local_248);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_2d8;
      FUN_006bd260(local_2d8,local_248);
      if (((ulong)puVar2 & 1) != 0) {
        if (DAT_028cc158 == (cfstringStruct *)0x0) {
          local_578 = &cf___;
        }
        else {
          local_578 = DAT_028cc158;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_328 = local_578;
        puVar2 = local_2d8;
        _objc_getAssociatedObject(local_2d8,&DAT_028cc1bb);
        _objc_retainAutoreleasedReturnValue();
        local_330 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
        uVar6 = 0;
        if (puVar2 == (undefined *)0x0) {
LAB_006ba5b0:
          puVar2 = local_2d8;
          _objc_getAssociatedObject(uVar6,local_2d8,&DAT_028cc1ba);
          _objc_retainAutoreleasedReturnValue();
          local_380 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_391 = 0;
            local_3a1 = 0;
            puVar2 = local_2d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            if (puVar2 == (undefined *)0x0) {
              local_628 = PTR__OBJC_CLASS___NSNull_026ce0e8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
              _objc_retainAutoreleasedReturnValue();
              local_3a1 = 1;
              local_3a0 = local_628;
            }
            else {
              local_628 = local_2d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              local_391 = 1;
              local_390 = local_628;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_388 = local_628;
            if ((local_3a1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_3a0);
            }
            if ((local_391 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_390);
            }
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_setAssociatedObject(local_2d8,&DAT_028cc1ba,local_388,1);
            _objc_storeStrong(&local_388,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setContentMode__026ca8e0,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setClipsToBounds__026ca8c8,1);
          puVar3 = local_2d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_240;
          (*(code *)PTR__objc_release_02578630)();
          puVar2 = (undefined *)0x0;
          if (puVar3 != puVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setImage__026ca978,local_240);
            puVar2 = local_258 + 1;
            local_258 = puVar2;
          }
          _objc_setAssociatedObject(puVar2,local_2d8,&DAT_028cc1bb,local_328,3);
          _objc_storeStrong(&local_380,0);
          local_24c = 0;
        }
        else {
          puVar2 = local_330;
          (*(code *)PTR__objc_msgSend_02578628)(local_330,PTR_s_isEqualToString__0269ccc8,local_328)
          ;
          uVar6 = (ulong)puVar2 & 0xffffffff;
          if (((ulong)puVar2 & 1) == 0) goto LAB_006ba5b0;
          puVar1 = local_2d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_image_026ca678);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_240;
          (*(code *)PTR__objc_release_02578630)();
          if (puVar1 != puVar2) {
            (*(code *)PTR__objc_msgSend_02578628)(local_2d8,PTR_s_setImage__026ca978,local_240);
            local_258 = local_258 + 1;
          }
          _memset(auStack_378,0,0x40);
          puVar2 = local_238;
          (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_5d0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_5d0 != (undefined *)0x0) {
            lVar4 = *local_368;
            local_5d8 = (undefined *)0x0;
            do {
              do {
                if (*local_368 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_368 - lVar4,puVar2);
                }
                lVar5 = *(long *)(local_370 + (long)local_5d8 * 8);
                local_338 = lVar5;
                FUN_006b98dc(lVar5,local_240,local_248);
                local_258 = local_258 + lVar5;
                local_5d8 = local_5d8 + 1;
              } while (local_5d8 < local_5d0);
              local_5d0 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,
                         auStack_1a8,0x10);
              local_5d8 = (undefined *)0x0;
            } while (local_5d0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_230 = local_258;
          local_24c = 1;
        }
        _objc_storeStrong(&local_330);
        _objc_storeStrong(&local_328,0);
        if (local_24c != 0) goto LAB_006ba950;
      }
      local_24c = 0;
    }
    else {
      puVar2 = local_2d8;
      FUN_006bcfe0();
      local_258 = local_258 + (long)puVar2;
      _memset(auStack_320,0,0x40);
      puVar2 = local_238;
      (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_530 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_530 != (undefined *)0x0) {
        lVar4 = *local_310;
        local_538 = (undefined *)0x0;
        do {
          do {
            if (*local_310 - lVar4 != 0) {
              _objc_enumerationMutation(*local_310 - lVar4,puVar2);
            }
            lVar5 = *(long *)(local_318 + (long)local_538 * 8);
            local_2e0 = lVar5;
            FUN_006b98dc(lVar5,local_240,local_248);
            local_258 = local_258 + lVar5;
            local_538 = local_538 + 1;
          } while (local_538 < local_530);
          local_530 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_320,auStack_128,
                     0x10);
          local_538 = (undefined *)0x0;
        } while (local_530 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_230 = local_258;
      local_24c = 1;
    }
LAB_006ba950:
    _objc_storeStrong(&local_2d8,0);
    if (local_24c != 0) goto LAB_006bab38;
  }
  _memset(auStack_3f0,0,0x40);
  puVar2 = local_238;
  (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_678 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_678 != (undefined *)0x0) {
    lVar4 = *local_3e0;
    local_680 = (undefined *)0x0;
    do {
      do {
        if (*local_3e0 - lVar4 != 0) {
          _objc_enumerationMutation(*local_3e0 - lVar4,puVar2);
        }
        lVar5 = *(long *)(local_3e8 + (long)local_680 * 8);
        local_3b0 = lVar5;
        FUN_006b98dc(lVar5,local_240,local_248);
        local_258 = local_258 + lVar5;
        local_680 = local_680 + 1;
      } while (local_680 < local_678);
      local_678 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_3f0,auStack_228,0x10
                );
      local_680 = (undefined *)0x0;
    } while (local_678 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_230 = local_258;
  local_24c = 1;
LAB_006bab38:
  _objc_storeStrong(&local_248);
  _objc_storeStrong(&local_240,0);
  _objc_storeStrong(&local_238,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_230;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

