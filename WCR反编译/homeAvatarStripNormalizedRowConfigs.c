// homeAvatarStripNormalizedRowConfigs @ 02157d58

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::homeAvatarStripNormalizedRowConfigs(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  undefined *local_3a8;
  undefined *local_360;
  undefined *local_340;
  undefined *local_318;
  undefined *local_2f8;
  undefined *local_2f0;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined *local_2a0;
  undefined *local_288;
  undefined *local_260;
  double local_228;
  double local_220;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  long local_1b0;
  byte local_1a1;
  undefined *local_1a0;
  double local_198;
  byte local_189;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  int local_154;
  undefined *local_150;
  int local_144;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  int local_11c;
  undefined *local_118;
  int local_10c;
  undefined *local_108;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  bool local_d9;
  undefined *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  bool local_b1;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  SEL local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar8 = DAT_02323d38;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  dVar7 = DAT_02323d38;
  local_90 = param_2;
  local_88 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_98 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKeyedSubscript__0269d098,&cf_homeAvatarStripRowGapSemanticV2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (((ulong)puVar6 & 1) != 0) goto LAB_021585bc;
  puVar6 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_homeAvatarStripRowSpacing);
  _objc_retainAutoreleasedReturnValue();
  local_a0 = puVar6;
  if (puVar6 == (undefined *)0x0) {
LAB_02157ed4:
    dVar7 = 5.0;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,
               &cf_homeAvatarStripRowSpacing);
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if (((ulong)puVar6 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_doubleValue_026ca608);
      dVar7 = ABS(dVar7 - 2.0);
      if (dVar7 < dVar8) goto LAB_02157ed4;
    }
  }
  puVar6 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_homeAvatarStripRowConfigs);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  puVar3 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_b1 = false;
  bVar1 = ((ulong)puVar3 & 1) == 0;
  if (bVar1) {
    local_260 = (undefined *)0x0;
  }
  else {
    local_260 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_homeAvatarStripRowConfigs);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_260;
  }
  local_b1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_260;
  if ((local_b1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar6);
  puVar2 = local_a8;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if (puVar2 != (undefined *)0x0) {
    puVar2 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_arrayWithCapacity__0269d9b8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar6;
    for (local_c8 = 0; lVar5 = local_c8, puVar6 = local_a8,
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_count_0269cfe0), lVar5 < (long)puVar6;
        local_c8 = local_c8 + 1) {
      puVar6 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_c8);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      puVar3 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_d9 = false;
      bVar1 = ((ulong)puVar3 & 1) == 0;
      if (bVar1) {
        local_288 = *(undefined **)PTR____NSDictionary0___02578288;
      }
      else {
        local_288 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_objectAtIndexedSubscript__0269cc78,local_c8);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_288;
      }
      local_d9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = local_288;
      if ((local_d9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      puVar6 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mutableCopy_0269d8a0);
      local_f1 = 0;
      local_2a0 = puVar6;
      if (puVar6 == (undefined *)0x0) {
        local_2a0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_f0 = local_2a0;
      }
      local_f1 = puVar6 == (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_e8 = local_2a0;
      if ((local_f1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (0 < local_c8) {
        puVar6 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_topSpacing);
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar6;
        if (puVar6 == (undefined *)0x0) {
LAB_021583e8:
          dVar7 = 5.0;
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,&cf_topSpacing);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
          if (((ulong)puVar6 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_doubleValue_026ca608);
            dVar7 = ABS(dVar7 - 2.0);
            if (dVar7 < dVar8) goto LAB_021583e8;
          }
        }
        _objc_storeStrong(&local_100,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_e8);
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_d0,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0,
               &cf_homeAvatarStripRowConfigs);
    _objc_storeStrong(&local_c0,0);
  }
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,puVar6,
             &cf_homeAvatarStripRowGapSemanticV2);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_a0,0);
