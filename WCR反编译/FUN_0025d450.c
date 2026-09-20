// FUN_0025d450 @ 0025d450

void FUN_0025d450(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  undefined4 local_d8;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  undefined1 auStack_b0 [128];
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_c0 = param_1;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_createGroupWithAutoName_026a1100);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_c8 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_1Y_);
    local_d8 = 1;
  }
  else {
    local_30 = *(undefined8 *)(param_1 + 0x20);
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_moveMd5List_toGroupId__026a0f40,puVar1,local_c8);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_e0 = 0;
    _memset(auStack_128,0,0x40);
    puVar2 = PTR_WCRefineEmoticonGroupStore_026ce420;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonGroupStore_026ce420,PTR_s_groups_026a1048);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar2);
          }
          uVar5 = *(ulong *)(local_120 + (long)local_170 * 8);
          local_e8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupIdKey);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar5);
          if ((uVar3 & 1) != 0) {
            uVar5 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,_WCREmoticonGroupNameKey);
            _objc_retainAutoreleasedReturnValue();
            uVar3 = local_e0;
            local_e0 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar3);
            local_d8 = 2;
            goto LAB_0025d814;
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b0,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    local_d8 = 0;
LAB_0025d814:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineHelper_026ce000;
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__yeQ0_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_e0,0);
    local_d8 = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

