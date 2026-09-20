// itemsForRelativePaths: @ 015b5c78

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::itemsForRelativePaths_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ID local_200;
  ID local_1f0;
  ID local_1d8;
  ulong local_1a8;
  ulong local_1a0;
  bool local_169;
  ID local_168;
  bool local_159;
  ID local_158;
  ID local_150;
  undefined *local_148;
  undefined *local_140;
  byte local_131;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ID local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar1 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar2;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1a0 != 0) {
      lVar6 = *local_118;
      local_1a8 = 0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,uVar1);
          }
          uVar7 = *(ID *)(local_120 + local_1a8 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_e8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar7 & 1) != 0) &&
             (IVar4 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0), IVar4 != 0)) {
            IVar4 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_absolutePathFromRelativeToRoot__026b0ce0,local_e8);
            _objc_retainAutoreleasedReturnValue();
            local_131 = 0;
            puVar2 = local_d8;
            local_130 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_fileExistsAtPath_isDirectory__026ca638,IVar4,&local_131);
            if (((ulong)puVar2 & 1) == 0) {
              local_cc = 3;
            }
            else {
              puVar2 = PTR_WCRefineVoicePackItem_026cedd8;
              _objc_alloc_init();
              IVar4 = local_130;
              local_140 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_lastPathComponent_026ca780);
              _objc_retainAutoreleasedReturnValue();
              local_1d8 = IVar4;
              if (IVar4 == 0) {
                local_1d8 = local_e8;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setName__0269e0c8,local_1d8);
              (*(code *)PTR__objc_release_02578630)(IVar4);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_setAbsolutePath__026ae2c8,local_130);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_setRelativePath__026a7440,local_e8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_140,PTR_s_setIsDirectory__026b0ce8,local_131 & 1);
              puVar2 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_attributesOfItemAtPath_error__0269db08,local_130,0);
              _objc_retainAutoreleasedReturnValue();
              local_148 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileModificationDate_026b0c18);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setModificationDate__026b0cf0);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_fileSize_026a1640);
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setFileSize__026ac4f0,puVar2);
              IVar4 = local_b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_b8,PTR_s_bindingForRelativePath__026b0bb0,local_e8);
              _objc_retainAutoreleasedReturnValue();
              local_150 = IVar4;
              if (IVar4 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                IVar5 = IVar4;
                (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
                local_159 = (IVar5 & 1) == 0;
                if (local_159) {
                  local_1f0 = 0;
                }
                else {
                  local_1f0 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
                  _objc_retainAutoreleasedReturnValue();
                  local_158 = local_1f0;
                }
                local_159 = !local_159;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_setRepositoryCode__026b0cf8,local_1f0);
                if (local_159) {
                  (*(code *)PTR__objc_release_02578630)(local_158);
                }
                (*(code *)PTR__objc_release_02578630)(IVar4);
                IVar4 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendOrder);
                _objc_retainAutoreleasedReturnValue();
                IVar5 = IVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_169 = (IVar5 & 1) == 0;
                if (local_169) {
                  local_200 = 0;
                }
                else {
                  local_168 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_sendOrder);
                  _objc_retainAutoreleasedReturnValue();
                  local_200 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)();
                }
                local_169 = !local_169;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_setSendOrder__026b0bb8,local_200);
                if (local_169) {
                  (*(code *)PTR__objc_release_02578630)(local_168);
                }
                (*(code *)PTR__objc_release_02578630)(IVar4);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_140);
              _objc_storeStrong(&local_150);
              _objc_storeStrong(&local_148,0);
              _objc_storeStrong(&local_140,0);
              local_cc = 0;
            }
            _objc_storeStrong(&local_130,0);
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar2 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_cc = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

