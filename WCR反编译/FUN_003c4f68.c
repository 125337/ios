// FUN_003c4f68 @ 003c4f68

void FUN_003c4f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  ulong local_198;
  ulong local_190;
  ulong local_178;
  undefined **local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (undefined8 *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_c0 = 0;
  local_b8 = param_2;
  _objc_storeStrong(&local_c0,param_3);
  puVar1 = &local_c8;
  local_c8 = 0;
  _objc_storeStrong(puVar1,param_4);
  if (DAT_028ca210 != (code *)0x0) {
    puVar1 = local_b0;
    (*DAT_028ca210)(local_b0,local_b8,local_c0,local_c8);
  }
  FUN_003c5414();
  uVar7 = local_c0;
  if ((((ulong)puVar1 & 1) == 0) || (local_c0 == 0)) {
    local_cc = 1;
  }
  else {
    local_d8 = 0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_c0;
    if ((uVar7 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_d8,local_c0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allValues_0269dae8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_d8;
      local_d8 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    local_d9 = 0;
    _memset(auStack_128,0,0x40);
    if (local_d8 == 0) {
      local_178 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_178 = local_d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_178,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
              );
    if (local_190 != 0) {
      lVar6 = *local_118;
      local_198 = 0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,local_178);
          }
          uVar7 = *(ulong *)(local_120 + local_198 * 8);
          local_e8 = uVar7;
          FUN_00366324();
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar7;
          FUN_003c5438();
          if ((uVar7 & 1) == 0) {
            local_cc = 3;
          }
          else {
            uVar7 = local_e8;
            FUN_0037a830(local_e8,&cf_isHidden);
            if ((uVar7 & 1) == 0) {
              uVar7 = local_130;
              FUN_003c556c();
              if ((uVar7 & 1) != 0) {
                local_d9 = 1;
              }
              local_cc = 0;
            }
            else {
              local_cc = 3;
            }
          }
          _objc_storeStrong(&local_130,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_178,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_198 = 0;
      } while (local_190 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_178);
    if ((local_d9 & 1) == 0) {
      local_cc = 1;
    }
    else {
      ppuVar4 = &PTR___NSConcreteGlobalBlock_0257cd08;
      _objc_retainBlock();
      puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      local_138 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      puVar2 = PTR___dispatch_main_q_02578680;
      if (((ulong)puVar5 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)local_138[2])();
      }
      _objc_storeStrong(&local_138,0);
      local_cc = 0;
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

