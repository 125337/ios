// FUN_005e36bc @ 005e36bc

byte FUN_005e36bc(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_248;
  ulong local_240;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  int local_d8;
  undefined1 *local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar3 = local_b8;
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_c8 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar3 & 1) == 0) ||
     (uVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     uVar3 = local_c0, uVar2 == 0)) {
    local_a9 = 0;
    local_d8 = 1;
    goto LAB_005e3ee8;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_a9 = 0;
    local_d8 = 1;
    goto LAB_005e3ee8;
  }
  uVar3 = local_b8;
  FUN_005e2a48();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    _objc_storeStrong(&local_e0,local_b8);
  }
  uVar3 = local_b8;
  FUN_005e309c();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = uVar3;
  FUN_005e2dbc();
  _objc_retainAutoreleasedReturnValue();
  local_f0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_a9 = 0;
    local_d8 = 1;
  }
  else {
    uVar3 = local_c0;
    FUN_005e3f6c();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
LAB_005e3aec:
      uVar3 = local_c0;
      FUN_005e42f8();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_e0;
      local_108 = uVar3;
      FUN_005e4b6c(local_e0,uVar3);
      if ((uVar2 & 1) == 0) {
        uVar3 = local_c0;
        FUN_005e4ff8();
        _objc_retainAutoreleasedReturnValue();
        local_110 = uVar3;
        _memset(auStack_158,0,0x40);
        uVar3 = local_110;
        (*(code *)PTR__objc_retain_02578638)();
        local_240 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        if (local_240 != 0) {
          lVar4 = *local_148;
          local_248 = 0;
          do {
            do {
              if (*local_148 - lVar4 != 0) {
                _objc_enumerationMutation(*local_148 - lVar4,uVar3);
              }
              lVar5 = *(long *)(local_150 + local_248 * 8);
              local_118 = lVar5;
              FUN_005e2dbc();
              _objc_retainAutoreleasedReturnValue();
              local_160 = lVar5;
              (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
              if (lVar5 == 0) {
                local_d8 = 3;
              }
              else {
                uVar2 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f0,PTR_s_isEqualToString__0269ccc8,local_160);
                if (((uVar2 & 1) == 0) &&
                   (uVar2 = local_f0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_f0,PTR_s_containsString__0269d0b0,local_160), (uVar2 & 1) == 0))
                {
                  local_d8 = 0;
                }
                else {
                  local_a9 = 1;
                  local_d8 = 1;
                }
              }
              _objc_storeStrong(&local_160,0);
              if ((local_d8 != 0) && (local_d8 != 3)) goto LAB_005e3de0;
              local_248 = local_248 + 1;
            } while (local_248 < local_240);
            local_240 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                       0x10);
            local_248 = 0;
          } while (local_240 != 0);
        }
        local_d8 = 0;
LAB_005e3de0:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_d8 == 0) {
          local_a9 = 0;
          local_d8 = 1;
        }
        _objc_storeStrong(&local_110,0);
      }
      else {
        local_a9 = 1;
        local_d8 = 1;
      }
      _objc_storeStrong(&local_108,0);
    }
    else {
      uVar2 = local_f8;
      FUN_005e2dbc(uVar3);
      _objc_retainAutoreleasedReturnValue();
      local_100 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      uVar3 = 0;
      if (uVar2 == 0) {
LAB_005e3ac8:
        local_d8 = 0;
      }
      else {
        uVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isEqualToString__0269ccc8,local_100);
        uVar3 = uVar2 & 0xffffffff;
        if ((uVar2 & 1) == 0) goto LAB_005e3ac8;
        if (local_c8 != (undefined1 *)0x0) {
          *local_c8 = 1;
        }
        uVar3 = 1;
        local_a9 = 1;
        local_d8 = 1;
      }
      _objc_storeStrong(uVar3,&local_100,0);
      if (local_d8 == 0) goto LAB_005e3aec;
    }
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
LAB_005e3ee8:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

