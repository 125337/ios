// FUN_010cbfb4 @ 010cbfb4

byte FUN_010cbfb4(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_180;
  ulong local_158;
  ulong local_150;
  ulong local_130;
  int local_128;
  bool local_121;
  ulong local_120;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  byte local_b9;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_b9 = 0;
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  _memset(auStack_110,0,0x40);
  uVar2 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_150 != 0) {
    lVar5 = *local_100;
    local_158 = 0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,uVar2);
        }
        uVar6 = *(ulong *)(local_108 + local_158 * 8);
        local_d0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_live);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        uVar4 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_121 = false;
        bVar1 = (uVar4 & 1) == 0;
        if (bVar1) {
          local_180 = 0;
        }
        else {
          local_180 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_live);
          _objc_retainAutoreleasedReturnValue();
          local_120 = local_180;
        }
        local_121 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_118 = local_180;
        if ((local_121 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_120);
        }
        (*(code *)PTR__objc_release_02578630)(uVar6);
        uVar4 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
        if (uVar4 == 0) {
          local_128 = 3;
        }
        else {
          local_b9 = 1;
          uVar4 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_sight);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_130 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((uVar4 & 1) == 0) ||
             (puVar3 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_c8,PTR_s_fileExistsAtPath__026ca630,local_130),
             ((ulong)puVar3 & 1) == 0)) {
            local_a9 = 0;
            local_128 = 1;
          }
          else {
            local_128 = 0;
          }
          _objc_storeStrong(&local_130,0);
        }
        _objc_storeStrong(&local_118,0);
        if ((local_128 != 0) && (local_128 != 3)) goto LAB_010cc37c;
        local_158 = local_158 + 1;
      } while (local_158 < local_150);
      local_150 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_158 = 0;
    } while (local_150 != 0);
  }
  local_128 = 0;
LAB_010cc37c:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_128 == 0) {
    local_a9 = local_b9 & 1;
    local_128 = 1;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

