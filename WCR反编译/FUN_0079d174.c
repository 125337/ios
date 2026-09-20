// FUN_0079d174 @ 0079d174

void FUN_0079d174(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong local_158;
  ulong local_150;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  long local_c0;
  undefined4 local_b8;
  byte local_b1;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b1 = param_2;
  if (local_b0 == 0) {
    local_b8 = 1;
  }
  else {
    local_c0 = 0x24f6e1;
    _memset(auStack_108,0,0x40);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar3;
    if (uVar3 == 0) {
      local_138 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_150 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
              );
    if (local_150 != 0) {
      lVar2 = *local_f8;
      local_158 = 0;
      do {
        do {
          if (*local_f8 - lVar2 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar2,local_138);
          }
          uVar3 = *(ulong *)(local_100 + local_158 * 8);
          puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_c8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((((uVar3 & 1) != 0) &&
               (uVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tag_026cab98)
               , local_c0 <= (long)uVar3)) &&
              (uVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tag_026cab98),
              (long)uVar3 < (long)(&DAT_00002710 + local_c0))) &&
             (uVar3 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isHidden_026ca768),
             (uint)uVar3 != (local_b1 & 1))) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setHidden__026ca970,local_b1 & 1);
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                   0x10);
        local_158 = 0;
      } while (local_150 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_138);
    local_b8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

