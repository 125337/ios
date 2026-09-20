// chatAvatarProfileCardFunctionPageActionOrder @ 02009cfc

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::chatAvatarProfileCardFunctionPageActionOrder(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  undefined *local_2c8;
  undefined *local_2c0;
  undefined *local_298;
  undefined *local_278;
  undefined *local_270;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  undefined8 local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  ID local_148;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_138;
  local_140 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_148 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  puVar2 = PTR_WCRefineProfileCardActionCatalog_026ced78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineProfileCardActionCatalog_026ced78,
             PTR_s_normalizedOrderFromSavedOrder__026c3550,local_148);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_148;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_150 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar4 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithArray__0269d9a0,local_148);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_158 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar3;
    _memset(auStack_1a8,0,0x40);
    puVar2 = PTR_WCRefineProfileCardActionCatalog_026ced78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineProfileCardActionCatalog_026ced78,
               PTR_s_seededCustomPageActionIDs_026ca2f0);
    _objc_retainAutoreleasedReturnValue();
    local_270 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_270 != (undefined *)0x0) {
      lVar5 = *local_198;
      local_278 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar5 != 0) {
            _objc_enumerationMutation(*local_198 - lVar5,puVar2);
          }
          local_168 = *(undefined8 *)(local_1a0 + (long)local_278 * 8);
          puVar3 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_containsObject__0269cbb8,local_168);
          if ((((ulong)puVar3 & 1) != 0) &&
             (puVar3 = local_158,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_158,PTR_s_containsObject__0269cbb8,local_168),
             ((ulong)puVar3 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_168);
          }
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_278 = (undefined *)0x0;
      } while (local_270 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_s_chatAvatarProfileCardFunctionPag_026b0970;
      _NSStringFromSelector();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_140;
      local_1b0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_objectForKey__0269e048,puVar2);
      _objc_retainAutoreleasedReturnValue();
      local_298 = PTR_WCRefineProfileCardActionCatalog_026ced78;
      local_1b8 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineProfileCardActionCatalog_026ced78,
                 PTR_s_normalizedHiddenIDsFromSavedIDs__026c3558,IVar4);
      _objc_retainAutoreleasedReturnValue();
      local_1d1 = 0;
      local_1e1 = 0;
      local_1c0 = local_298;
      if (local_298 == (undefined *)0x0) {
        local_298 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1e1 = 1;
        local_1e0 = local_298;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_298,PTR_s_mutableCopy_0269d8a0);
        local_1d1 = 1;
        local_1d0 = local_298;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = local_298;
      if ((local_1e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1e0);
      }
      if ((local_1d1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d0);
      }
      _memset(auStack_230,0,0x40);
      puVar2 = local_160;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,0x10
                );
      if (local_2c0 != (undefined *)0x0) {
        lVar5 = *local_220;
        local_2c8 = (undefined *)0x0;
        do {
          do {
            if (*local_220 - lVar5 != 0) {
              _objc_enumerationMutation(*local_220 - lVar5,puVar2);
            }
            local_1f0 = *(undefined8 *)(local_228 + (long)local_2c8 * 8);
            puVar3 = local_1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c8,PTR_s_containsObject__0269cbb8,local_1f0);
            if (((ulong)puVar3 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_addObject__0269d180,local_1f0);
            }
            local_2c8 = local_2c8 + 1;
          } while (local_2c8 < local_2c0);
          local_2c0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,auStack_128,
                     0x10);
          local_2c8 = (undefined *)0x0;
        } while (local_2c0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      IVar4 = local_140;
      puVar2 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setObject_forKey__026ca9e8,puVar2,local_1b0)
      ;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_1c8);
      _objc_storeStrong(&local_1c0,0);
      _objc_storeStrong(&local_1b8,0);
      _objc_storeStrong(&local_1b0,0);
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
  }
  IVar4 = local_140;
  puVar2 = local_150;
  SVar1 = local_138;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setObject_forKey__026ca9e8,puVar2);
  (*(code *)PTR__objc_release_02578630)(SVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = local_150;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

