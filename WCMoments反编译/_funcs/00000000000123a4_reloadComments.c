// reloadComments @0x123a4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCMVideoComments::reloadComments(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  double dVar17;
  double dVar18;
  uint local_40c;
  ulong local_3e0;
  ulong local_3d8;
  uint local_334;
  ulong local_318;
  ulong local_310;
  undefined8 local_2c0;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 local_260;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined8 local_1c8;
  byte local_1b9;
  undefined8 local_1b8;
  byte local_1a9;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  long local_148;
  SEL local_140;
  ID local_138;
  undefined1 auStack_130 [128];
  undefined1 auStack_b0 [128];
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_140 = param_2;
  local_138 = param_1;
  _objc_msgSend_account(param_1);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  _Context();
  uVar11 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar11,&cf_userName,PTR____NSArray0__struct_00110718);
  uVar12 = _objc_retainAutoreleasedReturnValue();
  _Text();
  uVar13 = _objc_retainAutoreleasedReturnValue();
  uVar9 = _objc_msgSend_isEqual_(uVar10,local_2c0);
  (*(code *)PTR__objc_release_00110458)(uVar13);
  (*(code *)PTR__objc_release_00110458)(uVar12);
  (*(code *)PTR__objc_release_00110458)(uVar11);
  (*(code *)PTR__objc_release_00110458)(uVar10);
  if ((uVar9 & 1) == 0) {
    _objc_msgSend_closeComments(local_138,local_2c0);
  }
  else {
    _objc_msgSend_facade(local_138,local_2c0);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_itemID(local_138,local_2c0);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    local_30 = uVar11;
    _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_2c0,&local_30,1);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar10,&cf_getDataItemByID_);
    local_148 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar12);
    (*(code *)PTR__objc_release_00110458)(uVar11);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    if (local_148 != 0) {
      _objc_msgSend_setItem_(local_138,local_2c0,local_148);
    }
    _objc_msgSend_item(local_138,local_2c0);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar10,&cf_commentUsers,PTR____NSArray0__struct_00110718);
    local_150 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar10);
    local_158 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
    uVar10 = local_150;
    uVar11 = _objc_opt_class(&_OBJC_CLASS___NSArray);
    uVar14 = _objc_opt_isKindOfClass(uVar10,uVar11);
    if ((uVar14 & 1) != 0) {
      _memset(auStack_1a0,0,0x40);
      uVar10 = (*(code *)PTR__objc_retain_00110460)(local_150);
      local_310 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar10,local_2c0,auStack_1a0,auStack_b0,0x10);
      if (local_310 != 0) {
        lVar16 = *local_190;
        local_318 = 0;
        do {
          do {
            if (*local_190 - lVar16 != 0) {
              _objc_enumerationMutation(*local_190 - lVar16,uVar10);
            }
            local_160 = *(undefined8 *)(local_198 + local_318 * 8);
            _Call(local_160,&cf_bDeleted,PTR____NSArray0__struct_00110718);
            uVar11 = _objc_retainAutoreleasedReturnValue();
            uVar14 = _objc_msgSend_boolValue(uVar11,local_2c0);
            local_1a9 = 0;
            local_334 = 0;
            if ((uVar14 & 1) == 0) {
              _Call(local_160,&cf_deletedByFeedOwner,PTR____NSArray0__struct_00110718);
              local_1a8 = _objc_retainAutoreleasedReturnValue();
              local_1a9 = 1;
              local_334 = _objc_msgSend_boolValue(local_1a8,local_2c0);
              local_334 = local_334 ^ 1;
            }
            if ((local_1a9 & 1) != 0) {
              (*(code *)PTR__objc_release_00110458)(local_1a8);
            }
            (*(code *)PTR__objc_release_00110458)(uVar11);
            if ((local_334 & 1) != 0) {
              _objc_msgSend_addObject_(local_158,local_2c0,local_160);
            }
            local_318 = local_318 + 1;
          } while (local_318 < local_310);
          local_310 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar10,local_2c0,auStack_1a0,auStack_b0,0x10);
          local_318 = 0;
        } while (local_310 != 0);
      }
      (*(code *)PTR__objc_release_00110458)(uVar10);
    }
    local_1b8 = (*(code *)PTR__objc_retain_00110460)(local_158);
    _objc_msgSend_comments(local_138,local_2c0);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    bVar8 = _objc_msgSend_isEqualToArray_(uVar10,local_2c0,local_1b8);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    local_1b9 = (bVar8 ^ 1) & 1;
    uVar10 = _objc_msgSend_copy(local_1b8,local_2c0);
    _objc_msgSend_setComments_(local_138,local_2c0);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    _objc_msgSend_count(local_1b8,local_2c0);
    _objc_msgSend_stringWithFormat_(&_OBJC_CLASS___NSString,local_2c0,&cf__);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_heading(local_138,local_2c0);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setText_(uVar11,local_2c0,uVar10);
    (*(code *)PTR__objc_release_00110458)(uVar11);
    (*(code *)PTR__objc_release_00110458)(uVar10);
    if ((local_1b9 & 1) != 0) {
      _objc_msgSend_table(local_138,local_2c0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_reloadData(uVar10,local_2c0);
      (*(code *)PTR__objc_release_00110458)(uVar10);
    }
    lVar16 = _objc_msgSend_count(local_1b8,local_2c0);
    if (lVar16 == 0) {
      local_1c8 = _objc_opt_new(&_OBJC_CLASS___UILabel);
      _objc_msgSend_setText_(local_1c8,local_2c0,&cf_lgS>f_yv);
      _objc_msgSend_secondaryLabelColor(&_OBJC_CLASS___UIColor,local_2c0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setTextColor_(local_1c8,local_2c0);
      (*(code *)PTR__objc_release_00110458)(uVar10);
      _objc_msgSend_setTextAlignment_(local_1c8,local_2c0,1);
      _objc_msgSend_systemFontOfSize_(0x402c000000000000,&_OBJC_CLASS___UIFont,local_2c0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setFont_(local_1c8,local_2c0);
      (*(code *)PTR__objc_release_00110458)(uVar10);
      uVar10 = local_1c8;
      _objc_msgSend_table(local_138,local_2c0);
      uVar11 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setBackgroundView_(uVar11,local_2c0,uVar10);
      (*(code *)PTR__objc_release_00110458)(uVar11);
      _objc_storeStrong(&local_1c8,0);
    }
    else {
      _objc_msgSend_table(local_138,local_2c0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setBackgroundView_(uVar10,local_2c0,0);
      (*(code *)PTR__objc_release_00110458)(uVar10);
    }
    _objc_msgSend_pendingComment(local_138,local_2c0);
    lVar16 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)();
    if (lVar16 != 0) {
      _memset(auStack_210,0,0x40);
      uVar10 = (*(code *)PTR__objc_retain_00110460)(local_1b8);
      local_3d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar10,local_2c0,auStack_210,auStack_130,0x10);
      if (local_3d8 != 0) {
        lVar16 = *local_200;
        local_3e0 = 0;
        do {
          do {
            if (*local_200 - lVar16 != 0) {
              _objc_enumerationMutation(*local_200 - lVar16,uVar10);
            }
            local_1d0 = *(undefined8 *)(local_208 + local_3e0 * 8);
            _Call(local_1d0,&cf_commentID,PTR____NSArray0__struct_00110718);
            uVar11 = _objc_retainAutoreleasedReturnValue();
            _Text();
            local_218 = _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_00110458)(uVar11);
            lVar15 = _objc_msgSend_length(local_218,local_2c0);
            if (lVar15 == 0) {
              _Call(local_1d0,&cf_comment64ID,PTR____NSArray0__struct_00110718);
              uVar12 = _objc_retainAutoreleasedReturnValue();
              _Text();
              uVar13 = _objc_retainAutoreleasedReturnValue();
              uVar11 = local_218;
              local_218 = uVar13;
              (*(code *)PTR__objc_release_00110458)(uVar11);
              (*(code *)PTR__objc_release_00110458)(uVar12);
            }
            lVar15 = _objc_msgSend_length(local_218,local_2c0);
            bVar7 = false;
            bVar6 = false;
            bVar1 = false;
            bVar5 = false;
            bVar4 = false;
            bVar3 = false;
            bVar2 = false;
            local_40c = 0;
            if (lVar15 != 0) {
              _objc_msgSend_pendingIDs(local_138,local_2c0);
              local_220 = _objc_retainAutoreleasedReturnValue();
              bVar7 = true;
              uVar14 = _objc_msgSend_containsObject_(local_220,local_2c0,local_218);
              local_40c = 0;
              if ((uVar14 & 1) == 0) {
                _Call(local_1d0,&cf_username,PTR____NSArray0__struct_00110718);
                local_230 = _objc_retainAutoreleasedReturnValue();
                bVar6 = true;
                _Text();
                local_240 = _objc_retainAutoreleasedReturnValue();
                bVar1 = true;
                _objc_msgSend_account(local_138,local_2c0);
                local_250 = _objc_retainAutoreleasedReturnValue();
                bVar5 = true;
                uVar14 = _objc_msgSend_isEqual_(local_240,local_2c0);
                local_40c = 0;
                if ((uVar14 & 1) != 0) {
                  _Call(local_1d0,&cf_content,PTR____NSArray0__struct_00110718);
                  local_260 = _objc_retainAutoreleasedReturnValue();
                  bVar4 = true;
                  _Text();
                  local_270 = _objc_retainAutoreleasedReturnValue();
                  bVar3 = true;
                  _objc_msgSend_pendingText(local_138,local_2c0);
                  local_280 = _objc_retainAutoreleasedReturnValue();
                  bVar2 = true;
                  local_40c = _objc_msgSend_isEqual_(local_270,local_2c0);
                }
              }
            }
            if (bVar2) {
              (*(code *)PTR__objc_release_00110458)(local_280);
            }
            if (bVar3) {
              (*(code *)PTR__objc_release_00110458)(local_270);
            }
            if (bVar4) {
              (*(code *)PTR__objc_release_00110458)(local_260);
            }
            if (bVar5) {
              (*(code *)PTR__objc_release_00110458)(local_250);
            }
            if (bVar1) {
              (*(code *)PTR__objc_release_00110458)(local_240);
            }
            if (bVar6) {
              (*(code *)PTR__objc_release_00110458)(local_230);
            }
            if (bVar7) {
              (*(code *)PTR__objc_release_00110458)(local_220);
            }
            bVar1 = (local_40c & 1) != 0;
            if (bVar1) {
              _objc_msgSend_setPendingComment_(local_138,local_2c0);
              _objc_msgSend_setPendingText_(local_138,local_2c0,0);
              _objc_msgSend_setPendingIDs_(local_138,local_2c0,0);
              _objc_msgSend_input(local_138,local_2c0);
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_setText_(uVar11,local_2c0,&cf___);
              (*(code *)PTR__objc_release_00110458)(uVar11);
              _objc_msgSend_setReply_(local_138,local_2c0,0);
              _objc_msgSend_input(local_138,local_2c0);
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_setPlaceholder_(uVar11,local_2c0,&cf_YuN_Ov_);
              (*(code *)PTR__objc_release_00110458)(uVar11);
              _objc_msgSend_input(local_138,local_2c0);
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_setEnabled_(uVar11,local_2c0,1);
              (*(code *)PTR__objc_release_00110458)(uVar11);
              _objc_msgSend_send(local_138,local_2c0);
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend_setEnabled_(uVar11,local_2c0,1);
              (*(code *)PTR__objc_release_00110458)(uVar11);
            }
            _objc_storeStrong(&local_218,0);
            if (bVar1) goto LAB_000131cc;
            local_3e0 = local_3e0 + 1;
          } while (local_3e0 < local_3d8);
          local_3d8 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar10,local_2c0,auStack_210,auStack_130,0x10);
          local_3e0 = 0;
        } while (local_3d8 != 0);
      }
LAB_000131cc:
      (*(code *)PTR__objc_release_00110458)(uVar10);
    }
    _objc_msgSend_pendingComment(local_138,local_2c0);
    lVar16 = _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (lVar16 != 0) {
      _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_2c0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      dVar17 = (double)_objc_msgSend_timeIntervalSinceReferenceDate(uVar10,local_2c0);
      dVar18 = (double)_objc_msgSend_pendingSince(local_138,local_2c0);
      bVar1 = 20.0 < dVar17 - dVar18;
      (*(code *)PTR__objc_release_00110458)(uVar10);
    }
    (*(code *)PTR__objc_release_00110458)(lVar16);
    if (bVar1) {
      _objc_msgSend_setPendingComment_(local_138,local_2c0,0);
      _objc_msgSend_input(local_138,local_2c0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setEnabled_(uVar10,local_2c0,1);
      (*(code *)PTR__objc_release_00110458)(uVar10);
      _objc_msgSend_send(local_138,local_2c0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setEnabled_(uVar10,local_2c0,1);
      (*(code *)PTR__objc_release_00110458)(uVar10);
      _objc_msgSend_heading(local_138,local_2c0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setText_(uVar10,local_2c0,&cf_f_gnxShgT);
      (*(code *)PTR__objc_release_00110458)(uVar10);
    }
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_148,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

