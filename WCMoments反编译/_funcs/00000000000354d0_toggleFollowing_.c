// toggleFollowing: @0x354d0

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::toggleFollowing_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_1a0;
  ulong local_198;
  undefined8 local_130;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_c9;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  lVar3 = _objc_msgSend_length(local_c0,local_130);
  local_c9 = 0;
  bVar1 = true;
  if (lVar3 != 0) {
    _objc_msgSend_account(local_b0,local_130);
    local_c8 = _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    lVar3 = _objc_msgSend_length(local_c8,local_130);
    bVar1 = lVar3 == 0;
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_c8);
  }
  if (bVar1) {
    local_d0 = 1;
  }
  else {
    _objc_msgSend_following(local_b0,local_130);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_msgSend_containsObject_(uVar4,local_130,local_c0);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((uVar2 & 1) == 0) {
      _objc_msgSend_following(local_b0,local_130);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_addObject_(uVar4,local_130,local_c0);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    else {
      _objc_msgSend_following(local_b0,local_130);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_removeObject_(uVar4,local_130,local_c0);
      (*(code *)PTR__objc_release_00110458)(uVar4);
    }
    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_130);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_following(local_b0,local_130);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_allObjects(uVar5,local_130);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_followingKey(local_b0,local_130);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setObject_forKey_(uVar4,local_130,uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar7);
    (*(code *)PTR__objc_release_00110458)(uVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    _memset(auStack_118,0,0x40);
    _objc_msgSend_cachedRows(local_b0,local_130);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_allKeys(uVar4,local_130);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_00110458)(uVar4);
    local_198 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar5,local_130,auStack_118,auStack_a8,0x10);
    if (local_198 != 0) {
      lVar3 = *local_108;
      local_1a0 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar5);
          }
          local_d8 = *(undefined8 *)(local_110 + local_1a0 * 8);
          _objc_msgSend_cachedRows(local_b0,local_130);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_objectForKeyedSubscript_(uVar4,local_130,local_d8);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          local_120 = _objc_msgSend_mutableCopy(uVar6,local_130);
          (*(code *)PTR__objc_release_00110458)(uVar6);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          _objc_msgSend_objectForKeyedSubscript_(local_120,local_130,&cf_username);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          uVar2 = _objc_msgSend_isEqual_(uVar4,local_130,local_c0);
          (*(code *)PTR__objc_release_00110458)(uVar4);
          if ((uVar2 & 1) != 0) {
            _objc_msgSend_following(local_b0,local_130);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            uVar6 = _objc_msgSend_containsObject_(uVar4,local_130,local_c0);
            _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_130,uVar6);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setObject_forKeyedSubscript_(local_120,local_130,uVar6,&cf_following);
            (*(code *)PTR__objc_release_00110458)(uVar6);
            (*(code *)PTR__objc_release_00110458)(uVar4);
            uVar4 = local_120;
            _objc_msgSend_cachedRows(local_b0,local_130);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend_setObject_forKeyedSubscript_(uVar6,local_130,uVar4,local_d8);
            (*(code *)PTR__objc_release_00110458)(uVar6);
          }
          _objc_storeStrong(&local_120,0);
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar5,local_130,auStack_118,auStack_a8,0x10);
        local_1a0 = 0;
      } while (local_198 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar5);
    _objc_msgSend_reloadFeed(local_b0,local_130);
    local_d0 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

