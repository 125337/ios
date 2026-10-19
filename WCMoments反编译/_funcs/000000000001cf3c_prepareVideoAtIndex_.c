// prepareVideoAtIndex: @0x1cf3c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCMVideoController::prepareVideoAtIndex_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long_long lVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long_long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  ulong local_248;
  ulong local_240;
  undefined8 local_1b8;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  double local_110;
  uint local_108;
  byte local_101;
  long local_100;
  byte local_f1;
  undefined8 local_f0;
  byte local_e1;
  long local_e0;
  byte local_d1;
  undefined8 local_d0;
  undefined8 local_c8;
  long_long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,param_2,param_3);
  local_c8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_preparedItems(local_b0,local_1b8);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_(uVar6,local_1b8,local_c8);
  lVar7 = _objc_retainAutoreleasedReturnValue();
  local_d1 = 0;
  local_e1 = 0;
  local_f1 = 0;
  local_101 = 0;
  bVar5 = true;
  if (lVar7 == 0) {
    _objc_msgSend_preparingAssets(local_b0,local_1b8);
    local_d0 = _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    _objc_msgSend_objectForKeyedSubscript_(local_d0,local_1b8,local_c8);
    local_e0 = _objc_retainAutoreleasedReturnValue();
    lVar4 = local_c0;
    local_e1 = 1;
    bVar5 = true;
    if (local_e0 == 0) {
      lVar8 = _objc_msgSend_index(local_b0,local_1b8);
      bVar5 = false;
      if (lVar4 == lVar8) {
        _objc_msgSend_player(local_b0,local_1b8);
        local_f0 = _objc_retainAutoreleasedReturnValue();
        local_f1 = 1;
        _objc_msgSend_currentItem(local_f0,local_1b8);
        local_100 = _objc_retainAutoreleasedReturnValue();
        local_101 = 1;
        bVar5 = local_100 != 0;
      }
    }
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_100);
  }
  if ((local_f1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_f0);
  }
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_e0);
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_d0);
  }
  (*(code *)PTR__objc_release_00110458)(lVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  if (bVar5) {
    local_108 = 1;
  }
  else {
    _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_1b8);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    dVar12 = (double)_objc_msgSend_systemUptime(uVar6,local_1b8);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    local_110 = dVar12;
    _objc_msgSend_probeTimes(local_b0,local_1b8);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_(uVar6,local_1b8,local_c8);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    dVar13 = (double)_objc_msgSend_doubleValue(uVar9,local_1b8);
    (*(code *)PTR__objc_release_00110458)(uVar9);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    if (1.0 <= dVar12 - dVar13) {
      _objc_msgSend_videos(local_b0,local_1b8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_objectAtIndexedSubscript_(uVar6,local_1b8,local_c0);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_objectForKeyedSubscript_(uVar9,local_1b8,&cf_media);
      local_118 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)(uVar9);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      local_120 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
      _memset(auStack_168,0,0x40);
      uVar6 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f950);
      local_240 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar6,local_1b8,auStack_168,auStack_a8,0x10);
      if (local_240 != 0) {
        lVar7 = *local_158;
        local_248 = 0;
        do {
          do {
            if (*local_158 - lVar7 != 0) {
              _objc_enumerationMutation(*local_158 - lVar7,uVar6);
            }
            local_128 = *(undefined8 *)(local_160 + local_248 * 8);
            _Call(local_118,local_128,PTR____NSArray0__struct_00110718);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _Text();
            local_170 = _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_00110458)(uVar9);
            lVar10 = _objc_msgSend_length(local_170,local_1b8);
            bVar3 = false;
            bVar2 = false;
            bVar1 = false;
            bVar5 = false;
            if (lVar10 != 0) {
              uVar11 = _objc_msgSend_containsObject_(local_120,local_1b8,local_170);
              bVar5 = false;
              if ((uVar11 & 1) == 0) {
                _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_1b8);
                local_178 = _objc_retainAutoreleasedReturnValue();
                bVar3 = true;
                _objc_msgSend_attributesOfItemAtPath_error_(local_178,local_1b8,local_170,0);
                local_188 = _objc_retainAutoreleasedReturnValue();
                bVar2 = true;
                _objc_msgSend_objectForKeyedSubscript_
                          (local_188,local_1b8,*(undefined8 *)PTR__NSFileSize_00110178);
                local_198 = _objc_retainAutoreleasedReturnValue();
                bVar1 = true;
                lVar10 = _objc_msgSend_unsignedLongLongValue(local_198,local_1b8);
                bVar5 = lVar10 != 0;
              }
            }
            if (bVar1) {
              (*(code *)PTR__objc_release_00110458)(local_198);
            }
            if (bVar2) {
              (*(code *)PTR__objc_release_00110458)(local_188);
            }
            if (bVar3) {
              (*(code *)PTR__objc_release_00110458)(local_178);
            }
            if (bVar5) {
              _objc_msgSend_addObject_(local_120,local_1b8,local_170);
            }
            _objc_storeStrong(&local_170,0);
            local_248 = local_248 + 1;
          } while (local_248 < local_240);
          local_240 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar6,local_1b8,auStack_168,auStack_a8,0x10);
          local_248 = 0;
        } while (local_240 != 0);
      }
      (*(code *)PTR__objc_release_00110458)(uVar6);
      lVar7 = _objc_msgSend_count(local_120,local_1b8);
      if (lVar7 != 0) {
        _objc_msgSend_numberWithDouble_(local_110,&_OBJC_CLASS___NSNumber,local_1b8);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_probeTimes(local_b0,local_1b8);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setObject_forKeyedSubscript_(uVar9,local_1b8,uVar6,local_c8);
        (*(code *)PTR__objc_release_00110458)(uVar9);
        (*(code *)PTR__objc_release_00110458)(uVar6);
        _objc_msgSend_prepareVideoPaths_index_offset_(local_b0,local_1b8,local_120,local_c0,0);
      }
      local_108 = (uint)(lVar7 == 0);
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_118,0);
    }
    else {
      local_108 = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

