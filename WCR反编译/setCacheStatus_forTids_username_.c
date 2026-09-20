// setCacheStatus:forTids:username: @ 010c93dc

/* Function Stack Size: 0x28 bytes */

void WCRefineMomentsMonitor::setCacheStatus_forTids_username_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  ID IVar1;
  ulong uVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  long lVar8;
  ulong local_178;
  ulong local_170;
  long local_138 [3];
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  byte local_d5;
  undefined4 local_d4;
  long local_d0;
  ulong local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  lVar8 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if ((lVar8 == 0) ||
     (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     IVar1 = local_b0, uVar2 == 0)) {
    local_d4 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(IVar1);
    local_d5 = 0;
    _memset(auStack_120,0,0x40);
    uVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_170 != 0) {
      lVar8 = *local_110;
      local_178 = 0;
      do {
        do {
          if (*local_110 - lVar8 != 0) {
            _objc_enumerationMutation(*local_110 - lVar8,uVar2);
          }
          local_e0 = *(undefined8 *)(local_118 + local_178 * 8);
          lVar3 = local_d0;
          FUN_010b8aa8(local_d0,local_e0);
          _objc_retainAutoreleasedReturnValue();
          local_138[0] = lVar3;
          (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
          if (lVar3 == 0) {
            local_d4 = 3;
          }
          else {
            IVar4 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cacheStatuses_026ae720);
            _objc_retainAutoreleasedReturnValue();
            IVar5 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar5);
            (*(code *)PTR__objc_release_02578630)(IVar4);
            if (IVar6 == local_c0) {
              local_d4 = 3;
            }
            else if ((IVar6 == 3) && (local_c0 != 3)) {
              local_d4 = 3;
            }
            else {
              puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
                         local_c0);
              _objc_retainAutoreleasedReturnValue();
              IVar4 = local_b0;
              (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cacheStatuses_026ae720);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(IVar4);
              (*(code *)PTR__objc_release_02578630)(puVar7);
              local_d5 = 1;
              local_d4 = 0;
            }
          }
          _objc_storeStrong(local_138,0);
          local_178 = local_178 + 1;
        } while (local_178 < local_170);
        local_170 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_178 = 0;
      } while (local_170 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_d5 & 1) != 0) {
      puVar7 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_cacheStatuses_026ae720);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_setObject_forKey__026ca9e8,IVar5,&cf_WCRefineMomentsCacheStatuses);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    _objc_sync_exit(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

