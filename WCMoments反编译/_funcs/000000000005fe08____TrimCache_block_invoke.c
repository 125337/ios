// ___TrimCache_block_invoke @0x5fe08

void ___TrimCache_block_invoke(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong local_390;
  ulong local_388;
  long local_368;
  long local_330;
  undefined **local_320;
  ulong local_2c8;
  ulong local_2c0;
  undefined8 local_290;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined8 local_230;
  undefined4 local_224;
  ulong local_220;
  long local_218;
  byte local_209;
  long local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  long local_1f0;
  undefined **local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  ulong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  long local_170;
  undefined1 auStack_168 [128];
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined **local_c8;
  long local_c0;
  undefined1 auStack_b8 [128];
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_178 = param_1;
  local_170 = param_1;
  uVar3 = _objc_autoreleasePoolPush();
  _objc_msgSend_fileURLWithPath_(&_OBJC_CLASS___NSURL,local_290,*(undefined8 *)(param_1 + 0x20));
  local_180 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_290);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar6 = local_180;
  local_38 = *(undefined8 *)PTR__NSURLFileSizeKey_00110700;
  local_30 = *(undefined8 *)PTR__NSURLContentModificationDateKey_001106f8;
  _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_290,&local_38,2);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
            (uVar4,local_290,uVar6,uVar5,4,0);
  local_188 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  local_190 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  local_198 = 0;
  _memset(auStack_1e0,0,0x40);
  uVar6 = (*(code *)PTR__objc_retain_00110460)(local_188);
  local_2c0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar6,local_290,auStack_1e0,auStack_b8,0x10);
  if (local_2c0 != 0) {
    lVar8 = *local_1d0;
    local_2c8 = 0;
    do {
      do {
        if (*local_1d0 - lVar8 != 0) {
          _objc_enumerationMutation(*local_1d0 - lVar8,uVar6);
        }
        local_1a0 = *(undefined8 *)(local_1d8 + local_2c8 * 8);
        _objc_msgSend_pathExtension(local_1a0,local_290);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar2 = _objc_msgSend_containsObject_(&PTR__OBJC_CLASS___NSConstantArray_0010fb18,local_290)
        ;
        (*(code *)PTR__objc_release_00110458)(uVar4);
        if ((uVar2 & 1) != 0) {
          local_1e8 = (undefined **)0x0;
          local_1f0 = 0;
          local_1f8 = 0;
          _objc_msgSend_getResourceValue_forKey_error_
                    (local_1a0,local_290,&local_1f8,*(undefined8 *)PTR__NSURLFileSizeKey_00110700);
          _objc_storeStrong(&local_1e8,local_1f8);
          local_200 = 0;
          _objc_msgSend_getResourceValue_forKey_error_
                    (local_1a0,local_290,&local_200,
                     *(undefined8 *)PTR__NSURLContentModificationDateKey_001106f8,0);
          _objc_storeStrong(&local_1f0,local_200);
          lVar7 = _objc_msgSend_unsignedLongLongValue(local_1e8,local_290);
          uVar4 = local_190;
          local_198 = local_198 + lVar7;
          local_e8 = &cf_url;
          local_d0 = local_1a0;
          local_e0 = &cf_bytes;
          if (local_1e8 == (undefined **)0x0) {
            local_320 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;
          }
          else {
            local_320 = local_1e8;
          }
          local_c8 = local_320;
          local_d8 = &cf_date;
          local_209 = 0;
          bVar1 = local_1f0 == 0;
          if (bVar1) {
            _objc_msgSend_distantPast(&_OBJC_CLASS___NSDate,local_290);
            local_330 = _objc_retainAutoreleasedReturnValue();
            local_208 = local_330;
          }
          else {
            local_330 = local_1f0;
          }
          local_c0 = local_330;
          local_209 = bVar1;
          _objc_msgSend_dictionaryWithObjects_forKeys_count_
                    (&_OBJC_CLASS___NSDictionary,local_290,&local_d0,&local_e8,3);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_addObject_(uVar4,local_290);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          if ((local_209 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_208);
          }
          _objc_storeStrong(&local_1f0);
          _objc_storeStrong(&local_1e8,0);
        }
        local_2c8 = local_2c8 + 1;
      } while (local_2c8 < local_2c0);
      local_2c0 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar6,local_290,auStack_1e0,auStack_b8,0x10);
      local_2c8 = 0;
    } while (local_2c0 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_290);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_lastPathComponent(*(undefined8 *)(param_1 + 0x20),local_290);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringByAppendingString_(&cf_WCMomentsCacheLimit_,local_290);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  lVar8 = _objc_msgSend_integerForKey_(uVar6,local_290);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  local_368 = lVar8;
  if (lVar8 < 0x40) {
    local_368 = 0x200;
  }
  local_220 = local_368 * 0x100000;
  local_218 = lVar8;
  if (local_198 < local_220) {
    local_224 = 1;
  }
  else {
    _objc_msgSend_sortUsingComparator_
              (local_198 + local_368 * -0x100000,local_190,local_290,&___block_literal_global_2988);
    _memset(auStack_270,0,0x40);
    uVar6 = (*(code *)PTR__objc_retain_00110460)(local_190);
    local_388 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar6,local_290,auStack_270,auStack_168,0x10);
    if (local_388 != 0) {
      lVar8 = *local_260;
      local_390 = 0;
      do {
        do {
          if (*local_260 - lVar8 != 0) {
            _objc_enumerationMutation(*local_260 - lVar8,uVar6);
          }
          local_230 = *(undefined8 *)(local_268 + local_390 * 8);
          if (local_198 < (local_220 * 3) / 4) {
            local_224 = 4;
            goto LAB_00060584;
          }
          _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_290);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_(local_230,local_290,&cf_url);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_removeItemAtURL_error_(uVar4,local_290,uVar5,0);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          _objc_msgSend_objectForKeyedSubscript_(local_230,local_290,&cf_bytes);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          lVar7 = _objc_msgSend_unsignedLongLongValue(uVar4,local_290);
          local_198 = local_198 - lVar7;
          (*(code *)PTR__objc_release_00110458)(uVar4);
          local_390 = local_390 + 1;
        } while (local_390 < local_388);
        local_388 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar6,local_290,auStack_270,auStack_168,0x10);
        local_390 = 0;
      } while (local_388 != 0);
    }
    local_224 = 0;
LAB_00060584:
    (*(code *)PTR__objc_release_00110458)(uVar6);
    local_224 = 0;
  }
  _objc_storeStrong(&local_190);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_180,0);
  _objc_autoreleasePoolPop(uVar3);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

