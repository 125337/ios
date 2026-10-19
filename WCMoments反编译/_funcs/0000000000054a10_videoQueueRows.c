// videoQueueRows @0x54a10

/* Function Stack Size: 0x10 bytes */

ID WCMFeedController::videoQueueRows(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  ID IVar11;
  long lVar12;
  cfstringStruct *local_2a8;
  cfstringStruct *local_298;
  cfstringStruct *local_288;
  long local_240;
  uint local_20c;
  ulong local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 local_1c0;
  long local_1b8;
  byte local_1a9;
  long local_1a8;
  byte local_199;
  undefined8 local_198;
  byte local_189;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  byte local_171;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  undefined8 local_118;
  SEL local_110;
  ID local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_110 = param_2;
  local_108 = param_1;
  local_118 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  _memset(auStack_160,0,0x40);
  _objc_msgSend_rowOrder(local_108,local_1e0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_1e8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar2,local_1e0,auStack_160,auStack_a8,0x10);
  if (local_1e8 != 0) {
    lVar12 = *local_150;
    local_1f0 = 0;
    do {
      do {
        if (*local_150 - lVar12 != 0) {
          _objc_enumerationMutation(*local_150 - lVar12,uVar2);
        }
        local_120 = *(undefined8 *)(local_158 + local_1f0 * 8);
        _objc_msgSend_cachedRows(local_108,local_1e0);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_objectForKeyedSubscript_(uVar3,local_1e0,local_120);
        local_168 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar3);
        _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0,&cf_video);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar4 = _objc_msgSend_boolValue(uVar3,local_1e0);
        local_171 = 0;
        local_20c = 1;
        if ((uVar4 & 1) != 0) {
          _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0,&cf_hidden);
          local_170 = _objc_retainAutoreleasedReturnValue();
          local_171 = 1;
          local_20c = _objc_msgSend_boolValue(local_170,local_1e0);
        }
        if ((local_171 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_170);
        }
        (*(code *)PTR__objc_release_00110458)(uVar3);
        if ((local_20c & 1) == 0) {
          _objc_msgSend_items(local_108,local_1e0);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_(uVar3,local_1e0,local_120);
          lVar5 = _objc_retainAutoreleasedReturnValue();
          local_189 = 0;
          local_199 = 0;
          local_1a9 = 0;
          local_240 = lVar5;
          if (lVar5 == 0) {
            _objc_msgSend_facade(local_108,local_1e0);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            local_189 = 1;
            local_b0 = local_120;
            local_188 = uVar6;
            _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_1e0,&local_b0,1);
            local_198 = _objc_retainAutoreleasedReturnValue();
            local_199 = 1;
            _Call(uVar6,&cf_getDataItemByID_);
            local_1a8 = _objc_retainAutoreleasedReturnValue();
            local_240 = local_1a8;
          }
          local_1a9 = lVar5 == 0;
          local_180 = (*(code *)PTR__objc_retain_00110460)(local_240);
          if ((local_1a9 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_1a8);
          }
          if ((local_199 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_198);
          }
          if ((local_189 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_188);
          }
          (*(code *)PTR__objc_release_00110458)(lVar5);
          (*(code *)PTR__objc_release_00110458)(uVar3);
          _objc_msgSend_nativeMediaByID(local_108,local_1e0);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_(uVar3,local_1e0,local_120);
          local_1b8 = _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_00110458)(uVar3);
          puVar1 = PTR____NSArray0__struct_00110718;
          if (local_1b8 == 0) {
            _Call(local_180,&cf_contentObj);
            uVar3 = _objc_retainAutoreleasedReturnValue();
            _Call(uVar3,&cf_mediaList,puVar1);
            local_1c0 = _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_00110458)(uVar3);
            uVar3 = local_1c0;
            uVar6 = _objc_opt_class(&_OBJC_CLASS___NSArray);
            uVar4 = _objc_opt_isKindOfClass(uVar3,uVar6);
            if ((uVar4 & 1) != 0) {
              _objc_msgSend_firstObject(local_1c0,local_1e0);
              lVar7 = _objc_retainAutoreleasedReturnValue();
              lVar5 = local_1b8;
              local_1b8 = lVar7;
              (*(code *)PTR__objc_release_00110458)(lVar5);
            }
            _objc_storeStrong(&local_1c0,0);
          }
          if (local_1b8 == 0) {
            local_178 = 3;
          }
          else {
            _VideoNumber(local_1b8,1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            uVar3 = local_118;
            local_100 = &cf_id;
            local_d8 = local_120;
            local_f8 = &cf_name;
            _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0);
            pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
            local_288 = pcVar8;
            if (pcVar8 == (cfstringStruct *)0x0) {
              local_288 = &cf___;
            }
            local_d0 = local_288;
            local_f0 = &cf_text;
            _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0);
            pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
            local_298 = pcVar9;
            if (pcVar9 == (cfstringStruct *)0x0) {
              local_298 = &cf___;
            }
            local_c8 = local_298;
            local_e8 = &cf_username;
            _objc_msgSend_objectForKeyedSubscript_(local_168,local_1e0);
            pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
            local_2a8 = pcVar10;
            if (pcVar10 == (cfstringStruct *)0x0) {
              local_2a8 = &cf___;
            }
            local_c0 = local_2a8;
            local_e0 = &cf_media;
            local_b8 = local_1b8;
            _objc_msgSend_dictionaryWithObjects_forKeys_count_
                      (&_OBJC_CLASS___NSDictionary,local_1e0,&local_d8,&local_100,5);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_addObject_(uVar3,local_1e0);
            (*(code *)PTR__objc_release_00110458)(uVar6);
            (*(code *)PTR__objc_release_00110458)(pcVar10);
            (*(code *)PTR__objc_release_00110458)(pcVar9);
            (*(code *)PTR__objc_release_00110458)(pcVar8);
            local_178 = 0;
          }
          _objc_storeStrong(&local_1b8);
          _objc_storeStrong(&local_180,0);
        }
        else {
          local_178 = 3;
        }
        _objc_storeStrong(&local_168,0);
        local_1f0 = local_1f0 + 1;
      } while (local_1f0 < local_1e8);
      local_1e8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar2,local_1e0,auStack_160,auStack_a8,0x10);
      local_1f0 = 0;
    } while (local_1e8 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_118);
  local_178 = 1;
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar11 = _objc_autoreleaseReturnValue(0,uVar2);
  return IVar11;
}

