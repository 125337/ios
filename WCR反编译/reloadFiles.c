// reloadFiles @ 01c70934

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::reloadFiles(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  long lVar6;
  undefined *local_328;
  undefined *local_308;
  undefined *local_300;
  ulong local_2c8;
  ulong local_2c0;
  undefined *local_248;
  undefined *local_238;
  undefined *local_228;
  ID local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  undefined *local_180;
  ID local_178;
  undefined *local_170;
  undefined4 local_168;
  undefined4 local_164;
  code *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_repositoryMediaFiles_026bd740);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_140 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar3 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_repositoryPath_026aeb48);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_140;
    local_170 = PTR___NSConcreteGlobalBlock_02578658;
    local_168 = 0xd0800000;
    local_164 = 0;
    local_160 = FUN_01c711f0;
    local_158 = &DAT_02586118;
    local_148 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_sortedArrayUsingComparator__0269fae8,&local_170);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_140;
    local_140 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_148,0);
  }
  IVar5 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pinnedFiles_026c2658);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  puVar3 = local_140;
  local_178 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar3);
  _objc_retainAutoreleasedReturnValue();
  local_180 = puVar2;
  _memset(auStack_1c8,0,0x40);
  IVar5 = local_178;
  (*(code *)PTR__objc_retain_02578638)();
  local_2c0 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10);
  if (local_2c0 != 0) {
    lVar6 = *local_1b8;
    local_2c8 = 0;
    do {
      do {
        if (*local_1b8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1b8 - lVar6,IVar5);
        }
        local_188 = *(undefined8 *)(local_1c0 + local_2c8 * 8);
        puVar2 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_containsObject__0269cbb8,local_188);
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_addObject__0269d180,local_188);
        }
        local_2c8 = local_2c8 + 1;
      } while (local_2c8 < local_2c0);
      local_2c0 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,0x10);
      local_2c8 = 0;
    } while (local_2c0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  _memset(auStack_210,0,0x40);
  puVar2 = local_140;
  (*(code *)PTR__objc_retain_02578638)();
  local_300 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10);
  if (local_300 != (undefined *)0x0) {
    lVar6 = *local_200;
    local_308 = (undefined *)0x0;
    do {
      do {
        if (*local_200 - lVar6 != 0) {
          _objc_enumerationMutation(*local_200 - lVar6,puVar2);
        }
        local_1d0 = *(undefined8 *)(local_208 + (long)local_308 * 8);
        puVar3 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_containsObject__0269cbb8,local_1d0);
        if (((ulong)puVar3 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_addObject__0269d180,local_1d0);
        }
        local_308 = local_308 + 1;
      } while (local_308 < local_300);
      local_300 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10
                );
      local_308 = (undefined *)0x0;
    } while (local_300 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setFiles__026c2660,local_180);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_applySearch_026bf910);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_updateLegendLabel_026c2650);
  IVar5 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_selectionMode_026c2628);
  puVar2 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
  local_328 = PTR__OBJC_CLASS___NSString_026cdfe8;
  bVar1 = (IVar5 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_stringWithFormat__0269cca8,&cf_ofVN__);
    _objc_retainAutoreleasedReturnValue();
    local_248 = local_328;
  }
  else {
    local_218 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_scene_026a6c60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_displayNameForScene__026b0fe8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_dark_0269fb88);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(local_328,PTR_s_stringWithFormat__0269cca8,&cf_b_);
    _objc_retainAutoreleasedReturnValue();
    local_238 = local_328;
    local_228 = puVar2;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTitle__0269cef0,local_328);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_248);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_238);
    (*(code *)PTR__objc_release_02578630)(local_228);
    (*(code *)PTR__objc_release_02578630)(local_218);
  }
  _objc_storeStrong(&local_180);
  _objc_storeStrong(&local_178,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

