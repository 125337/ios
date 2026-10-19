// toggleVideoLike @0x284d4

/* Function Stack Size: 0x10 bytes */

void WCMVideoController::toggleVideoLike(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  dispatch_time_t dVar13;
  double dVar14;
  double dVar15;
  ulong local_408;
  ulong local_400;
  undefined8 local_348;
  undefined8 local_250;
  undefined *local_230;
  undefined4 local_228;
  undefined4 local_224;
  code *local_220;
  undefined *local_218;
  undefined8 local_210;
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [15];
  byte local_199;
  undefined8 local_198;
  byte local_189;
  undefined8 local_188;
  byte local_179;
  undefined8 local_178;
  byte local_169;
  undefined8 local_168;
  byte local_159;
  undefined8 local_158;
  byte local_149;
  undefined8 local_148;
  long local_140;
  byte local_135;
  undefined4 local_134;
  undefined8 local_130;
  undefined1 local_121;
  long local_120;
  long local_118;
  undefined8 local_110;
  double local_108;
  SEL local_100;
  ID local_f8;
  undefined1 auStack_f0 [128];
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined **local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_100 = param_2;
  local_f8 = param_1;
  uVar4 = _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  dVar14 = (double)_objc_msgSend_systemUptime(uVar4,local_250);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  local_108 = dVar14;
  dVar15 = (double)_objc_msgSend_lastLikeRequest(local_f8,local_250);
  if (0.6 <= dVar14 - dVar15) {
    _objc_msgSend_setLastLikeRequest_(local_108,local_f8,local_250);
    uVar4 = _objc_msgSend_videos(local_f8,local_250);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = _objc_msgSend_index(local_f8,local_250);
    uVar5 = _objc_msgSend_objectAtIndexedSubscript_(uVar4,local_250,uVar5);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = _objc_msgSend_objectForKeyedSubscript_(uVar5,local_250,&cf_id);
    local_110 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    uVar4 = _objc_msgSend_facade(local_f8,local_250);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_30 = local_110;
    uVar5 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_250,&local_30,1);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = _Call(uVar4,&cf_getDataItemByID_);
    local_118 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_121 = 0;
    bVar2 = false;
    uVar1 = local_118 == 0;
    if ((bool)uVar1) {
      uVar4 = _objc_msgSend_resolveItem(local_f8,local_250);
      local_120 = _objc_retainAutoreleasedReturnValue(uVar4);
      bVar2 = local_120 != 0;
      local_121 = uVar1;
      (*(code *)PTR__objc_release_00110458)(local_120);
      uVar1 = local_121;
    }
    local_121 = uVar1;
    if (bVar2) {
      uVar4 = _objc_msgSend_resolveItem(local_f8,local_250);
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = (**(code **)(lVar7 + 0x10))(lVar7,local_110);
      lVar8 = _objc_retainAutoreleasedReturnValue(uVar4);
      lVar9 = local_118;
      local_118 = lVar8;
      (*(code *)PTR__objc_release_00110458)(lVar9);
      (*(code *)PTR__objc_release_00110458)(lVar7);
    }
    uVar4 = _Call(local_118,&cf_username,PTR____NSArray0__struct_00110718);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = _Text();
    local_130 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((local_118 == 0) || (lVar9 = _objc_msgSend_length(local_130,local_250), lVar9 == 0)) {
      local_134 = 1;
    }
    else {
      uVar4 = _Call(local_118,&cf_likeFlag,PTR____NSArray0__struct_00110718);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      bVar3 = _objc_msgSend_boolValue(uVar4,local_250);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      local_149 = 0;
      local_159 = 0;
      local_169 = 0;
      local_179 = 0;
      local_189 = 0;
      local_199 = 0;
      local_135 = bVar3;
      if ((bVar3 & 1) == 0) {
        uVar4 = _objc_msgSend_facade(local_f8,local_250);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        local_179 = 1;
        local_50 = local_118;
        local_48 = local_130;
        local_40 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_0010fc98;
        local_178 = uVar4;
        uVar5 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_250,&local_50,3);
        local_188 = _objc_retainAutoreleasedReturnValue(uVar5);
        local_189 = 1;
        uVar4 = _Call(uVar4,&cf_likeObject_ofUser_source_);
        local_348 = _objc_retainAutoreleasedReturnValue(uVar4);
        local_199 = 1;
        local_198 = local_348;
      }
      else {
        uVar4 = _objc_msgSend_facade(local_f8,local_250);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        local_149 = 1;
        local_38 = local_118;
        local_148 = uVar4;
        uVar5 = _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_250,&local_38,1);
        local_158 = _objc_retainAutoreleasedReturnValue(uVar5);
        local_159 = 1;
        uVar4 = _Call(uVar4,&cf_cancelLikeWithDataItem_);
        local_348 = _objc_retainAutoreleasedReturnValue(uVar4);
        local_169 = 1;
        local_168 = local_348;
      }
      local_140 = (*(code *)PTR__objc_retain_00110460)(local_348);
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
      uVar4 = _objc_msgSend_videos(local_f8,local_250);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar5 = _objc_msgSend_index(local_f8,local_250);
      uVar5 = _objc_msgSend_objectAtIndexedSubscript_(uVar4,local_250,uVar5);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _objc_msgSend_objectForKeyedSubscript_(uVar5,local_250,&cf_media);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_70 = &cf_desired;
      uVar10 = _objc_msgSend_numberWithInt_(&_OBJC_CLASS___NSNumber,local_250,(local_135 ^ 1) & 1);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      local_68 = &cf_invoked;
      local_60 = uVar10;
      uVar11 = _objc_msgSend_numberWithInt_
                         (local_140,&_OBJC_CLASS___NSNumber,local_250,local_140 != 0);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      local_58 = uVar11;
      uVar12 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                         (&_OBJC_CLASS___NSDictionary,local_250,&local_60,&local_70,2);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      _TraceVideo(&cf_video_like_request,uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar12);
      (*(code *)PTR__objc_release_00110458)(uVar11);
      (*(code *)PTR__objc_release_00110458)(uVar10);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar4);
      _objc_msgSend_updateVideoCounts(local_f8,local_250);
      if (local_140 == 0) {
        uVar4 = _objc_msgSend_hint(local_f8,local_250);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        _objc_msgSend_setText_(uVar4,local_250,&cf_feelcNp_zT);
        (*(code *)PTR__objc_release_00110458)(uVar4);
        local_134 = 1;
      }
      else {
        _objc_initWeak(auStack_1a8,local_f8);
        _memset(auStack_1f0,0,0x40);
        uVar4 = (*(code *)PTR__objc_retain_00110460)(&PTR__OBJC_CLASS___NSConstantArray_0010f9c8);
        local_400 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar4,local_250,auStack_1f0,auStack_f0,0x10);
        if (local_400 != 0) {
          lVar9 = *local_1e0;
          local_408 = 0;
          do {
            do {
              if (*local_1e0 - lVar9 != 0) {
                _objc_enumerationMutation(*local_1e0 - lVar9,uVar4);
              }
              local_1b0 = *(undefined8 *)(local_1e8 + local_408 * 8);
              dVar14 = (double)_objc_msgSend_doubleValue(local_1b0,local_250);
              dVar13 = _dispatch_time(0,(long)(dVar14 * 1000000000.0));
              _objc_retainAutoreleaseReturnValue(PTR___dispatch_main_q_00110528);
              uVar5 = _objc_retainAutoreleasedReturnValue(PTR___dispatch_main_q_00110528);
              local_230 = PTR___NSConcreteStackBlock_001104f0;
              local_228 = 0xc2000000;
              local_224 = 0;
              local_220 = ___37__WCMVideoController_toggleVideoLike__block_invoke;
              local_218 = &___block_descriptor_48_e8_32s40w_e5_v8__0l;
              _objc_copyWeak(auStack_208,auStack_1a8);
              local_210 = (*(code *)PTR__objc_retain_00110460)(local_110);
              _dispatch_after(dVar13,uVar5,&local_230);
              (*(code *)PTR__objc_release_00110458)(uVar5);
              _objc_storeStrong(&local_210,0);
              _objc_destroyWeak(auStack_208);
              local_408 = local_408 + 1;
            } while (local_408 < local_400);
            local_400 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar4,local_250,auStack_1f0,auStack_f0,0x10);
            local_408 = 0;
          } while (local_400 != 0);
        }
        (*(code *)PTR__objc_release_00110458)(uVar4);
        _objc_destroyWeak(auStack_1a8);
        local_134 = 0;
      }
      _objc_storeStrong(&local_140,0);
    }
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_110,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

