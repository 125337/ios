// acknowledgeSeenItems @0x56aa0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCMFeedController::acknowledgeSeenItems(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong local_280;
  ulong local_278;
  undefined8 local_238;
  undefined8 local_1e8;
  long local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined8 local_188;
  uint local_17c;
  long local_178;
  undefined4 local_16c;
  undefined8 local_168;
  byte local_159;
  undefined8 local_158;
  byte local_149;
  long local_148;
  byte local_139;
  long local_138;
  byte local_129;
  undefined8 local_128;
  byte local_119;
  undefined8 local_118;
  byte local_109;
  long local_108;
  byte local_f9;
  undefined8 local_f8;
  byte local_e9;
  undefined8 local_e8;
  byte local_d9;
  long local_d8;
  SEL local_d0;
  ID local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_d0 = param_2;
  local_c8 = param_1;
  uVar4 = _objc_msgSend_ready(param_1);
  local_d9 = 0;
  local_e9 = 0;
  local_f9 = 0;
  local_109 = 0;
  local_119 = 0;
  local_129 = 0;
  local_139 = 0;
  local_149 = 0;
  local_159 = 0;
  bVar1 = true;
  if ((uVar4 & 1) != 0) {
    _objc_msgSend_facade(local_c8,local_238);
    local_d8 = _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    bVar1 = true;
    if (local_d8 != 0) {
      _objc_msgSend_view(local_c8,local_238);
      local_e8 = _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      uVar4 = _objc_msgSend_isHidden(local_e8,local_238);
      bVar1 = true;
      if ((uVar4 & 1) == 0) {
        _objc_msgSend_view(local_c8,local_238);
        local_f8 = _objc_retainAutoreleasedReturnValue();
        local_f9 = 1;
        _objc_msgSend_window(local_f8,local_238);
        local_108 = _objc_retainAutoreleasedReturnValue();
        local_109 = 1;
        bVar1 = true;
        if (local_108 != 0) {
          _objc_msgSend_host(local_c8,local_238);
          local_118 = _objc_retainAutoreleasedReturnValue();
          local_119 = 1;
          _objc_msgSend_navigationController(local_118,local_238);
          local_128 = _objc_retainAutoreleasedReturnValue();
          local_129 = 1;
          _objc_msgSend_topViewController(local_128,local_238);
          lVar5 = _objc_retainAutoreleasedReturnValue();
          local_139 = 1;
          local_138 = lVar5;
          _objc_msgSend_host(local_c8,local_238);
          local_148 = _objc_retainAutoreleasedReturnValue();
          local_149 = 1;
          bVar1 = true;
          if (lVar5 == local_148) {
            _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_238);
            local_158 = _objc_retainAutoreleasedReturnValue();
            local_159 = 1;
            lVar5 = _objc_msgSend_applicationState(local_158,local_238);
            bVar1 = lVar5 != 0;
          }
        }
      }
    }
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
  if ((local_129 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_128);
  }
  if ((local_119 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_118);
  }
  if ((local_109 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_108);
  }
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_f8);
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_e8);
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_d8);
  }
  if (!bVar1) {
    _objc_msgSend_pendingSeenIDs(local_c8,local_238);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_168 = uVar6;
    uVar7 = _objc_opt_class(&_OBJC_CLASS___NSArray);
    uVar4 = _objc_opt_isKindOfClass(uVar6,uVar7);
    if (((uVar4 & 1) == 0) || (uVar4 = _objc_msgSend_count(local_168,local_238), 0x28 < uVar4)) {
      local_16c = 1;
    }
    else {
      uVar4 = _objc_msgSend_isFeedScrolling(local_c8,local_238);
      if ((uVar4 & 1) == 0) {
        _objc_msgSend_setPendingSeenIDs_(local_c8,local_238,0);
        local_178 = 0;
        local_17c = _objc_msgSend_lastSeenCreateTime(local_c8,local_238);
        local_188 = 0;
        _memset(auStack_1d0,0,0x40);
        uVar6 = (*(code *)PTR__objc_retain_00110460)(local_168);
        local_278 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar6,local_238,auStack_1d0,auStack_a8,0x10);
        if (local_278 != 0) {
          lVar5 = *local_1c0;
          local_280 = 0;
          do {
            do {
              if (*local_1c0 - lVar5 != 0) {
                _objc_enumerationMutation(*local_1c0 - lVar5,uVar6);
              }
              uVar8 = *(undefined8 *)(local_1c8 + local_280 * 8);
              local_190 = uVar8;
              uVar7 = _objc_opt_class(&_OBJC_CLASS___NSString);
              uVar4 = _objc_opt_isKindOfClass(uVar8,uVar7);
              if ((uVar4 & 1) != 0) {
                _objc_msgSend_items(local_c8,local_238);
                uVar7 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend_objectForKeyedSubscript_(uVar7,local_238,local_190);
                local_1d8 = _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_00110458)(uVar7);
                if (local_1d8 == 0) {
                  local_16c = 3;
                }
                else {
                  _Call(local_1d8,&cf_createtime,PTR____NSArray0__struct_00110718);
                  uVar7 = _objc_retainAutoreleasedReturnValue();
                  uVar3 = _objc_msgSend_unsignedIntValue(uVar7,local_238);
                  (*(code *)PTR__objc_release_00110458)(uVar7);
                  uVar7 = local_190;
                  bVar1 = false;
                  bVar2 = true;
                  if ((uVar3 <= local_17c) && (bVar2 = false, uVar3 == local_17c)) {
                    _objc_msgSend_lastSeenItemID(local_c8,local_238);
                    local_1e8 = _objc_retainAutoreleasedReturnValue();
                    bVar1 = true;
                    uVar4 = _objc_msgSend_isEqual_(uVar7,local_238);
                    bVar2 = false;
                    if ((uVar4 & 1) == 0) {
                      bVar2 = local_178 == 0;
                    }
                  }
                  if (bVar1) {
                    (*(code *)PTR__objc_release_00110458)(local_1e8);
                  }
                  if (bVar2) {
                    _objc_storeStrong(&local_178,local_1d8);
                    local_17c = uVar3;
                    _objc_storeStrong(&local_188,local_190);
                  }
                  local_16c = 0;
                }
                _objc_storeStrong(&local_1d8,0);
              }
              local_280 = local_280 + 1;
            } while (local_280 < local_278);
            local_278 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar6,local_238,auStack_1d0,auStack_a8,0x10);
            local_280 = 0;
          } while (local_278 != 0);
        }
        (*(code *)PTR__objc_release_00110458)(uVar6);
        bVar1 = false;
        if (local_178 != 0) {
          _objc_msgSend_host(local_c8,local_238);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          local_b0 = local_178;
          _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_238,&local_b0,1);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _Call(uVar6,&cf_onMarkWCObjectAsRead_);
          lVar5 = _objc_retainAutoreleasedReturnValue();
          bVar1 = lVar5 != 0;
          (*(code *)PTR__objc_release_00110458)(lVar5);
          (*(code *)PTR__objc_release_00110458)(uVar7);
          (*(code *)PTR__objc_release_00110458)(uVar6);
        }
        if (bVar1) {
          _objc_msgSend_setLastSeenCreateTime_(local_c8,local_238,local_17c);
          _objc_msgSend_setLastSeenItemID_(local_c8,local_238,local_188);
          local_c0 = &cf_count;
          uVar6 = _objc_msgSend_count(local_168,local_238);
          _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_238,uVar6);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          local_b8 = uVar6;
          _objc_msgSend_dictionaryWithObjects_forKeys_count_
                    (&_OBJC_CLASS___NSDictionary,local_238,&local_b8,&local_c0,1);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _Trace(&cf_timeline_seen_ack);
          (*(code *)PTR__objc_release_00110458)(uVar7);
          (*(code *)PTR__objc_release_00110458)(uVar6);
        }
        _objc_storeStrong(&local_188);
        _objc_storeStrong(&local_178,0);
        local_16c = 0;
      }
      else {
        local_16c = 1;
      }
    }
    _objc_storeStrong(&local_168,0);
  }
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

