// FUN_0082959c @ 0082959c

void FUN_0082959c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong local_288;
  ulong local_238;
  ulong local_230;
  ulong local_218;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  byte local_171;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  ulong local_108;
  byte local_f9;
  ulong local_f8;
  ulong local_f0;
  undefined8 local_e8;
  uint local_e0;
  ulong local_d0;
  byte local_c1;
  undefined8 local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  uVar6 = local_b8;
  local_c1 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_parentViewController_0269e500);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  FUN_00831270();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar6);
  if (local_d0 == 0) {
    local_b0 = 0;
    local_e0 = 1;
  }
  else {
    uVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_b8;
    local_e8 = uVar3;
    _objc_getAssociatedObject(local_b8,&DAT_028cd0e0);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 0;
    local_f0 = uVar6;
    _objc_getAssociatedObject(uVar6,&DAT_028cd0e1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_f0;
      _objc_getAssociatedObject(local_f0,&DAT_028cd1df);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 1;
      bVar1 = uVar2 != 0;
      local_f8 = uVar2;
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    if (bVar1) {
      local_b0 = 0;
      local_e0 = 1;
    }
    else {
      local_108 = 0;
      uVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_valueForKey__0269d128,&cf_viewControllers);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_108;
      local_108 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      _memset(auStack_158,0,0x40);
      if (local_108 == 0) {
        local_218 = *(ulong *)PTR____NSArray0___02578280;
      }
      else {
        local_218 = local_108;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_230 = local_218;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_218,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                 0x10);
      if (local_230 != 0) {
        lVar5 = *local_148;
        local_238 = 0;
        do {
          do {
            if (*local_148 - lVar5 != 0) {
              _objc_enumerationMutation(*local_148 - lVar5,local_218);
            }
            uVar6 = *(ulong *)(local_150 + local_238 * 8);
            local_118 = uVar6;
            (*(code *)PTR__objc_retain_02578638)();
            local_160 = uVar6;
            do {
              uVar6 = local_160;
              puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((uVar6 & 1) == 0) break;
              uVar6 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_visibleViewController_0269d460);
              _objc_retainAutoreleasedReturnValue();
              local_171 = 0;
              local_288 = uVar6;
              if (uVar6 == 0) {
                local_288 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_topViewController_0269e588);
                _objc_retainAutoreleasedReturnValue();
                local_170 = local_288;
              }
              local_171 = uVar6 == 0;
              (*(code *)PTR__objc_retain_02578638)();
              local_168 = local_288;
              if ((local_171 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_170);
              }
              (*(code *)PTR__objc_release_02578630)(uVar6);
              if ((local_168 == 0) || (local_168 - local_160 == 0)) {
                local_e0 = 6;
              }
              else {
                _objc_storeStrong(local_168 - local_160,&local_160,local_168);
                local_e0 = 0;
              }
              _objc_storeStrong(&local_168,0);
            } while (local_e0 == 0);
            if (local_160 - local_b8 == 0) {
              local_e0 = 4;
            }
            else {
              uVar6 = local_160;
              _objc_getAssociatedObject(local_160 - local_b8,local_160,&DAT_028cd0e0);
              _objc_retainAutoreleasedReturnValue();
              local_180 = uVar6;
              _objc_getAssociatedObject(uVar6,&DAT_028cd1d7);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              if (uVar6 == 0) {
                uVar6 = local_180;
                _objc_getAssociatedObject(local_180,&DAT_028cd0e1);
                _objc_retainAutoreleasedReturnValue();
                uVar2 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar6);
                if ((uVar2 & 1) == 0) {
                  local_e0 = 4;
                }
                else {
                  uVar6 = local_180;
                  _objc_getAssociatedObject(local_180,&DAT_028cd1e2);
                  _objc_retainAutoreleasedReturnValue();
                  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_188 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                  if (((uVar6 & 1) == 0) ||
                     (uVar6 = local_188,
                     (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_boolValue_026ca540),
                     (uint)uVar6 != (local_c1 & 1))) {
                    local_e0 = 4;
                  }
                  else {
                    uVar6 = local_180;
                    _objc_getAssociatedObject(0,local_180,&DAT_028cd1df);
                    _objc_retainAutoreleasedReturnValue();
                    local_190 = uVar6;
                    if (uVar6 != 0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_b0 = uVar6;
                    }
                    local_e0 = (uint)(uVar6 != 0);
                    _objc_storeStrong(&local_190,0);
                  }
                  _objc_storeStrong(&local_188,0);
                }
              }
              else {
                local_e0 = 4;
              }
              _objc_storeStrong(&local_180,0);
            }
            _objc_storeStrong(&local_160,0);
            if ((local_e0 != 0) && (local_e0 != 4)) goto LAB_00829f5c;
            local_238 = local_238 + 1;
          } while (local_238 < local_230);
          local_230 = local_218;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,
                     auStack_a8,0x10);
          local_238 = 0;
        } while (local_230 != 0);
      }
      local_e0 = 0;
LAB_00829f5c:
      (*(code *)PTR__objc_release_02578630)(local_218);
      if (local_e0 == 0) {
        local_b0 = 0;
        local_e0 = 1;
      }
      _objc_storeStrong(&local_108,0);
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

