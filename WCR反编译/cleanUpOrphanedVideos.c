// cleanUpOrphanedVideos @ 010b3b98

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftManager::cleanUpOrphanedVideos(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *local_2a8;
  undefined *local_2a0;
  ulong local_248;
  ulong local_240;
  ID local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  long local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  long local_178;
  undefined *local_170;
  undefined4 local_164;
  undefined8 local_160;
  undefined *local_158;
  long local_150;
  undefined *local_148;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_permanentVideoDirectory_026ae5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_140 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_150 = 0;
  local_160 = 0;
  local_148 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_140,&local_160);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_150,local_160);
  local_158 = puVar1;
  if (local_150 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar1;
    _memset(auStack_1b8,0,0x40);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    local_240 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != 0) {
      lVar4 = *local_1a8;
      local_248 = 0;
      do {
        do {
          if (*local_1a8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar4,IVar2);
          }
          lVar5 = *(long *)(local_1b0 + local_248 * 8);
          local_178 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_sightDraft_026a4d98);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (lVar5 != 0) {
            lVar5 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_sightDraft_026a4d98);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = lVar5;
            (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_draftItemVideoPath_026ae5f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            puVar1 = local_170;
            if (lVar5 != 0) {
              lVar5 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_draftItemVideoPath_026ae5f8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(lVar5);
            }
            _objc_storeStrong(&local_1c0,0);
          }
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _memset(auStack_208,0,0x40);
    puVar1 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,0x10);
    if (local_2a0 != (undefined *)0x0) {
      lVar4 = *local_1f8;
      local_2a8 = (undefined *)0x0;
      do {
        do {
          if (*local_1f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar4,puVar1);
          }
          local_1c8 = *(undefined8 *)(local_200 + (long)local_2a8 * 8);
          IVar2 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_140,PTR_s_stringByAppendingPathComponent__026cab30,local_1c8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_170;
          local_210 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_containsObject__0269cbb8,IVar2);
          if (((ulong)puVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_148,PTR_s_removeItemAtPath_error__0269f910,local_210,0);
          }
          _objc_storeStrong(&local_210,0);
          local_2a8 = local_2a8 + 1;
        } while (local_2a8 < local_2a0);
        local_2a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2a8 = (undefined *)0x0;
      } while (local_2a0 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_170,0);
    local_164 = 0;
  }
  else {
    local_164 = 1;
  }
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