LAB_021585bc:
  local_10c = 1;
  local_11c = 3;
  puVar6 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_homeAvatarStripRowCount_026a23d8);
  local_2e0 = puVar6;
  if ((long)local_11c < (long)puVar6) {
    local_2e0 = (undefined *)(long)local_11c;
  }
  local_130 = local_2e0;
  local_118 = local_2e0;
  if ((long)local_10c < (long)local_2e0) {
    local_2e8 = local_2e0;
  }
  else {
    local_2e8 = (undefined *)(long)local_10c;
  }
  local_138 = local_2e8;
  local_108 = local_2e8;
  local_144 = 1;
  local_154 = 7;
  puVar2 = local_88;
  local_128 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_homeAvatarStripPerRowCount_026a23e0);
  local_2f0 = puVar2;
  if ((long)local_154 < (long)puVar2) {
    local_2f0 = (undefined *)(long)local_154;
  }
  local_168 = local_2f0;
  local_150 = local_2f0;
  if ((long)local_144 < (long)local_2f0) {
    local_2f8 = local_2f0;
  }
  else {
    local_2f8 = (undefined *)(long)local_144;
  }
  local_170 = local_2f8;
  local_140 = local_2f8;
  puVar6 = local_88;
  local_160 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_homeAvatarStripRowConfigs_026ca430);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_88;
  local_178 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_180 = puVar6;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar6 = local_180;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar6 & 1) == 0) {
    local_318 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_318 = local_180;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = local_318;
  puVar6 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0);
  local_189 = false;
  if (puVar6 == (undefined *)0x0) {
    puVar6 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
    local_189 = puVar6 != (undefined *)0x0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_homeAvatarStripRowSpacing_026ca438);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_198 = dVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithCapacity__0269d9b8,local_108);
  _objc_retainAutoreleasedReturnValue();
  local_1a1 = 0;
  local_1b0 = 0;
  local_1a0 = puVar6;
  do {
    lVar5 = local_1b0;
    if ((long)local_108 <= local_1b0) {
      if ((local_189 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setHomeAvatarStripRowConfigs__026ca440,local_1a0);
      }
      if ((local_1a1 & 1) == 0) {
        puVar6 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
        local_80 = puVar6;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_homeAvatarStripRebalanceRowsByPe_026ca428);
        puVar6 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar6;
      }
      _objc_storeStrong(&local_1a0);
      _objc_storeStrong(&local_188,0);
      _objc_storeStrong(&local_180,0);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_98,0);
      if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      _objc_autoreleaseReturnValue(0);
      return (ID)local_80;
    }
    puVar6 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0);
    local_1c1 = 0;
    local_1d1 = 0;
    if (lVar5 < (long)puVar6) {
      puVar6 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_objectAtIndexedSubscript__0269cc78,local_1b0);
      _objc_retainAutoreleasedReturnValue();
      local_1c1 = 1;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_1c0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar6 & 1) == 0) goto LAB_02158a58;
      local_340 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_objectAtIndexedSubscript__0269cc78,local_1b0);
      _objc_retainAutoreleasedReturnValue();
      local_1d1 = 1;
      local_1d0 = local_340;
    }
    else {
LAB_02158a58:
      local_340 = (undefined *)0x0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = local_340;
    if ((local_1d1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1d0);
    }
    if ((local_1c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c0);
    }
    puVar6 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_1e0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar6 & 1) == 0) {
      _objc_storeStrong(&local_1e0,*(undefined8 *)PTR____NSArray0___02578280);
    }
    if ((local_189 & 1) != 0) {
      lVar5 = local_1b0 * (long)local_140;
      puVar2 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
      puVar6 = local_140;
      if (lVar5 < (long)puVar2) {
        local_360 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
        local_360 = local_360 + -lVar5;
        if ((long)puVar6 < (long)local_360) {
          local_360 = puVar6;
        }
        local_78 = local_360;
        local_60 = local_360;
        puVar2 = local_188;
        local_70 = lVar5;
        local_68 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_188,PTR_s_subarrayWithRange__0269d848,lVar5,local_360);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_1e0;
        local_1e0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        _objc_storeStrong(&local_1e0,*(undefined8 *)PTR____NSArray0___02578280);
      }
    }
    puVar2 = local_1e0;
    FUN_02159270(local_1e0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_1e0;
    local_1e0 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar6 = local_1e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_count_0269cfe0);
    if ((long)local_140 < (long)puVar6) {
      local_1a1 = 1;
    }
    dVar8 = 0.0;
    local_220 = 0.0;
    local_228 = 0.0;
    puVar6 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_topSpacing);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar2 & 1) == 0) {
      dVar7 = dVar8;
      if (0 < local_1b0) {
        local_220 = local_198;
        dVar7 = local_198;
      }
    }
    else {
      puVar6 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_topSpacing);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      dVar7 = dVar8;
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_220 = dVar8;
    }
    puVar6 = local_1b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_bottomSpacing);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar2 & 1) == 0) {
      if (((local_189 & 1) != 0) && (local_1b0 < (long)(local_108 + -1))) {
        local_228 = local_198;
      }
    }
    else {
      puVar6 = local_1b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_bottomSpacing);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_228 = dVar7;
    }
    puVar6 = local_1a0;
    if (local_220 < -80.0) {
      local_220 = -80.0;
    }
    if (80.0 < local_220) {
      local_220 = 80.0;
    }
    if (local_228 < -80.0) {
      local_228 = -80.0;
    }
    if (80.0 < local_228) {
      local_228 = 80.0;
    }
    local_58 = &cf_usernames;
    if (local_1e0 == (undefined *)0x0) {
      local_3a8 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_3a8 = local_1e0;
    }
    local_40 = local_3a8;
    local_50 = &cf_topSpacing;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_220,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = &cf_bottomSpacing;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_228,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_1e0);
    _objc_storeStrong(&local_1b8,0);
    local_1b0 = local_1b0 + 1;
  } while( true );
}

