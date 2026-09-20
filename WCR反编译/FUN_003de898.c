// FUN_003de898 @ 003de898

void FUN_003de898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong local_158;
  ulong local_150;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined4 local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  uVar2 = local_b0;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (lVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_bc = 1;
  }
  else {
    uVar2 = local_b0;
    FUN_003b2b98();
    if ((uVar2 & 1) != 0) {
      FUN_003de4c0(local_b0,local_b8);
      uVar2 = local_b0;
      FUN_003612b8(local_b0,&cf_menuItem);
      _objc_retainAutoreleasedReturnValue();
      FUN_003de4c0();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    _memset(auStack_108,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_138 = uVar2;
    if (uVar2 == 0) {
      local_138 = *(ulong *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_150 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
              );
    if (local_150 != 0) {
      lVar3 = *local_f8;
      local_158 = 0;
      do {
        do {
          if (*local_f8 - lVar3 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar3,local_138);
          }
          local_c8 = *(undefined8 *)(local_100 + local_158 * 8);
          FUN_003de898(local_c8,local_b8);
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
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

