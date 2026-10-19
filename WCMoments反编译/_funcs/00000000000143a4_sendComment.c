// sendComment @0x143a4

/* Function Stack Size: 0x10 bytes */

void WCMVideoComments::sendComment(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  dispatch_time_t dVar11;
  double dVar12;
  long local_3f0;
  ulong local_388;
  ulong local_380;
  undefined8 local_298;
  undefined *local_288;
  undefined4 local_280;
  undefined4 local_27c;
  code *local_278;
  undefined *local_270;
  undefined1 auStack_268 [8];
  undefined1 auStack_260 [15];
  byte local_251;
  long local_250;
  undefined8 local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined1 local_1e9;
  long local_1e8;
  byte local_1d9;
  undefined8 local_1d8;
  byte local_1c9;
  undefined8 local_1c8;
  byte local_1b9;
  long local_1b8;
  byte local_1a9;
  undefined8 local_1a8;
  byte local_199;
  undefined8 local_198;
  byte local_189;
  undefined8 local_188;
  byte local_179;
  long local_178;
  byte local_169;
  undefined8 local_168;
  byte local_159;
  long local_158;
  byte local_149;
  long local_148;
  byte local_139;
  undefined8 local_138;
  byte local_129;
  undefined8 local_128;
  undefined8 local_120;
  uint local_118;
  byte local_111;
  long local_110;
  byte local_101;
  long local_100;
  undefined8 local_f8;
  SEL local_f0;
  ID local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined1 auStack_d0 [128];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_f0 = param_2;
  local_e8 = param_1;
  _objc_msgSend_input(param_1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_text(uVar5,local_298);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_whitespaceAndNewlineCharacterSet(&_OBJC_CLASS___NSCharacterSet,local_298);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_stringByTrimmingCharactersInSet_(uVar6,local_298);
  local_f8 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  (*(code *)PTR__objc_release_00110458)(uVar5);
  lVar8 = _objc_msgSend_length(local_f8,local_298);
  local_101 = 0;
  local_111 = 0;
  bVar4 = true;
  if (lVar8 != 0) {
    _objc_msgSend_pendingComment(local_e8,local_298);
    local_100 = _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    bVar4 = true;
    if (local_100 == 0) {
      _objc_msgSend_item(local_e8,local_298);
      local_110 = _objc_retainAutoreleasedReturnValue();
      local_111 = 1;
      bVar4 = local_110 == 0;
    }
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_110);
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_100);
  }
  if (bVar4) {
    local_118 = 1;
  }
  else {
    _NSClassFromString(&cf_WCCommentItem);
    local_120 = _objc_alloc_init();
    _objc_msgSend_item(local_e8,local_298);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _Call(uVar5,&cf_username,PTR____NSArray0__struct_00110718);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _Text();
    local_128 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    lVar8 = _objc_msgSend_length(local_128,local_298);
    uVar5 = local_120;
    if (lVar8 == 0) {
      _objc_msgSend_heading(local_e8,local_298);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setText_(uVar5,local_298,&cf_R___gR__bzT);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      local_118 = 1;
    }
    else {
      _objc_msgSend_itemID(local_e8,local_298);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      local_30 = uVar6;
      _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_298,&local_30,1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _Call(uVar5,&cf_setItemID_);
      lVar8 = _objc_retainAutoreleasedReturnValue();
      uVar5 = local_120;
      local_139 = 0;
      local_149 = 0;
      local_159 = 0;
      local_169 = 0;
      local_179 = 0;
      local_189 = 0;
      local_199 = 0;
      local_1a9 = 0;
      local_1b9 = 0;
      bVar4 = false;
      if (lVar8 != 0) {
        local_38 = local_128;
        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_298,&local_38,1);
        local_138 = _objc_retainAutoreleasedReturnValue();
        local_139 = 1;
        _Call(uVar5,&cf_setToUserName_);
        local_148 = _objc_retainAutoreleasedReturnValue();
        local_149 = 1;
        bVar4 = false;
        if (local_148 != 0) {
          _Call(local_120,&cf_setType_,&PTR__OBJC_CLASS___NSConstantArray_0010f908);
          local_158 = _objc_retainAutoreleasedReturnValue();
          uVar5 = local_120;
          local_159 = 1;
          bVar4 = false;
          if (local_158 != 0) {
            local_40 = local_f8;
            _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_298,&local_40,1);
            local_168 = _objc_retainAutoreleasedReturnValue();
            local_169 = 1;
            _Call(uVar5,&cf_setContent_);
            local_178 = _objc_retainAutoreleasedReturnValue();
            uVar5 = local_120;
            local_179 = 1;
            bVar4 = false;
            if (local_178 != 0) {
              _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_298);
              local_188 = _objc_retainAutoreleasedReturnValue();
              local_189 = 1;
              dVar12 = (double)_objc_msgSend_timeIntervalSince1970(local_188,local_298);
              _objc_msgSend_numberWithUnsignedInt_(&_OBJC_CLASS___NSNumber,local_298,(int)dVar12);
              local_198 = _objc_retainAutoreleasedReturnValue();
              local_199 = 1;
              local_48 = local_198;
              _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_298,&local_48,1);
              local_1a8 = _objc_retainAutoreleasedReturnValue();
              local_1a9 = 1;
              _Call(uVar5,&cf_setCreateTime_);
              local_1b8 = _objc_retainAutoreleasedReturnValue();
              local_1b9 = 1;
              bVar4 = local_1b8 != 0;
            }
          }
        }
      }
      if ((local_1b9 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_1b8);
      }
      if ((local_1a9 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_1a8);
      }
      if ((local_199 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_198);
      }
      if ((local_189 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_188);
      }
      if ((local_179 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_178);
      }
      if ((local_169 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_168);
      }
      if ((local_159 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_158);
      }
      if ((local_149 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_148);
      }
      if ((local_139 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_138);
      }
      (*(code *)PTR__objc_release_00110458)(lVar8);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      local_129 = bVar4;
      _objc_msgSend_reply(local_e8,local_298);
      lVar8 = _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_00110458)();
      uVar5 = local_120;
      if (lVar8 != 0) {
        local_1c9 = 0;
        local_1d9 = 0;
        local_1e9 = 0;
        uVar1 = (local_129 & 1) != 0;
        bVar3 = 0;
        if ((bool)uVar1) {
          _objc_msgSend_reply(local_e8,local_298);
          local_1c8 = _objc_retainAutoreleasedReturnValue();
          local_1c9 = 1;
          local_50 = local_1c8;
          _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_298,&local_50,1);
          local_1d8 = _objc_retainAutoreleasedReturnValue();
          local_1d9 = 1;
          _Call(uVar5,&cf_setRefComment_);
          local_1e8 = _objc_retainAutoreleasedReturnValue();
          local_129 = local_1e8 != 0;
          local_1e9 = uVar1;
          (*(code *)PTR__objc_release_00110458)(local_1e8);
          uVar1 = local_1e9;
          bVar3 = local_129;
        }
        local_129 = bVar3;
        local_1e9 = uVar1;
        if ((local_1d9 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_1d8);
        }
        if ((local_1c9 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_1c8);
        }
      }
      if ((local_129 & 1) == 0) {
        _objc_msgSend_heading(local_e8,local_298);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setText_(uVar5,local_298,&cf_S_MR_OcSNS_u);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        local_118 = 1;
      }
      else {
        _objc_msgSend_setPendingText_(local_e8,local_298,local_f8);
        local_1f8 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);
        _memset(auStack_240,0,0x40);
        _objc_msgSend_comments(local_e8,local_298);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        local_380 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar5,local_298,auStack_240,auStack_d0,0x10);
        if (local_380 != 0) {
          lVar8 = *local_230;
          local_388 = 0;
          do {
            do {
              if (*local_230 - lVar8 != 0) {
                _objc_enumerationMutation(*local_230 - lVar8,uVar5);
              }
              local_200 = *(undefined8 *)(local_238 + local_388 * 8);
              _Call(local_200,&cf_commentID,PTR____NSArray0__struct_00110718);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _Text();
              local_248 = _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_00110458)(uVar6);
              lVar9 = _objc_msgSend_length(local_248,local_298);
              if (lVar9 == 0) {
                _Call(local_200,&cf_comment64ID,PTR____NSArray0__struct_00110718);
                uVar7 = _objc_retainAutoreleasedReturnValue();
                _Text();
                uVar10 = _objc_retainAutoreleasedReturnValue();
                uVar6 = local_248;
                local_248 = uVar10;
                (*(code *)PTR__objc_release_00110458)(uVar6);
                (*(code *)PTR__objc_release_00110458)(uVar7);
              }
              lVar9 = _objc_msgSend_length(local_248,local_298);
              if (lVar9 != 0) {
                _objc_msgSend_addObject_(local_1f8,local_298,local_248);
              }
              _objc_storeStrong(&local_248,0);
              local_388 = local_388 + 1;
            } while (local_388 < local_380);
            local_380 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar5,local_298,auStack_240,auStack_d0,0x10);
            local_388 = 0;
          } while (local_380 != 0);
        }
        (*(code *)PTR__objc_release_00110458)(uVar5);
        _objc_msgSend_setPendingIDs_(local_e8,local_298,local_1f8);
        _objc_msgSend_setPendingComment_(local_e8,local_298,local_120);
        _objc_msgSend_date(&_OBJC_CLASS___NSDate,local_298);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_timeIntervalSinceReferenceDate(uVar5,local_298);
        _objc_msgSend_setPendingSince_(local_e8,local_298);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        _objc_msgSend_input(local_e8,local_298);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setEnabled_(uVar5,local_298,0);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        _objc_msgSend_send(local_e8,local_298);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_setEnabled_(uVar5,local_298,0);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        _objc_msgSend_facade(local_e8,local_298);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        local_e0 = local_120;
        _objc_msgSend_item(local_e8,local_298);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _Call(uVar6,&cf_advertiseInfo,PTR____NSArray0__struct_00110718);
        lVar8 = _objc_retainAutoreleasedReturnValue();
        local_251 = 0;
        local_3f0 = lVar8;
        if (lVar8 == 0) {
          _objc_msgSend_null(&_OBJC_CLASS___NSNull,local_298);
          local_250 = _objc_retainAutoreleasedReturnValue();
          local_3f0 = local_250;
        }
        local_d8 = local_3f0;
        local_251 = lVar8 == 0;
        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_298,&local_e0,2);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _Call(uVar5,&cf_commentObject_ForAd_);
        lVar9 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)();
        (*(code *)PTR__objc_release_00110458)(uVar7);
        if ((local_251 & 1) != 0) {
          (*(code *)PTR__objc_release_00110458)(local_250);
        }
        (*(code *)PTR__objc_release_00110458)(lVar8);
        (*(code *)PTR__objc_release_00110458)(uVar6);
        (*(code *)PTR__objc_release_00110458)(uVar5);
        if (lVar9 != 0) {
          _objc_msgSend_heading(local_e8,local_298);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setText_(uVar5,local_298,&cf__cN_OI__Tek);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          _objc_msgSend_input(local_e8,local_298);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_resignFirstResponder(uVar5,local_298);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          _objc_initWeak(auStack_260,local_e8);
          dVar11 = _dispatch_time(0,2000000000);
          puVar2 = PTR___dispatch_main_q_00110528;
          _objc_retainAutoreleaseReturnValue();
          uVar5 = _objc_retainAutoreleasedReturnValue(puVar2);
          local_288 = PTR___NSConcreteStackBlock_001104f0;
          local_280 = 0xc2000000;
          local_27c = 0;
          local_278 = ___31__WCMVideoComments_sendComment__block_invoke;
          local_270 = &___block_descriptor_40_e8_32w_e5_v8__0l;
          _objc_copyWeak(auStack_268,auStack_260);
          _dispatch_after(dVar11,uVar5,&local_288);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          _objc_destroyWeak(auStack_268);
          _objc_destroyWeak(auStack_260);
        }
        else {
          _objc_msgSend_setPendingComment_(local_e8,local_298,0);
          _objc_msgSend_input(local_e8,local_298);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setEnabled_(uVar5,local_298,1);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          _objc_msgSend_send(local_e8,local_298);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setEnabled_(uVar5,local_298,1);
          (*(code *)PTR__objc_release_00110458)(uVar5);
          _objc_msgSend_heading(local_e8,local_298);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setText_(uVar5,local_298,&cf__gcN);
          (*(code *)PTR__objc_release_00110458)(uVar5);
        }
        local_118 = (uint)(lVar9 == 0);
        _objc_storeStrong(&local_1f8,0);
      }
    }
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

