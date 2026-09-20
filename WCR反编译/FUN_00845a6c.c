// FUN_00845a6c @ 00845a6c

void FUN_00845a6c(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_298;
  ulong local_290;
  ulong local_248;
  ulong local_240;
  ulong local_200;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  ulong local_150 [3];
  char *local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  pcVar1 = "WCTimelineTableView";
  _objc_getClass();
  local_138 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (uVar2 = local_130,
     (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isKindOfClass__0269cd68,pcVar1),
     (uVar2 & 1) == 0)) {
    local_200 = 0;
  }
  else {
    local_200 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_130;
  local_150[0] = local_200;
  if (local_200 == 0) {
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_198,0,0x40);
      uVar2 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_240 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_240 != 0) {
        lVar4 = *local_188;
        local_248 = 0;
        do {
          do {
            if (*local_188 - lVar4 != 0) {
              _objc_enumerationMutation(*local_188 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_190 + local_248 * 8);
            local_158 = uVar5;
            if ((local_138 != (char *)0x0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,local_138)
               , (uVar5 & 1) != 0)) {
              _objc_storeStrong(local_150,local_158);
              local_19c = 2;
              goto LAB_00845d78;
            }
            local_248 = local_248 + 1;
          } while (local_248 < local_240);
          local_240 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                     0x10);
          local_248 = 0;
        } while (local_240 != 0);
      }
      local_19c = 0;
LAB_00845d78:
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
  }
  if (local_150[0] == 0) {
    local_19c = 1;
  }
  else {
    _memset(auStack_1e8,0,0x40);
    uVar2 = local_150[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_150[0],PTR_s_visibleCells_0269fc48);
    _objc_retainAutoreleasedReturnValue();
    local_290 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_290 != 0) {
      lVar4 = *local_1d8;
      local_298 = 0;
      do {
        do {
          if (*local_1d8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_1d8 - lVar4,uVar2);
          }
          local_1a8 = *(undefined8 *)(local_1e0 + local_298 * 8);
          FUN_0082a0bc(local_1a8);
          local_298 = local_298 + 1;
        } while (local_298 < local_290);
        local_290 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        local_298 = 0;
      } while (local_290 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_19c = 0;
  }
  _objc_storeStrong(local_150);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

