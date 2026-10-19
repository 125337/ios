// syncHiddenUsers @0x442a4

/* Function Stack Size: 0x10 bytes */

void WCMFeedController::syncHiddenUsers(ID param_1,SEL param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  cfstringStruct *local_5a8;
  ulong local_570;
  ulong local_568;
  ulong local_510;
  ulong local_508;
  long local_4e8;
  ulong local_4a0;
  ulong local_498;
  undefined *local_470;
  long local_450;
  ulong local_418;
  ulong local_410;
  undefined8 local_408;
  undefined8 local_3d8;
  byte local_3c9;
  undefined8 local_3c8;
  undefined1 auStack_3c0 [8];
  long local_3b8;
  long *local_3b0;
  undefined8 local_380;
  undefined4 local_374;
  undefined8 local_370;
  undefined1 auStack_368 [8];
  long local_360;
  long *local_358;
  undefined8 local_328;
  byte local_319;
  long local_318;
  undefined8 local_310;
  undefined1 auStack_308 [8];
  long local_300;
  long *local_2f8;
  undefined8 local_2c8;
  byte local_2b9;
  long local_2b8;
  undefined8 local_2b0;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  SEL local_248;
  ID local_240;
  undefined1 auStack_238 [128];
  undefined8 local_1b8;
  cfstringStruct *local_1b0;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_248 = param_2;
  local_240 = param_1;
  _Service(&cf_WCGroupMgr);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _Call(uVar3,&cf_getGroupByID_,&PTR__OBJC_CLASS___NSConstantArray_0010fa88);
  local_250 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _Call(local_250,&cf_memberList,PTR____NSArray0__struct_00110718);
  local_258 = _objc_retainAutoreleasedReturnValue();
  local_260 = _objc_opt_new(&_OBJC_CLASS___NSMutableSet);
  uVar3 = local_258;
  uVar4 = _objc_opt_class(&_OBJC_CLASS___NSArray);
  uVar5 = _objc_opt_isKindOfClass(uVar3,uVar4);
  if ((uVar5 & 1) != 0) {
    _memset(auStack_2a8,0,0x40);
    uVar3 = (*(code *)PTR__objc_retain_00110460)(local_258);
    local_410 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar3,local_408,auStack_2a8,auStack_a8,0x10);
    if (local_410 != 0) {
      lVar10 = *local_298;
      local_418 = 0;
      do {
        do {
          if (*local_298 - lVar10 != 0) {
            _objc_enumerationMutation(*local_298 - lVar10,uVar3);
          }
          uVar11 = *(undefined8 *)(local_2a0 + local_418 * 8);
          local_268 = uVar11;
          uVar4 = _objc_opt_class(&_OBJC_CLASS___NSString);
          uVar5 = _objc_opt_isKindOfClass(uVar11,uVar4);
          if (((uVar5 & 1) != 0) && (lVar6 = _objc_msgSend_length(local_268,local_408), lVar6 != 0))
          {
            _objc_msgSend_addObject_(local_260,local_408,local_268);
          }
          local_418 = local_418 + 1;
        } while (local_418 < local_410);
        local_410 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar3,local_408,auStack_2a8,auStack_a8,0x10);
        local_418 = 0;
      } while (local_410 != 0);
    }
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  uVar3 = _objc_msgSend_mutableCopy(local_260,local_408);
  local_2b0 = uVar3;
  _objc_msgSend_hiddenUsers(local_240,local_408);
  lVar10 = _objc_retainAutoreleasedReturnValue();
  local_2b9 = 0;
  local_450 = lVar10;
  if (lVar10 == 0) {
    _objc_msgSend_set(&_OBJC_CLASS___NSSet,local_408);
    local_2b8 = _objc_retainAutoreleasedReturnValue();
    local_450 = local_2b8;
  }
  local_2b9 = lVar10 == 0;
  _objc_msgSend_unionSet_(uVar3,local_408,local_450);
  if ((local_2b9 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_2b8);
  }
  (*(code *)PTR__objc_release_00110458)(lVar10);
  uVar3 = local_2b0;
  _objc_msgSend_permissionRequests(local_240,local_408);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_allKeys(uVar4,local_408);
  puVar7 = (undefined *)_objc_retainAutoreleasedReturnValue();
  local_470 = puVar7;
  if (puVar7 == (undefined *)0x0) {
    local_470 = PTR____NSArray0__struct_00110718;
  }
  _objc_msgSend_addObjectsFromArray_(uVar3,local_408,local_470);
  (*(code *)PTR__objc_release_00110458)(puVar7);
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _memset(auStack_308,0,0x40);
  _objc_msgSend_cachedRows(local_240,local_408);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_allValues(uVar3,local_408);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  local_498 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar4,local_408,auStack_308,auStack_128,0x10);
  if (local_498 != 0) {
    lVar10 = *local_2f8;
    local_4a0 = 0;
    do {
      do {
        if (*local_2f8 - lVar10 != 0) {
          _objc_enumerationMutation(*local_2f8 - lVar10,uVar4);
        }
        local_2c8 = *(undefined8 *)(local_300 + local_4a0 * 8);
        _objc_msgSend_objectForKeyedSubscript_(local_2c8,local_408,&cf_username);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        lVar6 = _objc_msgSend_length(uVar3,local_408);
        (*(code *)PTR__objc_release_00110458)(uVar3);
        uVar3 = local_2b0;
        if (lVar6 != 0) {
          _objc_msgSend_objectForKeyedSubscript_(local_2c8,local_408,&cf_username);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_addObject_(uVar3,local_408);
          (*(code *)PTR__objc_release_00110458)(uVar11);
        }
        local_4a0 = local_4a0 + 1;
      } while (local_4a0 < local_498);
      local_498 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar4,local_408,auStack_308,auStack_128,0x10);
      local_4a0 = 0;
    } while (local_498 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_msgSend_facade(local_240,local_408);
  lVar10 = _objc_retainAutoreleasedReturnValue();
  local_319 = 0;
  local_4e8 = lVar10;
  if (lVar10 == 0) {
    _Service(&cf_WCFacade);
    local_318 = _objc_retainAutoreleasedReturnValue();
    local_4e8 = local_318;
  }
  local_319 = lVar10 == 0;
  local_310 = (*(code *)PTR__objc_retain_00110460)(local_4e8);
  if ((local_319 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_318);
  }
  (*(code *)PTR__objc_release_00110458)(lVar10);
  _memset(auStack_368,0,0x40);
  uVar3 = (*(code *)PTR__objc_retain_00110460)(local_2b0);
  local_508 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_408,auStack_368,auStack_1a8,0x10);
  if (local_508 != 0) {
    lVar10 = *local_358;
    local_510 = 0;
    do {
      do {
        if (*local_358 - lVar10 != 0) {
          _objc_enumerationMutation(*local_358 - lVar10,uVar3);
        }
        uVar4 = local_310;
        local_328 = *(undefined8 *)(local_360 + local_510 * 8);
        local_1b0 = &cf_5;
        local_1b8 = local_328;
        _objc_msgSend_arrayWithObjects_count_(&_OBJC_CLASS___NSArray,local_408,&local_1b8,2);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _Call(uVar4,&cf_isUserInGroup_GroupID_);
        local_370 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar11);
        uVar4 = local_370;
        uVar11 = _objc_opt_class(&_OBJC_CLASS___NSNumber);
        uVar5 = _objc_opt_isKindOfClass(uVar4,uVar11);
        if ((uVar5 & 1) == 0) {
          local_374 = 7;
        }
        else {
          uVar5 = _objc_msgSend_boolValue(local_370,local_408);
          if ((uVar5 & 1) == 0) {
            _objc_msgSend_removeObject_(local_260,local_408,local_328);
          }
          else {
            _objc_msgSend_addObject_(local_260,local_408,local_328);
          }
          local_374 = 0;
        }
        _objc_storeStrong(&local_370,0);
        local_510 = local_510 + 1;
      } while (local_510 < local_508);
      local_508 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_408,auStack_368,auStack_1a8,0x10);
      local_510 = 0;
    } while (local_508 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_setHiddenUsers_(local_240,local_408,local_260);
  _memset(auStack_3c0,0,0x40);
  _objc_msgSend_cachedRows(local_240,local_408);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_allKeys(uVar3,local_408);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  local_568 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar4,local_408,auStack_3c0,auStack_238,0x10);
  if (local_568 != 0) {
    lVar10 = *local_3b0;
    local_570 = 0;
    do {
      do {
        if (*local_3b0 - lVar10 != 0) {
          _objc_enumerationMutation(*local_3b0 - lVar10,uVar4);
        }
        local_380 = *(undefined8 *)(local_3b8 + local_570 * 8);
        _objc_msgSend_cachedRows(local_240,local_408);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend_objectForKeyedSubscript_(uVar3,local_408,local_380);
        local_3c8 = _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_00110458)(uVar3);
        uVar3 = local_260;
        _objc_msgSend_objectForKeyedSubscript_(local_3c8,local_408,&cf_username);
        pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
        local_5a8 = pcVar8;
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_5a8 = &cf___;
        }
        bVar1 = _objc_msgSend_containsObject_(uVar3,local_408,local_5a8);
        (*(code *)PTR__objc_release_00110458)(pcVar8);
        local_3c9 = bVar1;
        _objc_msgSend_objectForKeyedSubscript_(local_3c8,local_408,&cf_hidden);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        iVar2 = _objc_msgSend_boolValue(uVar3,local_408);
        uVar9 = (uint)local_3c9;
        (*(code *)PTR__objc_release_00110458)(uVar3);
        iVar2 = iVar2 - (uVar9 & 1);
        if (iVar2 != 0) {
          local_3d8 = _objc_msgSend_mutableCopy(iVar2,local_3c8,local_408);
          _objc_msgSend_numberWithBool_(&_OBJC_CLASS___NSNumber,local_408,local_3c9 & 1);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setObject_forKeyedSubscript_(local_3d8,local_408,uVar3,&cf_hidden);
          (*(code *)PTR__objc_release_00110458)(uVar3);
          uVar3 = local_3d8;
          _objc_msgSend_cachedRows(local_240,local_408);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend_setObject_forKeyedSubscript_(uVar11,local_408,uVar3,local_380);
          (*(code *)PTR__objc_release_00110458)(uVar11);
          _objc_storeStrong(&local_3d8,0);
        }
        _objc_storeStrong(&local_3c8,0);
        local_570 = local_570 + 1;
      } while (local_570 < local_568);
      local_568 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar4,local_408,auStack_3c0,auStack_238,0x10);
      local_570 = 0;
    } while (local_568 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_storeStrong(&local_310);
  _objc_storeStrong(&local_2b0,0);
  _objc_storeStrong(&local_260,0);
  _objc_storeStrong(&local_258,0);
  _objc_storeStrong(&local_250,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

