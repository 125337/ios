// FUN_0087a754 @ 0087a754

/* WARNING: Removing unreachable block (ram,0x0087ac40) */

void FUN_0087a754(undefined8 param_1)

{
  code *pcVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  ulong local_198;
  ulong local_190;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  cfstringStruct *local_d8;
  double local_d0;
  byte local_c2;
  byte local_c1;
  undefined4 local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  uVar3 = local_b0;
  pcVar2 = &cf_MMTableViewIndexView;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
  if ((uVar3 & 1) == 0) {
    local_c0 = 1;
  }
  else {
    uVar3 = local_b0;
    FUN_0087acf8();
    if ((uVar3 & 1) == 0) {
      local_c0 = 1;
    }
    else {
      uVar3 = local_b0;
      _objc_getAssociatedObject(local_b0,&DAT_028cd88e);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_b0;
      if ((uVar6 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar3,&DAT_028cd88e,puVar4,1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_c1 = 0;
        local_c2 = DAT_028cd862 & 1;
        dVar7 = 0.0;
        if (local_c2 == 0) {
          dVar7 = 1.0;
        }
        pcVar2 = &cf_MMTableViewIndexItem;
        local_d0 = dVar7;
        _NSClassFromString(local_c2);
        local_d8 = pcVar2;
        _memset(auStack_120,0,0x40);
        uVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_190 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_190 != 0) {
          lVar5 = *local_110;
          local_198 = 0;
          do {
            do {
              if (*local_110 - lVar5 != 0) {
                _objc_enumerationMutation(*local_110 - lVar5,uVar3);
              }
              uVar6 = *(ulong *)(local_118 + local_198 * 8);
              local_e0 = uVar6;
              if ((local_d8 != (cfstringStruct *)0x0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)
                            (uVar6,PTR_s_isKindOfClass__0269cd68,local_d8), (uVar6 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_alpha_026ca4d8);
                dVar7 = ABS(dVar7 - local_d0);
                if (DAT_02323db0 < dVar7) {
                  dVar7 = local_d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setAlpha__026ca860);
                }
              }
              local_198 = local_198 + 1;
            } while (local_198 < local_190);
            local_190 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                       0x10);
            local_198 = 0;
          } while (local_190 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setUserInteractionEnabled__026caad8,1);
        local_c0 = 0;
        _objc_setAssociatedObject(local_b0,&DAT_028cd88e,0,1);
        if ((local_c1 & 1) != 0) {
          _objc_exception_rethrow();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x87ac30);
          (*pcVar1)();
        }
        local_c0 = 0;
      }
      else {
        local_c0 = 1;
      }
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

