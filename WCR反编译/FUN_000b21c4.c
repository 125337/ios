// FUN_000b21c4 @ 000b21c4

ulong FUN_000b21c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_240;
  undefined *local_238;
  ulong local_1a8;
  ulong local_160;
  ulong local_158;
  int local_14c;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_e8;
  byte local_d9;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_1;
  uStack_c8 = param_2;
  _objc_storeStrong(&local_d8,param_3);
  local_38 = &cf_MMTabBarItemView;
  local_30 = &cf_UITabBarButton;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_d9 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar3;
  _memset(auStack_140,0,0x40);
  puVar3 = local_e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_238 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_b8,0x10);
  if (local_238 != (undefined *)0x0) {
    lVar5 = *local_130;
    local_240 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar5 != 0) {
          _objc_enumerationMutation(*local_130 - lVar5,puVar3);
        }
        local_100 = *(undefined8 *)(local_138 + (long)local_240 * 8);
        uVar6 = local_d8;
        FUN_000b2940(local_d8,local_100);
        _objc_retainAutoreleasedReturnValue();
        local_148 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_count_0269cfe0);
        if (uVar6 == 0) {
          uVar6 = 3;
          local_14c = 3;
        }
        else {
          local_158 = 0;
          while( true ) {
            uVar1 = local_158;
            uVar4 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
            uVar6 = uVar1 - uVar4;
            if (uVar4 <= uVar1) break;
            uVar6 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_148,PTR_s_objectAtIndexedSubscript__0269cc78,local_158);
            _objc_retainAutoreleasedReturnValue();
            local_160 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_bounds_026ca548);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_convertRect_toView__0269ded8,local_d8)
            ;
            uVar6 = local_160;
            FUN_000b2fb8(local_160,local_158);
            local_1a8 = uVar6;
            if (uVar6 == 0x7fffffffffffffff) {
              local_1a8 = local_158;
            }
            if (((local_d9 & 1) == 0) || (uVar6 = local_1a8, FUN_000b27e0(), (uVar6 & 1) == 0)) {
              uVar2 = (uint)uVar6;
              _CGRectInset();
              _CGRectContainsPoint();
              if ((uVar2 & 1) == 0) {
                local_14c = 0;
              }
              else {
                local_c0 = local_1a8;
                local_14c = 1;
              }
            }
            else {
              local_14c = 6;
            }
            _objc_storeStrong(&local_160,0);
            if ((local_14c != 0) && (uVar6 = (ulong)(local_14c - 6U), local_14c - 6U != 0))
            goto LAB_000b266c;
            local_158 = local_158 + 1;
          }
          local_14c = 0;
        }
LAB_000b266c:
        _objc_storeStrong(uVar6,&local_148,0);
        if ((local_14c != 0) && (local_14c != 3)) goto LAB_000b270c;
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_b8,0x10)
      ;
      local_240 = (undefined *)0x0;
    } while (local_238 != (undefined *)0x0);
  }
  local_14c = 0;
LAB_000b270c:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_14c == 0) {
    local_c0 = 0xffffffffffffffff;
    local_14c = 1;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

