// setSmallSignalSelectedUsers: @ 021816e8

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setSmallSignalSelectedUsers_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  ulong local_d0;
  ID local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_c0;
  local_c8 = IVar1;
  FUN_01fd1d24(local_c0,200);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  _memset(auStack_120,0,0x40);
  uVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_140 != 0) {
    lVar4 = *local_110;
    local_148 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,uVar2);
        }
        uVar5 = *(ulong *)(local_118 + local_148 * 8);
        local_e0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        if ((uVar5 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
  IVar1 = local_c8;
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_removeObjectForKey__0269d700,&cf_WCRefineSmallSignalSelectedUsers);
  }
  else {
    puVar3 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_setObject_forKey__026ca9e8,puVar3,&cf_WCRefineSmallSignalSelectedUsers);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

