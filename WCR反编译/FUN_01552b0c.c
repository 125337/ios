// FUN_01552b0c @ 01552b0c

void FUN_01552b0c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_180;
  ulong local_178;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined4 local_10c;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  byte local_b9;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_1;
  local_b0 = param_1;
  if ((*(long *)(param_1 + 0x40) == DAT_028e3998) && (DAT_028e3878 == *(long *)(param_1 + 0x20))) {
    FUN_01553240(*(undefined8 *)(param_1 + 0x28));
    if (*(long *)(param_1 + 0x30) != 0) {
      FUN_01553708(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                   *(byte *)(param_1 + 0x58) & 1);
    }
    if ((*(byte *)(param_1 + 0x59) & 1) != 0) {
      local_b9 = 0;
      _memset(auStack_108,0,0x40);
      uVar1 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_gestureRecognizers_026ca650);
      _objc_retainAutoreleasedReturnValue();
      local_178 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_178 != 0) {
        lVar3 = *local_f8;
        local_180 = 0;
        do {
          do {
            if (*local_f8 - lVar3 != 0) {
              _objc_enumerationMutation(*local_f8 - lVar3,uVar1);
            }
            uVar4 = *(ulong *)(local_100 + local_180 * 8);
            puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
            local_c8 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar4 & 1) != 0) {
              local_b9 = 1;
              local_10c = 2;
              goto LAB_01552d58;
            }
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                     0x10);
          local_180 = 0;
        } while (local_178 != 0);
      }
      local_10c = 0;
LAB_01552d58:
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((local_b9 & 1) == 0) {
        if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
          puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_118 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDirection__026a5bf0,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_addGestureRecognizer__026ca4a8,local_118)
          ;
          puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_120 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDirection__026a5bf0,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_addGestureRecognizer__026ca4a8,local_120)
          ;
          if (*(long *)(param_1 + 0x50) == 0) {
            puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_128 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDirection__026a5bf0,8);
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_addGestureRecognizer__026ca4a8,
                       local_128);
            puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_130 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDirection__026a5bf0,4);
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x20),PTR_s_addGestureRecognizer__026ca4a8,
                       local_130);
            _objc_storeStrong(&local_130);
            _objc_storeStrong(&local_128,0);
          }
          _objc_storeStrong(&local_120);
          _objc_storeStrong(&local_118,0);
        }
        else {
          puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_138 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDirection__026a5bf0,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_addGestureRecognizer__026ca4a8,local_138)
          ;
          puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_140 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDirection__026a5bf0,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_addGestureRecognizer__026ca4a8,local_140)
          ;
          puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_148 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDirection__026a5bf0,8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_addGestureRecognizer__026ca4a8,local_148)
          ;
          puVar2 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_026ce7c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_150 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDirection__026a5bf0,4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_addGestureRecognizer__026ca4a8,local_150)
          ;
          _objc_storeStrong(&local_150);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
          _objc_storeStrong(&local_138,0);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

