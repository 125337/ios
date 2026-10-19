// _WCMCacheAssets @0x2d8e4

void _WCMCacheAssets(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined **local_1e0;
  ulong local_180;
  ulong local_178;
  undefined8 local_150;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
  _memset(auStack_120,0,0x40);
  _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_150);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_contentsOfDirectoryAtPath_error_(uVar2,local_150,local_d0,0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_178 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_150,auStack_120,auStack_a8,0x10);
  if (local_178 != 0) {
    lVar6 = *local_110;
    local_180 = 0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,uVar3);
        }
        local_e0 = *(undefined8 *)(local_118 + local_180 * 8);
        _objc_msgSend_pathExtension(local_e0,local_150);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_lowercaseString(uVar2,local_150);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar1 = _objc_msgSend_containsObject_(&PTR__OBJC_CLASS___NSConstantArray_0010fb00,local_150)
        ;
        (*(code *)PTR__objc_release_00110458)(uVar4);
        (*(code *)PTR__objc_release_00110458)(uVar2);
        if ((uVar1 & 1) != 0) {
          _objc_msgSend_stringByAppendingPathComponent_(local_d0,local_150,local_e0);
          local_128 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_defaultManager(&_OBJC_CLASS___NSFileManager,local_150);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_attributesOfItemAtPath_error_(uVar2,local_150,local_128,0);
          local_130 = _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_00110458)(uVar2);
          _objc_msgSend_objectForKeyedSubscript_
                    (local_130,local_150,*(undefined8 *)PTR__NSFileType_00110180);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          uVar1 = _objc_msgSend_isEqual_
                            (uVar2,local_150,*(undefined8 *)PTR__NSFileTypeRegular_00110188);
          (*(code *)PTR__objc_release_00110458)(uVar2);
          uVar2 = local_d8;
          if ((uVar1 & 1) != 0) {
            local_c8 = &cf_path;
            local_b8 = local_128;
            local_c0 = &cf_bytes;
            _objc_msgSend_objectForKeyedSubscript_
                      (local_130,local_150,*(undefined8 *)PTR__NSFileSize_00110178);
            ppuVar5 = (undefined **)_objc_retainAutoreleasedReturnValue();
            local_1e0 = ppuVar5;
            if (ppuVar5 == (undefined **)0x0) {
              local_1e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;
            }
            local_b0 = local_1e0;
            _objc_msgSend_dictionaryWithObjects_forKeys_count_
                      (&_OBJC_CLASS___NSDictionary,local_150,&local_b8,&local_c8,2);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_addObject_(uVar2,local_150);
            (*(code *)PTR__objc_release_00110458)(uVar4);
            (*(code *)PTR__objc_release_00110458)(ppuVar5);
          }
          _objc_storeStrong(&local_130);
          _objc_storeStrong(&local_128,0);
        }
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_150,auStack_120,auStack_a8,0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  uVar2 = (*(code *)PTR__objc_retain_00110460)(local_d8);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,uVar2);
  return;
}

