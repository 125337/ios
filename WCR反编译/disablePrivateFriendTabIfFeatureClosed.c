// disablePrivateFriendTabIfFeatureClosed @ 01518580

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramGroupingStore::disablePrivateFriendTabIfFeatureClosed(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  byte local_c1;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_c1 = 0;
    _memset(auStack_110,0,0x40);
    IVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cachedTabs_026b0180);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar4 = *local_100;
      local_148 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,IVar3);
          }
          uVar5 = *(ulong *)(local_108 + local_148 * 8);
          local_d0 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_kind_026a27e8);
          if ((uVar5 == 5) &&
             (uVar5 = local_d0,
             (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_disabled_026a2c20),
             (uVar5 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setDisabled__026b0148,1);
            local_c1 = 1;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_a9 = local_c1 & 1;
  }
  else {
    local_a9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return (uint)local_a9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

