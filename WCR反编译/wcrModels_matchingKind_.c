// wcrModels:matchingKind: @ 017d9680

/* Function Stack Size: 0x20 bytes */

ID WCRefineAISettingsViewController::wcrModels_matchingKind_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_640;
  undefined *local_620;
  undefined *local_618;
  undefined *local_5e0;
  undefined *local_5d8;
  undefined *local_5a8;
  undefined *local_588;
  undefined *local_580;
  undefined *local_548;
  undefined *local_540;
  undefined *local_518;
  undefined *local_510;
  undefined1 auStack_500 [8];
  long local_4f8;
  long *local_4f0;
  undefined8 local_4c0;
  ulong local_4b8;
  undefined1 auStack_4b0 [8];
  long local_4a8;
  long *local_4a0;
  ulong local_470;
  undefined *local_468;
  undefined4 local_45c;
  undefined1 auStack_458 [8];
  long local_450;
  long *local_448;
  undefined8 local_418;
  byte local_409;
  ulong local_408;
  undefined1 auStack_400 [8];
  long local_3f8;
  long *local_3f0;
  ulong local_3c0;
  undefined *local_3b8;
  undefined *local_3b0;
  byte local_3a1;
  undefined *local_3a0;
  byte local_391;
  undefined *local_390;
  undefined *local_388;
  ulong local_380;
  undefined *local_378;
  SEL local_370;
  ID local_368;
  undefined *local_360;
  undefined1 auStack_358 [128];
  undefined1 auStack_2d8 [128];
  undefined1 auStack_258 [128];
  undefined1 auStack_1d8 [128];
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
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
  local_378 = (undefined *)0x0;
  local_370 = param_2;
  local_368 = param_1;
  _objc_storeStrong(&local_378,param_3);
  local_380 = 0;
  _objc_storeStrong(&local_380,param_4);
  uVar4 = local_380;
  (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_isEqualToString__0269ccc8,&cf_image);
  local_391 = 0;
  local_3a1 = 0;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_380;
    (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_isEqualToString__0269ccc8,&cf_video);
    if ((uVar4 & 1) == 0) {
      local_518 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_c0 = &cf_video;
      local_b8 = &cf_imagine;
      local_b0 = &cf_seedance;
      local_a8 = &cf_sd;
      local_a0 = &cf_wan;
      local_98 = &cf_luma;
      local_90 = &cf_ray;
      local_88 = &cf_veo;
      local_80 = &cf_sora;
      local_78 = &cf_t2v;
      local_70 = &cf_i2v;
      local_518 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,0xb);
      _objc_retainAutoreleasedReturnValue();
      local_3a1 = 1;
      local_3a0 = local_518;
    }
    local_510 = local_518;
  }
  else {
    local_68 = &cf_image;
    local_60 = &cf_imagine;
    local_58 = &cf_seedream;
    local_50 = &cf_kolors;
    local_48 = &cf_flux;
    local_40 = &cf_stable;
    local_38 = &cf_dall;
    local_30 = &cf_gpt_image;
    local_510 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    local_391 = 1;
    local_390 = local_510;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_388 = local_510;
  if ((local_3a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_3a0);
  }
  if ((local_391 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_390);
  }
  uVar4 = local_380;
  (*(code *)PTR__objc_msgSend_02578628)(local_380,PTR_s_isEqualToString__0269ccc8,&cf_chat);
  if ((uVar4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_468 = puVar2;
    _memset(auStack_4b0,0,0x40);
    puVar2 = local_378;
    (*(code *)PTR__objc_retain_02578638)();
    local_5d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4b0,auStack_2d8,0x10);
    if (local_5d8 != (undefined *)0x0) {
      lVar3 = *local_4a0;
      local_5e0 = (undefined *)0x0;
      do {
        do {
          if (*local_4a0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_4a0 - lVar3,puVar2);
          }
          uVar4 = *(ulong *)(local_4a8 + (long)local_5e0 * 8);
          local_470 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_4b8 = uVar4;
          _memset(auStack_500,0,0x40);
          puVar1 = local_388;
          (*(code *)PTR__objc_retain_02578638)();
          local_618 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_500,auStack_358,
                     0x10);
          if (local_618 != (undefined *)0x0) {
            lVar5 = *local_4f0;
            local_620 = (undefined *)0x0;
            do {
              do {
                if (*local_4f0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_4f0 - lVar5,puVar1);
                }
                local_4c0 = *(undefined8 *)(local_4f8 + (long)local_620 * 8);
                uVar4 = local_4b8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_4b8,PTR_s_containsString__0269d0b0,local_4c0);
                if ((uVar4 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_468,PTR_s_addObject__0269d180,local_470);
                  local_45c = 8;
                  goto LAB_017da0a0;
                }
                local_620 = local_620 + 1;
              } while (local_620 < local_618);
              local_618 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_500,
                         auStack_358,0x10);
              local_620 = (undefined *)0x0;
            } while (local_618 != (undefined *)0x0);
          }
          local_45c = 0;
