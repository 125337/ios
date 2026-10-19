// ___53-[WCMVideoController_prepareVideoPaths:index:offset:]_block_invoke_2 @0x1e334

/* WARNING: Removing unreachable block (ram,0x0001e7e4) */
/* WARNING: Removing unreachable block (ram,0x0001e80c) */
/* WARNING: Removing unreachable block (ram,0x0001e7f4) */
/* WARNING: Removing unreachable block (ram,0x0001e81c) */
/* WARNING: Removing unreachable block (ram,0x0001e838) */
/* WARNING: Removing unreachable block (ram,0x0001e83c) */
/* WARNING: Removing unreachable block (ram,0x0001e844) */
/* WARNING: Removing unreachable block (ram,0x0001e85c) */
/* WARNING: Removing unreachable block (ram,0x0001e860) */
/* WARNING: Removing unreachable block (ram,0x0001e86c) */
/* WARNING: Removing unreachable block (ram,0x0001e87c) */
/* WARNING: Removing unreachable block (ram,0x0001e694) */
/* WARNING: Removing unreachable block (ram,0x0001e6c0) */
/* WARNING: Removing unreachable block (ram,0x0001e6a8) */
/* WARNING: Removing unreachable block (ram,0x0001e6d4) */
/* WARNING: Removing unreachable block (ram,0x0001e6f4) */
/* WARNING: Removing unreachable block (ram,0x0001e6f8) */
/* WARNING: Removing unreachable block (ram,0x0001e700) */
/* WARNING: Removing unreachable block (ram,0x0001e718) */
/* WARNING: Removing unreachable block (ram,0x0001e71c) */
/* WARNING: Removing unreachable block (ram,0x0001e728) */
/* WARNING: Removing unreachable block (ram,0x0001e738) */

