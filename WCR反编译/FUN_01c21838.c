// FUN_01c21838 @ 01c21838

long FUN_01c21838(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong local_2e8;
  ulong local_2e0;
  ulong local_2a0;
  ulong local_298;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  ulong local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  ulong local_188;
  long local_180;
  ulong local_178;
  ulong local_170 [5];
  ulong local_148;
  undefined4 local_13c;
  ulong local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01c22264();
  _objc_retainAutoreleasedReturnValue();
  local_138 = param_1;
  if (param_1 == 0) {
    local_130 = 0;
    local_13c = 1;
  }
  else {
    local_148 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_valueForKey__0269d128,&cf_m_commentUploadMgr);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_148;
    local_148 = param_1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_148 == 0) {
      uVar1 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138,PTR_s_valueForKey__0269d128,&cf_commentUploadMgr);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_148;
      local_148 = uVar1;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_148;
    FUN_01c22910(local_148,"m_failedLikeQueue");
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_148;
    local_170[0] = uVar2;
    FUN_01c22910(local_148,"m_failedCommentQueue");
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_170[0];
    local_178 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_170[0],PTR_s_count_0269cfe0);
    uVar1 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_count_0269cfe0);
    local_180 = uVar2 + uVar1;
    uVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_getFailureCancelLikeItems_026c14f8
              );
    if (((uVar2 & 1) != 0) &&
       (uVar2 = local_138,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_138,PTR_s_respondsToSelector__026ca818,
                  PTR_s_removeFailureCancelLikeItem__026c1500), (uVar2 & 1) != 0)) {
      uVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_getFailureCancelLikeItems_026c14f8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_188 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
        local_180 = local_180 + uVar2;
        _memset(auStack_1d0,0,0x40);
        uVar2 = local_188;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_copy_0269d150);
        local_298 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_298 != 0) {
          lVar4 = *local_1c0;
          local_2a0 = 0;
          do {
            do {
              if (*local_1c0 - lVar4 != 0) {
                _objc_enumerationMutation(*local_1c0 - lVar4,uVar2);
              }
              local_190 = *(undefined8 *)(local_1c8 + local_2a0 * 8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_removeFailureCancelLikeItem__026c1500,local_190);
              local_2a0 = local_2a0 + 1;
            } while (local_2a0 < local_298);
            local_298 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                       0x10);
            local_2a0 = 0;
          } while (local_298 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(&local_188,0);
    }
    uVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_getFailedComment_026c1508);
    if (((uVar2 & 1) != 0) &&
       (uVar2 = local_138,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_138,PTR_s_respondsToSelector__026ca818,PTR_s_deleteFailedComment__026a47e8),
       (uVar2 & 1) != 0)) {
      uVar2 = local_138;
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_getFailedComment_026c1508);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_1d8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        _memset(auStack_220,0,0x40);
        uVar2 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_copy_0269d150);
        local_2e0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_2e0 != 0) {
          lVar4 = *local_210;
          local_2e8 = 0;
          do {
            do {
              if (*local_210 - lVar4 != 0) {
                _objc_enumerationMutation(*local_210 - lVar4,uVar2);
              }
              local_1e0 = *(undefined8 *)(local_218 + local_2e8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_138,PTR_s_deleteFailedComment__026a47e8,local_1e0);
              local_2e8 = local_2e8 + 1;
            } while (local_2e8 < local_2e0);
            local_2e0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128
                       ,0x10);
            local_2e8 = 0;
          } while (local_2e0 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      _objc_storeStrong(&local_1d8,0);
    }
    FUN_01c22c28(local_170[0]);
    if ((local_170[0] != 0) &&
       (uVar2 = local_148,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_148,PTR_s_respondsToSelector__026ca818,PTR_s_saveFailedLikeQueue_026a47e0),
       (uVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_saveFailedLikeQueue_026a47e0);
    }
    FUN_01c22c28(local_178);
    if ((local_178 != 0) &&
       (uVar2 = local_148,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_148,PTR_s_respondsToSelector__026ca818,PTR_s_saveFailedCommentQueue_026c1510
                 ), (uVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_saveFailedCommentQueue_026c1510);
    }
    uVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_respondsToSelector__026ca818,
               PTR_s_onCommentOrLikeFailQueueChange_026a46a0);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_onCommentOrLikeFailQueueChange_026a46a0)
      ;
    }
    uVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_respondsToSelector__026ca818,
               PTR_s_onCancelLikeFailureQueueChange_026c1518);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_onCancelLikeFailureQueueChange_026c1518)
      ;
    }
    local_130 = local_180;
    local_13c = 1;
    _objc_storeStrong(&local_178);
    _objc_storeStrong(local_170,0);
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

