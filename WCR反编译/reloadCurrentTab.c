// reloadCurrentTab @ 01cffae4

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::reloadCurrentTab(ID param_1,SEL param_2)

{
  byte bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_348;
  undefined *local_340;
  undefined *local_318;
  undefined *local_2c8;
  undefined *local_2c0;
  ID local_298;
  undefined *local_288;
  undefined *local_250;
  long local_238;
  undefined1 auStack_230 [8];
  long local_228;
  long *local_220;
  long local_1f0;
  byte local_1e2;
  byte local_1e1;
  undefined *local_1e0;
  undefined4 local_1d4;
  ID local_1d0;
  byte local_1c1;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  byte local_171;
  ID local_170;
  byte local_161;
  ID local_160;
  ID local_158;
  undefined *local_150;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentTab_026c3bd8);
  if (param_1 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_reloadHTMLItems_026c3c10);
  }
  else {
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_currentTab_026c3bd8);
    if (IVar2 == 3) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_250 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_250 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setUrlItems__026c3c18,local_250);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      IVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_urlItems_026c3c20);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__PgN__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTitle__0269cef0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      IVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_ensureBasePath_026c3c28);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_140 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_288 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        local_288 = *(undefined **)PTR____NSArray0___02578280;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_288;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_298 = local_130;
      local_150 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_currentTab_026c3bd8);
      local_161 = 0;
      local_171 = 0;
      if (local_298 - 1 == 0) {
        FUN_01cf5aa0();
        _objc_retainAutoreleasedReturnValue();
        local_161 = 1;
        local_160 = local_298;
      }
      else {
        FUN_01cf5b38(local_298 - 1);
        _objc_retainAutoreleasedReturnValue();
        local_171 = 1;
        local_170 = local_298;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = local_298;
      if ((local_171 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_170);
      }
      if ((local_161 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      _memset(auStack_1c0,0,0x40);
      puVar3 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,0x10)
      ;
      if (local_2c0 != (undefined *)0x0) {
        lVar7 = *local_1b0;
        local_2c8 = (undefined *)0x0;
        do {
          do {
            if (*local_1b0 - lVar7 != 0) {
              _objc_enumerationMutation(*local_1b0 - lVar7,puVar3);
            }
            local_180 = *(undefined8 *)(local_1b8 + (long)local_2c8 * 8);
            local_1c1 = 0;
            IVar2 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_140,PTR_s_stringByAppendingPathComponent__026cab30,local_180);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            local_1d0 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = 1;
            if (((ulong)puVar5 & 1) != 0) {
              bVar1 = local_1c1 ^ 1;
            }
            (*(code *)PTR__objc_release_02578630)(puVar4);
            if ((bVar1 & 1) == 0) {
              puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_318 = puVar5;
              if (puVar5 == (undefined *)0x0) {
                local_318 = *(undefined **)PTR____NSArray0___02578280;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1e0 = local_318;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              local_1e1 = 1;
              local_1e2 = 0;
              _memset(auStack_230,0,0x40);
              puVar4 = local_1e0;
              (*(code *)PTR__objc_retain_02578638)();
              local_340 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,
                         auStack_128,0x10);
              if (local_340 != (undefined *)0x0) {
                lVar8 = *local_220;
                local_348 = (undefined *)0x0;
                do {
                  do {
                    if (*local_220 - lVar8 != 0) {
                      _objc_enumerationMutation(*local_220 - lVar8,puVar4);
                    }
                    lVar9 = *(long *)(local_228 + (long)local_348 * 8);
                    local_1f0 = lVar9;
                    (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_pathExtension_0269e090);
                    _objc_retainAutoreleasedReturnValue();
                    lVar6 = lVar9;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_238 = lVar6;
                    (*(code *)PTR__objc_release_02578630)(lVar9);
                    lVar6 = local_238;
                    (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_length_0269cca0);
                    if (lVar6 == 0) {
                      local_1d4 = 5;
                    }
                    else {
                      local_1e1 = 0;
                      IVar2 = local_158;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_158,PTR_s_containsObject__0269cbb8,local_238);
                      if ((IVar2 & 1) != 0) {
                        local_1e2 = 1;
                      }
                      local_1d4 = 0;
                    }
                    _objc_storeStrong(&local_238,0);
                    local_348 = local_348 + 1;
                  } while (local_348 < local_340);
                  local_340 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_230,
                             auStack_128,0x10);
                  local_348 = (undefined *)0x0;
                } while (local_340 != (undefined *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(puVar4);
              if (((local_1e2 & 1) != 0) || ((local_1e1 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_180)
                ;
              }
              _objc_storeStrong(&local_1e0,0);
              local_1d4 = 0;
            }
            else {
              local_1d4 = 3;
            }
            _objc_storeStrong(&local_1d0,0);
            local_2c8 = local_2c8 + 1;
          } while (local_2c8 < local_2c0);
          local_2c0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                     0x10);
          local_2c8 = (undefined *)0x0;
        } while (local_2c0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_sortUsingSelector__0269e0a0,
                 PTR_s_localizedStandardCompare__0269e098);
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setFolderNames__026c3c30,local_150);
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__PgN__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setTitle__0269cef0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_158);
      _objc_storeStrong(&local_150,0);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_140,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