LAB_017da0a0:
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_storeStrong(&local_4b8,0);
          local_5e0 = local_5e0 + 1;
        } while (local_5e0 < local_5d8);
        local_5d8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_4b0,auStack_2d8,
                   0x10);
        local_5e0 = (undefined *)0x0;
      } while (local_5d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_468;
    (*(code *)PTR__objc_msgSend_02578628)(local_468,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_640 = local_378;
    }
    else {
      local_640 = local_468;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_360 = local_640;
    local_45c = 1;
    _objc_storeStrong(&local_468,0);
  }
  else {
    local_158 = &cf_image;
    local_150 = &cf_imagine;
    local_148 = &cf_seedream;
    local_140 = &cf_kolors;
    local_138 = &cf_flux;
    local_130 = &cf_stable;
    local_128 = &cf_dall;
    local_120 = &cf_video;
    local_118 = &cf_seedance;
    local_110 = &cf_wan;
    local_108 = &cf_luma;
    local_100 = &cf_ray;
    local_f8 = &cf_veo;
    local_f0 = &cf_sora;
    local_e8 = &cf_tts;
    local_e0 = &cf_whisper;
    local_d8 = &cf_audio;
    local_d0 = &cf_embed;
    local_c8 = &cf_rerank;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_158,
               0x13);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_3b0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_3b8 = puVar1;
    _memset(auStack_400,0,0x40);
    puVar2 = local_378;
    (*(code *)PTR__objc_retain_02578638)();
    local_540 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_1d8,0x10);
    if (local_540 != (undefined *)0x0) {
      lVar3 = *local_3f0;
      local_548 = (undefined *)0x0;
      do {
        do {
          if (*local_3f0 - lVar3 != 0) {
            _objc_enumerationMutation(*local_3f0 - lVar3,puVar2);
          }
          uVar4 = *(ulong *)(local_3f8 + (long)local_548 * 8);
          local_3c0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          local_409 = 0;
          local_408 = uVar4;
          _memset(auStack_458,0,0x40);
          puVar1 = local_3b0;
          (*(code *)PTR__objc_retain_02578638)();
          local_580 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_458,auStack_258,
                     0x10);
          if (local_580 != (undefined *)0x0) {
            lVar5 = *local_448;
            local_588 = (undefined *)0x0;
            do {
              do {
                if (*local_448 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_448 - lVar5,puVar1);
                }
                local_418 = *(undefined8 *)(local_450 + (long)local_588 * 8);
                uVar4 = local_408;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_408,PTR_s_containsString__0269d0b0,local_418);
                if ((uVar4 & 1) != 0) {
                  local_409 = 1;
                  local_45c = 4;
                  goto LAB_017d9cdc;
                }
                local_588 = local_588 + 1;
              } while (local_588 < local_580);
              local_580 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_458,
                         auStack_258,0x10);
              local_588 = (undefined *)0x0;
            } while (local_580 != (undefined *)0x0);
          }
          local_45c = 0;
LAB_017d9cdc:
          (*(code *)PTR__objc_release_02578630)(puVar1);
          if ((local_409 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_addObject__0269d180,local_3c0);
          }
          _objc_storeStrong(&local_408,0);
          local_548 = local_548 + 1;
        } while (local_548 < local_540);
        local_540 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_400,auStack_1d8,
                   0x10);
        local_548 = (undefined *)0x0;
      } while (local_540 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_3b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_3b8,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      local_5a8 = local_378;
    }
    else {
      local_5a8 = local_3b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_360 = local_5a8;
    local_45c = 1;
    _objc_storeStrong(&local_3b8);
    _objc_storeStrong(&local_3b0,0);
  }
  _objc_storeStrong(&local_388);
  _objc_storeStrong(&local_380,0);
  _objc_storeStrong(&local_378,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_360;
}

