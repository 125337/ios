// galleryImageData: @0x48738

/* Function Stack Size: 0x18 bytes */

ID WCMFeedController::galleryImageData_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ID IVar11;
  long lVar12;
  uint local_31c;
  ulong local_230;
  ulong local_228;
  undefined8 local_1d0;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [15];
  byte local_159;
  undefined8 local_158;
  undefined8 local_150;
  byte local_141;
  undefined8 local_140;
  byte local_131;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  long local_e0;
  uint local_d4;
  long local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar3 = _objc_msgSend_galleryFileSignature_(local_b8,local_1d0,local_c8);
  local_d0 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (local_d0 == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    uVar3 = _objc_msgSend_galleryImmediateSignature(local_b8,local_1d0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar2 = _objc_msgSend_isEqual_(uVar3,local_1d0,local_d0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    if ((uVar2 & 1) == 0) {
      uVar3 = _objc_msgSend_galleryValidatedData(local_b8,local_1d0);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar4 = _objc_msgSend_objectForKey_(uVar3,local_1d0,local_d0);
      local_e0 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if (local_e0 == 0) {
        _memset(auStack_128,0,0x40);
        uVar3 = _objc_msgSend_galleryPaths(local_b8,local_1d0);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_228 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar3,local_1d0,auStack_128,auStack_a8,0x10);
        if (local_228 != 0) {
          lVar12 = *local_118;
          local_230 = 0;
          do {
            do {
              if (*local_118 - lVar12 != 0) {
                _objc_enumerationMutation(*local_118 - lVar12,uVar3);
              }
              local_e8 = *(undefined8 *)(local_120 + local_230 * 8);
              uVar4 = _objc_msgSend_galleryPaths(local_b8,local_1d0);
              uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
              uVar5 = _objc_msgSend_objectForKeyedSubscript_(uVar4,local_1d0,local_e8);
              uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
              uVar2 = _objc_msgSend_isEqual_(uVar5,local_1d0,local_d0);
              local_131 = 0;
              local_141 = 0;
              bVar1 = false;
              if ((uVar2 & 1) != 0) {
                uVar6 = _objc_msgSend_unsignedIntegerValue(local_e8,local_1d0);
                uVar7 = _objc_msgSend_gallery(local_b8,local_1d0);
                local_130 = _objc_retainAutoreleasedReturnValue(uVar7);
                local_131 = 1;
                uVar7 = _objc_msgSend_dataSourceArray(local_130,local_1d0);
                local_140 = _objc_retainAutoreleasedReturnValue(uVar7);
                local_141 = 1;
                uVar8 = _objc_msgSend_count(local_140,local_1d0);
                bVar1 = uVar6 < uVar8;
              }
              if ((local_141 & 1) != 0) {
                (*(code *)PTR__objc_release_00110458)(local_140);
              }
              if ((local_131 & 1) != 0) {
                (*(code *)PTR__objc_release_00110458)(local_130);
              }
              (*(code *)PTR__objc_release_00110458)(uVar5);
              (*(code *)PTR__objc_release_00110458)(uVar4);
              if (bVar1) {
                uVar4 = _objc_msgSend_gallery(local_b8,local_1d0);
                uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
                uVar5 = _objc_msgSend_dataSourceArray(uVar4,local_1d0);
                uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
                uVar7 = _objc_msgSend_unsignedIntegerValue(local_e8,local_1d0);
                uVar7 = _objc_msgSend_objectAtIndexedSubscript_(uVar5,local_1d0,uVar7);
                local_150 = _objc_retainAutoreleasedReturnValue(uVar7);
                (*(code *)PTR__objc_release_00110458)(uVar5);
                (*(code *)PTR__objc_release_00110458)(uVar4);
                uVar4 = _objc_msgSend_imageData(local_150,local_1d0);
                lVar9 = _objc_retainAutoreleasedReturnValue(uVar4);
                (*(code *)PTR__objc_release_00110458)();
                if (lVar9 != 0) {
                  uVar4 = _objc_msgSend_imageData(local_150,local_1d0);
                  lVar10 = _objc_retainAutoreleasedReturnValue(uVar4);
                  uVar4 = (**(code **)(lVar10 + 0x10))();
                  local_b0 = _objc_retainAutoreleasedReturnValue(uVar4);
                  (*(code *)PTR__objc_release_00110458)(lVar10);
                }
                local_d4 = (uint)(lVar9 != 0);
                _objc_storeStrong(&local_150,0);
                if (local_d4 != 0) goto LAB_00048d74;
              }
              local_230 = local_230 + 1;
            } while (local_230 < local_228);
            local_228 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar3,local_1d0,auStack_128,auStack_a8,0x10);
            local_230 = 0;
          } while (local_228 != 0);
        }
        local_d4 = 0;
LAB_00048d74:
        (*(code *)PTR__objc_release_00110458)(uVar3);
        if (local_d4 == 0) {
          uVar3 = _objc_msgSend_galleryPendingChecks(local_b8,local_1d0);
          uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
          uVar2 = _objc_msgSend_containsObject_(uVar3,local_1d0,local_d0);
          local_159 = 0;
          local_31c = 1;
          if ((uVar2 & 1) == 0) {
            uVar4 = _objc_msgSend_galleryInvalidFiles(local_b8,local_1d0);
            local_158 = _objc_retainAutoreleasedReturnValue(uVar4);
            local_159 = 1;
            local_31c = _objc_msgSend_containsObject_(local_158,local_1d0,local_d0);
          }
          if ((local_159 & 1) != 0) {
            (*(code *)PTR__objc_release_00110458)(local_158);
          }
          (*(code *)PTR__objc_release_00110458)(uVar3);
          if ((local_31c & 1) == 0) {
            uVar3 = _objc_msgSend_galleryPendingChecks(local_b8,local_1d0);
            uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
            _objc_msgSend_addObject_(uVar3,local_1d0,local_d0);
            (*(code *)PTR__objc_release_00110458)(uVar3);
            _objc_initWeak(auStack_168,local_b8);
            uVar3 = _objc_msgSend_gallery(local_b8,local_1d0);
            uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
            _objc_initWeak(auStack_170);
            (*(code *)PTR__objc_release_00110458)(uVar3);
            uVar3 = _objc_msgSend_galleryDecodeQueue(local_b8,local_1d0);
            uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
            local_1c0 = PTR___NSConcreteStackBlock_001104f0;
            local_1b8 = 0xc2000000;
            local_1b4 = 0;
            local_1b0 = ___38__WCMFeedController_galleryImageData___block_invoke;
            local_1a8 = &___block_descriptor_64_e8_32s40s48w56w_e5_v8__0l;
            local_1a0 = (*(code *)PTR__objc_retain_00110460)(local_c8);
            _objc_copyWeak(auStack_190,auStack_168);
            _objc_copyWeak(auStack_188,auStack_170);
            local_198 = (*(code *)PTR__objc_retain_00110460)(local_d0);
            _objc_msgSend_addOperationWithBlock_(uVar3,local_1d0,&local_1c0);
            (*(code *)PTR__objc_release_00110458)(uVar3);
            local_b0 = 0;
            local_d4 = 1;
            _objc_storeStrong(&local_198,0);
            _objc_destroyWeak(auStack_188);
            _objc_destroyWeak(auStack_190);
            _objc_storeStrong(&local_1a0,0);
            _objc_destroyWeak(auStack_170);
            _objc_destroyWeak(auStack_168);
          }
          else {
            local_b0 = 0;
            local_d4 = 1;
          }
        }
      }
      else {
        local_b0 = (*(code *)PTR__objc_retain_00110460)(local_e0);
        local_d4 = 1;
      }
      _objc_storeStrong(&local_e0,0);
    }
    else {
      uVar3 = _objc_msgSend_galleryImmediateData(local_b8,local_1d0);
      local_b0 = _objc_retainAutoreleasedReturnValue(uVar3);
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 == local_28) {
    IVar11 = _objc_autoreleaseReturnValue(0,local_b0);
    return IVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

