// resolvedMediaPathForScene:dark:configuration: @ 015d6eb0

/* Function Stack Size: 0x24 bytes */

ID WCRGlobalPageBackgroundStore::resolvedMediaPathForScene_dark_configuration_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  long lVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *local_2f8;
  undefined *local_2d0;
  undefined *local_2c8;
  cfstringStruct *local_2a8;
  cfstringStruct *local_298;
  cfstringStruct *local_288;
  cfstringStruct *local_278;
  cfstringStruct *local_260;
  cfstringStruct *local_250;
  cfstringStruct *local_240;
  cfstringStruct *local_228;
  cfstringStruct *local_1e8;
  ID local_1c8;
  uint local_1bc;
  cfstringStruct *local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  cfstringStruct *local_170;
  bool local_161;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  bool local_141;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  bool local_119;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  byte local_f9;
  undefined8 local_f8;
  SEL local_f0;
  ID local_e8;
  ID local_e0;
  undefined1 auStack_d8 [128];
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = 0;
  local_f0 = param_2;
  local_e8 = param_1;
  _objc_storeStrong(&local_f8,param_3);
  local_f9 = (byte)param_4;
  local_108 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_108,param_5);
  pcVar11 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  pcVar3 = pcVar11;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_119 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_1e8 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
  }
  else {
    local_1e8 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
    _objc_retainAutoreleasedReturnValue();
    local_118 = local_1e8;
  }
  local_119 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_110 = local_1e8;
  if ((local_119 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_118);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar11);
  local_128 = &cf_night;
  if ((local_f9 & 1) == 0) {
    local_128 = &cf_day;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = &cf_day;
  if ((local_f9 & 1) == 0) {
    local_130 = &cf_night;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar11 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_110,PTR_s_objectForKeyedSubscript__0269d098,&cf_global);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  pcVar3 = pcVar11;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_141 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_228 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
  }
  else {
    local_228 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR_s_objectForKeyedSubscript__0269d098,&cf_global);
    _objc_retainAutoreleasedReturnValue();
    local_140 = local_228;
  }
  local_141 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = local_228;
  if ((local_141 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_140);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar11);
  local_150 = (undefined *)0x0;
  IVar4 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_followsGlobal__026b0fe0,local_108);
  if ((IVar4 & 1) == 0) {
    pcVar11 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_110,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar3 = pcVar11;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar11,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_161 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_260 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
    }
    else {
      local_260 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_objectForKeyedSubscript__0269d098,local_f8);
      _objc_retainAutoreleasedReturnValue();
      local_160 = local_260;
    }
    local_161 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_260;
    if ((local_161 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_160);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar11);
    pcVar11 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_128);
    _objc_retainAutoreleasedReturnValue();
    local_278 = pcVar11;
    if (pcVar11 == (cfstringStruct *)0x0) {
      local_278 = &::cf___;
    }
    local_58 = local_278;
    pcVar3 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_158,PTR_s_objectForKeyedSubscript__0269d098,local_130);
    _objc_retainAutoreleasedReturnValue();
    local_288 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_288 = &::cf___;
    }
    local_50 = local_288;
    pcVar5 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_objectForKeyedSubscript__0269d098,local_128);
    _objc_retainAutoreleasedReturnValue();
    local_298 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_298 = &::cf___;
    }
    local_48 = local_298;
    pcVar6 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_objectForKeyedSubscript__0269d098,local_130);
    _objc_retainAutoreleasedReturnValue();
    local_2a8 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_2a8 = &::cf___;
    }
    local_40 = local_2a8;
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_150;
    local_150 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar11);
    _objc_storeStrong(&local_158,0);
  }
  else {
    pcVar11 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_objectForKeyedSubscript__0269d098,local_128);
    _objc_retainAutoreleasedReturnValue();
    local_240 = pcVar11;
    if (pcVar11 == (cfstringStruct *)0x0) {
      local_240 = &::cf___;
    }
    local_38 = local_240;
    pcVar3 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_objectForKeyedSubscript__0269d098,local_130);
    _objc_retainAutoreleasedReturnValue();
    local_250 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_250 = &::cf___;
    }
    local_30 = local_250;
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_150;
    local_150 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar11);
  }
  _memset(auStack_1b0,0,0x40);
  puVar2 = local_150;
  (*(code *)PTR__objc_retain_02578638)();
  local_2c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_d8,0x10);
  if (local_2c8 != (undefined *)0x0) {
    lVar10 = *local_1a0;
    local_2d0 = (undefined *)0x0;
    do {
      do {
        if (*local_1a0 - lVar10 != 0) {
          _objc_enumerationMutation(*local_1a0 - lVar10,puVar2);
        }
        pcVar11 = *(cfstringStruct **)(local_1a8 + (long)local_2d0 * 8);
        local_170 = pcVar11;
        FUN_015d5afc();
        _objc_retainAutoreleasedReturnValue();
        local_2f8 = pcVar11;
        if (pcVar11 == (cfstringStruct *)0x0) {
          local_2f8 = &::cf___;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1b8 = local_2f8;
        (*(code *)PTR__objc_release_02578630)(pcVar11);
        pcVar11 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_length_0269cca0);
        if ((pcVar11 == (cfstringStruct *)0x0) ||
           (IVar4 = local_e8,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_e8,PTR_s_isSupportedFileName__026b0fd0,local_1b8), (IVar4 & 1) == 0)) {
          local_1bc = 3;
        }
        else {
          IVar4 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_repositoryPath_026aeb48);
          _objc_retainAutoreleasedReturnValue();
          IVar8 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1c8 = IVar8;
          (*(code *)PTR__objc_release_02578630)(IVar4);
          puVar7 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar7);
          IVar4 = local_1c8;
          bVar1 = ((ulong)puVar9 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_e0 = IVar4;
          }
          local_1bc = (uint)bVar1;
          _objc_storeStrong(&local_1c8,0);
        }
        _objc_storeStrong(&local_1b8,0);
        if ((local_1bc != 0) && (local_1bc != 3)) goto LAB_015d790c;
        local_2d0 = local_2d0 + 1;
      } while (local_2d0 < local_2c8);
      local_2c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_d8,0x10)
      ;
      local_2d0 = (undefined *)0x0;
    } while (local_2c8 != (undefined *)0x0);
  }
  local_1bc = 0;
LAB_015d790c:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_1bc == 0) {
    local_e0 = 0;
    local_1bc = 1;
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

