// ensureGroupId:name:kind:scope:order: @ 01ad5f90

/* Function Stack Size: 0x38 bytes */

bool WCRefineGroupManager::ensureGroupId_name_kind_scope_order_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,
               unsigned_long_long param_6,long_long param_7)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_188;
  ulong local_180;
  undefined *local_140;
  int local_138;
  byte local_131;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  long_long local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_e8 = param_7;
  local_e0 = param_6;
  local_d8 = param_5;
  _memset(auStack_130,0,0x40);
  uVar1 = *(ulong *)(local_b8 + 8);
  (*(code *)PTR__objc_retain_02578638)();
  local_180 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_180 != 0) {
    lVar4 = *local_120;
    local_188 = 0;
    do {
      do {
        if (*local_120 - lVar4 != 0) {
          _objc_enumerationMutation(*local_120 - lVar4,uVar1);
        }
        uVar5 = *(ulong *)(local_128 + local_188 * 8);
        local_f0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_groupId_0269ea88);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        if ((uVar2 & 1) != 0) {
          local_131 = 0;
          uVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_kind_026a27e8);
          if (uVar2 != local_d8) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setKind__026ad410,local_d8);
            local_131 = 1;
          }
          uVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_scope_0269ea90);
          if (uVar2 != local_e0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setScope__026be178,local_e0);
            local_131 = 1;
          }
          uVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_name_0269d828);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (uVar5 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setName__0269e0c8,local_d0);
            local_131 = 1;
          }
          uVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_members_0269ea98);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (uVar5 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_setMembers__026b00e0,*(undefined8 *)PTR____NSArray0___02578280
                      );
            local_131 = 1;
          }
          uVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_avatarSource_026a3170);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (uVar5 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_setAvatarSource__026bdab0,&cf_official);
            local_131 = 1;
          }
          uVar2 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_avatarValue_026a3178);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (uVar5 == 0) {
            puVar3 = PTR_WCRefineGroup_026ce630;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineGroup_026ce630,PTR_s_defaultAvatarIconNameForScope_gr_026a3180,
                       local_e0,local_c8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setAvatarValue__026bdab8);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_131 = 1;
          }
          local_a9 = local_131 & 1;
          local_138 = 1;
          goto LAB_01ad64ac;
        }
        local_188 = local_188 + 1;
      } while (local_188 < local_180);
      local_180 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_188 = 0;
    } while (local_180 != 0);
  }
  local_138 = 0;
LAB_01ad64ac:
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (local_138 == 0) {
    puVar3 = PTR_WCRefineGroup_026ce630;
    _objc_alloc_init();
    local_140 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setGroupId__026a30e8,local_c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setName__0269e0c8,local_d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setKind__026ad410,local_d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setScope__026be178,local_e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setOrder__026ad418,local_e8);
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setAvatarSource__026bdab0,&cf_official);
    puVar3 = PTR_WCRefineGroup_026ce630;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroup_026ce630,PTR_s_defaultAvatarIconNameForScope_gr_026a3180,local_e0,
               local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setAvatarValue__026bdab8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(local_b8 + 8),PTR_s_addObject__0269d180,local_140);
    local_a9 = 1;
    local_138 = 1;
    _objc_storeStrong(&local_140,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

