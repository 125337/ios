// FUN_002369ac @ 002369ac

void FUN_002369ac(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_318;
  undefined *local_310;
  byte local_2ec;
  ulong local_2e0;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  ulong local_1d8;
  bool local_1c9;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  byte local_1a9;
  ulong local_198;
  ulong local_190;
  ulong local_188;
  ulong local_180;
  undefined *local_178;
  undefined *local_170;
  undefined4 local_168;
  ulong local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  undefined1 auStack_130 [128];
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  _objc_storeStrong(&local_158,param_1);
  if ((((local_158 == 0) ||
       (uVar2 = local_158,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_158,PTR_s_respondsToSelector__026ca818,PTR_s_getCellCount_026a0b78),
       (uVar2 & 1) == 0)) ||
      (uVar2 = local_158,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_158,PTR_s_respondsToSelector__026ca818,PTR_s_getCellAt__026a0b80),
      (uVar2 & 1) == 0)) ||
     (uVar2 = local_158,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_158,PTR_s_respondsToSelector__026ca818,PTR_s_removeCellAt__026a0b88),
     puVar3 = PTR__OBJC_CLASS___NSSet_026ce150, (uVar2 & 1) == 0)) {
    local_168 = 1;
  }
  else {
    FUN_002375bc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_170 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
    local_b0 = &cf_WCRefine;
    local_a8 = &cf_SYW;
    local_a0 = &cf_gw_YSDeaS;
    local_98 = &cf_gwO_;
    local_90 = &cf_n_J_Y__<P;
    local_88 = &cf_n_J_YNl<P;
    local_80 = &cf_n_J_YNnm<P;
    local_78 = &cf__T_u_IN4YP;
    local_70 = &cf_y_uvh4YP>f_y;
    local_68 = &cf_NbdkN_S;
    local_60 = &cf__T_umo_O__;
    local_58 = &cf_A;
    local_50 = &cf__T_u;
    local_48 = &cf_A;
    local_40 = &cf_RgZSO;
    local_38 = &cf__S_NRg;
    local_30 = &cf_sQ_VY_;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b0,
               0x11);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    uVar2 = local_158;
    (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_getCellCount_026a0b78);
    local_180 = uVar2;
    local_188 = uVar2;
    while (local_188 = local_188 - 1, -1 < (long)local_188) {
      uVar2 = local_158;
      (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_getCellAt__026a0b80,local_188);
      _objc_retainAutoreleasedReturnValue();
      local_190 = uVar2;
      if (uVar2 == 0) {
        local_168 = 4;
      }
      else {
        _objc_getAssociatedObject(uVar2,DAT_026dfb60);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if ((uVar5 & 1) == 0) {
          local_198 = 0;
          uVar5 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_190,PTR_s_valueForKey__0269d128,&cf_cellConfig);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_198;
          local_198 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (local_198 == 0) {
            uVar5 = local_190;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_190,PTR_s_valueForKey__0269d128,&cf__cellConfig);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_198;
            local_198 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          local_1a9 = 0;
          if ((local_198 != 0) &&
             (uVar2 = local_198,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_198,PTR_s_respondsToSelector__026ca818,PTR_s_clickAction_026a0b90),
             (uVar2 & 1) != 0)) {
            local_2e0 = local_198;
            (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_clickAction_026a0b90);
            local_1c9 = false;
            bVar1 = local_2e0 == 0;
            local_1b8 = local_2e0;
            if (bVar1) {
              local_2e0 = 0;
            }
            else {
              _NSStringFromSelector();
              _objc_retainAutoreleasedReturnValue();
              local_1c8 = local_2e0;
            }
            local_1c9 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_1c0 = local_2e0;
            if ((local_1c9 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1c8);
            }
            local_2ec = 0;
            if (local_1c0 != 0) {
              puVar3 = local_170;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_containsObject__0269cbb8,local_1c0);
              local_2ec = (byte)puVar3;
            }
            local_1a9 = local_2ec & 1;
            _objc_storeStrong(&local_1c0,0);
          }
          if ((local_1a9 & 1) == 0) {
            local_1d8 = 0;
            _memset(auStack_220,0,0x40);
            local_150 = &cf_cellConfig_leftConfig_title;
            local_148 = &cf_leftConfig_title;
            local_140 = &cf_cellConfig_title;
            local_138 = &cf_title;
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_150,4);
            _objc_retainAutoreleasedReturnValue();
            local_310 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_310 != (undefined *)0x0) {
              lVar6 = *local_210;
              local_318 = (undefined *)0x0;
              do {
                do {
                  if (*local_210 - lVar6 != 0) {
                    _objc_enumerationMutation(*local_210 - lVar6,puVar3);
                  }
                  local_1e0 = *(undefined8 *)(local_218 + (long)local_318 * 8);
                  uVar5 = local_190;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_190,PTR_s_valueForKeyPath__026a0b98,local_1e0);
                  _objc_retainAutoreleasedReturnValue();
                  uVar2 = local_1d8;
                  local_1d8 = uVar5;
                  (*(code *)PTR__objc_release_02578630)(uVar2);
                  uVar2 = local_1d8;
                  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
                  if (((uVar2 & 1) != 0) &&
                     (uVar2 = local_1d8,
                     (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0),
                     uVar2 != 0)) {
                    local_168 = 7;
                    goto LAB_0023740c;
                  }
                  local_318 = local_318 + 1;
                } while (local_318 < local_310);
                local_310 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                           auStack_130,0x10);
                local_318 = (undefined *)0x0;
              } while (local_310 != (undefined *)0x0);
            }
            local_168 = 0;
LAB_0023740c:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            puVar3 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_containsObject__0269cbb8,local_1d8);
            local_1a9 = (byte)puVar3;
            _objc_storeStrong(&local_1d8,0);
          }
          if ((local_1a9 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_removeCellAt__026a0b88,local_188);
          }
          _objc_storeStrong(&local_198,0);
          local_168 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_removeCellAt__026a0b88,local_188);
          local_168 = 4;
        }
      }
      _objc_storeStrong(&local_190,0);
    }
    _objc_storeStrong(&local_178);
    _objc_storeStrong(&local_170,0);
    local_168 = 0;
  }
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