void ___53__WCMVideoController_prepareVideoPaths_index_offset___block_invoke_2(long param_1)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  double dVar20;
  undefined8 local_1e0;
  long local_1b8;
  undefined8 local_1a8;
  long local_198;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  byte local_119;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f1;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 local_e1;
  long local_e0;
  byte local_d1;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  double local_a8;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = param_1;
  local_b8 = param_1;
  local_c8 = _objc_loadWeakRetained(param_1 + 0x38);
  local_d1 = 0;
  local_e1 = 0;
  bVar5 = true;
  uVar1 = local_c8 != 0;
  if ((bool)uVar1) {
    _objc_msgSend_preparingAssets(local_c8,local_1e0);
    local_d0 = _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    _objc_msgSend_objectForKeyedSubscript_(local_d0,local_1e0,*(undefined8 *)(param_1 + 0x20));
    local_e0 = _objc_retainAutoreleasedReturnValue();
    bVar5 = local_e0 != *(long *)(param_1 + 0x28);
    local_e1 = uVar1;
    (*(code *)PTR__objc_release_00110458)(local_e0);
    uVar1 = local_e1;
  }
  local_e1 = uVar1;
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_d0);
  }
  if (bVar5) {
    local_e8 = 1;
    goto LAB_0001f0c4;
  }
  _objc_msgSend_preparingAssets(local_c8,local_1e0);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObjectForKey_(uVar7,local_1e0,*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__objc_release_00110458)(uVar7);
  local_f0 = 0;
  local_100 = 0;
  lVar8 = _objc_msgSend_statusOfValueForKey_error_
                    (*(undefined8 *)(param_1 + 0x28),local_1e0,&cf_playable,&local_100);
  _objc_storeStrong(&local_f0,local_100);
  local_119 = 0;
  local_f1 = false;
  if (lVar8 == 2) {
    local_108 = local_f0;
    lVar8 = _objc_msgSend_statusOfValueForKey_error_
                      (*(undefined8 *)(param_1 + 0x28),local_1e0,&cf_tracks,&local_108);
    _objc_storeStrong(&local_f0,local_108);
    local_f1 = false;
    if (lVar8 == 2) {
      local_110 = local_f0;
      lVar8 = _objc_msgSend_statusOfValueForKey_error_
                        (*(undefined8 *)(param_1 + 0x28),local_1e0,&cf_duration,&local_110);
      _objc_storeStrong(&local_f0,local_110);
      local_f1 = false;
      if (lVar8 == 2) {
        uVar9 = _objc_msgSend_isPlayable(*(undefined8 *)(param_1 + 0x28),local_1e0);
        local_f1 = false;
        if ((uVar9 & 1) != 0) {
          _objc_msgSend_tracksWithMediaType_
                    (*(undefined8 *)(param_1 + 0x28),local_1e0,
                     *(undefined8 *)PTR__AVMediaTypeVideo_001101c8);
          local_118 = _objc_retainAutoreleasedReturnValue();
          local_119 = 1;
          lVar8 = _objc_msgSend_count(local_118,local_1e0);
          local_f1 = false;
          if (lVar8 != 0) {
            if (*(long *)(param_1 + 0x28) == 0) {
              local_150 = 0;
              local_148 = 0;
              local_140 = 0;
            }
            else {
              _objc_msgSend_duration(&local_150,*(long *)(param_1 + 0x28),local_1e0);
            }
            local_a8 = (double)_CMTimeGetSeconds(&local_150);
            local_f1 = false;
            if (ABS(local_a8) != INFINITY) {
              if (*(long *)(param_1 + 0x28) == 0) {
                local_180 = 0;
                local_178 = 0;
                local_170 = 0;
              }
              else {
                _objc_msgSend_duration(&local_180,*(long *)(param_1 + 0x28),local_1e0);
              }
              dVar20 = (double)_CMTimeGetSeconds(&local_180);
              local_f1 = 0.0 < dVar20;
            }
          }
        }
      }
    }
  }
  if ((local_119 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_118);
  }
  if ((bool)local_f1) {
    lVar19 = *(long *)(param_1 + 0x40);
    lVar8 = _objc_msgSend_index(local_c8,local_1e0);
    lVar19 = lVar19 - lVar8;
    lVar8 = -lVar19;
    if (0 < lVar19) {
      lVar8 = lVar19;
    }
    if (2 < lVar8) goto LAB_0001ecf8;
    _objc_msgSend_playerItemWithAsset_
              (&_OBJC_CLASS___AVPlayerItem,local_1e0,*(undefined8 *)(param_1 + 0x28));
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_preparedItems(local_c8,local_1e0);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setObject_forKeyedSubscript_
              (uVar10,local_1e0,uVar7,*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_release_00110458)(uVar10);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    _objc_msgSend_videos(local_c8,local_1e0);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectAtIndexedSubscript_(uVar7,local_1e0,*(undefined8 *)(param_1 + 0x40));
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_objectForKeyedSubscript_(uVar10,local_1e0,&cf_media);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    local_38 = &cf_offset;
    lVar19 = *(long *)(param_1 + 0x40);
    lVar8 = _objc_msgSend_index(local_c8,local_1e0);
    _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_1e0,lVar19 - lVar8);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    local_30 = uVar12;
    _objc_msgSend_dictionaryWithObjects_forKeys_count_
              (&_OBJC_CLASS___NSDictionary,local_1e0,&local_30,&local_38,1);
    uVar13 = _objc_retainAutoreleasedReturnValue();
    _TraceVideo(&cf_video_prefetch_ready,uVar11);
    (*(code *)PTR__objc_release_00110458)(uVar13);
    (*(code *)PTR__objc_release_00110458)(uVar12);
    (*(code *)PTR__objc_release_00110458)(uVar11);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    lVar19 = *(long *)(param_1 + 0x40);
    lVar8 = _objc_msgSend_index(local_c8,local_1e0);
    bVar4 = false;
    bVar5 = false;
    bVar3 = false;
    bVar2 = false;
    bVar6 = false;
    if (lVar19 == lVar8) {
      _objc_msgSend_player(local_c8,local_1e0);
      local_188 = _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      _objc_msgSend_currentItem(local_188,local_1e0);
      local_198 = _objc_retainAutoreleasedReturnValue();
      bVar5 = true;
      bVar6 = false;
      if (local_198 == 0) {
        _objc_msgSend_view(local_c8,local_1e0);
        local_1a8 = _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        _objc_msgSend_window(local_1a8,local_1e0);
        local_1b8 = _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar6 = local_1b8 != 0;
      }
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_00110458)(local_1b8);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_00110458)(local_1a8);
    }
    if (bVar5) {
      (*(code *)PTR__objc_release_00110458)(local_198);
    }
    if (bVar4) {
      (*(code *)PTR__objc_release_00110458)(local_188);
    }
    if (bVar6) {
      _objc_msgSend_tickVideo(local_c8,local_1e0);
    }
  }
  else {
LAB_0001ecf8:
    _objc_msgSend_view(local_c8,local_1e0);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_window(uVar7,local_1e0);
    lVar8 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    (*(code *)PTR__objc_release_00110458)(uVar7);
    if (lVar8 != 0) {
      _objc_msgSend_videos(local_c8,local_1e0);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_objectAtIndexedSubscript_(uVar7,local_1e0,*(undefined8 *)(param_1 + 0x40));
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_objectForKeyedSubscript_(uVar10,local_1e0,&cf_media);
      uVar11 = _objc_retainAutoreleasedReturnValue();
      local_98 = &cf_playableStatus;
      uVar12 = _objc_msgSend_statusOfValueForKey_error_
                         (*(undefined8 *)(param_1 + 0x28),local_1e0,&cf_playable);
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_1e0,uVar12);
      uVar12 = _objc_retainAutoreleasedReturnValue();
      local_90 = &cf_tracksStatus;
      local_68 = uVar12;
      uVar13 = _objc_msgSend_statusOfValueForKey_error_
                         (*(undefined8 *)(param_1 + 0x28),local_1e0,&cf_tracks,0);
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_1e0,uVar13);
      uVar13 = _objc_retainAutoreleasedReturnValue();
      local_88 = &cf_durationStatus;
      local_60 = uVar13;
      uVar14 = _objc_msgSend_statusOfValueForKey_error_
                         (*(undefined8 *)(param_1 + 0x28),local_1e0,&cf_duration,0);
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_1e0,uVar14);
      uVar14 = _objc_retainAutoreleasedReturnValue();
      local_80 = &cf_offset;
      lVar19 = *(long *)(param_1 + 0x40);
      local_58 = uVar14;
      lVar8 = _objc_msgSend_index(local_c8,local_1e0);
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_1e0,lVar19 - lVar8);
      uVar15 = _objc_retainAutoreleasedReturnValue();
      local_78 = &cf_candidate;
      local_50 = uVar15;
      _objc_msgSend_numberWithUnsignedInteger_
                (&_OBJC_CLASS___NSNumber,local_1e0,*(undefined8 *)(param_1 + 0x48));
      uVar16 = _objc_retainAutoreleasedReturnValue();
      local_70 = &cf_error;
      local_48 = uVar16;
      uVar17 = _objc_msgSend_code(local_f0,local_1e0);
      _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_1e0,uVar17);
      uVar17 = _objc_retainAutoreleasedReturnValue();
      local_40 = uVar17;
      _objc_msgSend_dictionaryWithObjects_forKeys_count_
                (&_OBJC_CLASS___NSDictionary,local_1e0,&local_68,&local_98,6);
      uVar18 = _objc_retainAutoreleasedReturnValue();
      _TraceVideo(&cf_video_asset_rejected,uVar11);
      (*(code *)PTR__objc_release_00110458)(uVar18);
      (*(code *)PTR__objc_release_00110458)(uVar17);
      (*(code *)PTR__objc_release_00110458)(uVar16);
      (*(code *)PTR__objc_release_00110458)(uVar15);
      (*(code *)PTR__objc_release_00110458)(uVar14);
      (*(code *)PTR__objc_release_00110458)(uVar13);
      (*(code *)PTR__objc_release_00110458)(uVar12);
      (*(code *)PTR__objc_release_00110458)(uVar11);
      (*(code *)PTR__objc_release_00110458)(uVar10);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      _objc_msgSend_prepareVideoPaths_index_offset_
                (local_c8,local_1e0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40),
                 *(long *)(param_1 + 0x48) + 1);
    }
  }
  _objc_storeStrong(&local_f0,0);
  local_e8 = 0;
LAB_0001f0c4:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

