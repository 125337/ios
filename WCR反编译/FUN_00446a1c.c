// FUN_00446a1c @ 00446a1c

void FUN_00446a1c(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double local_588;
  double local_558;
  double local_550;
  undefined **local_4f0;
  undefined8 local_4e0;
  cfstringStruct *local_498;
  cfstringStruct *local_490;
  byte local_460;
  cfstringStruct *local_448;
  ulong local_418;
  ulong local_410;
  undefined8 local_238;
  undefined8 local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  ulong local_1e0;
  cfstringStruct *local_1d8;
  long local_1d0;
  byte local_1c2;
  byte local_1c1;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  cfstringStruct *local_178;
  double local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined4 local_150;
  ulong local_140;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_viewWithTag__026cabe0,0x2c63f);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
  local_140 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((param_1 & 1) == 0) {
    local_150 = 1;
  }
  else {
    puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_selectedFilterPackRel_026a3dd0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_s_FG_1_026a1018;
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_158 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
    _objc_retainAutoreleasedReturnValue();
    FUN_004584a0();
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar2 = PTR_s_Link_100_026a1028;
    dVar16 = 1.0;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    dVar13 = DAT_02323d98;
    local_588 = DAT_02323d90;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323da0,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    FUN_004584a0();
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_170 = 30.0;
    _memset(auStack_1b8,0,0x40);
    uVar5 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_410 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_410 != 0) {
      lVar7 = *local_1a8;
      local_418 = 0;
      do {
        do {
          if (*local_1a8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar7,uVar5);
          }
          pcVar8 = *(cfstringStruct **)(local_1b0 + local_418 * 8);
          local_178 = pcVar8;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_accessibilityIdentifier_0269ec20);
          _objc_retainAutoreleasedReturnValue();
          local_448 = pcVar8;
          if (pcVar8 == (cfstringStruct *)0x0) {
            local_448 = &cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_1c0 = local_448;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          pcVar8 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_hasPrefix__0269d320,&cf___);
          local_1c1 = (byte)pcVar8;
          pcVar8 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_isEqualToString__0269ccc8,&cf___manage__);
          if ((((ulong)pcVar8 & 1) == 0) || (DAT_028ca9b8 == 0)) {
            local_460 = 0;
            if ((local_1c1 & 1) == 0) {
              pcVar8 = local_1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1c0,PTR_s_isEqualToString__0269ccc8,local_158);
              local_460 = (byte)pcVar8;
            }
            local_1c2 = local_460 & 1;
            local_1d0 = 0;
            pcVar8 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_viewWithTag__026cabe0,0x2c640);
            _objc_retainAutoreleasedReturnValue();
            local_1d8 = pcVar8;
            _memset(auStack_220,0,0x40);
            pcVar8 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_subviews_026cab40);
            _objc_retainAutoreleasedReturnValue();
            local_490 = pcVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_490 != (cfstringStruct *)0x0) {
              lVar9 = *local_210;
              local_498 = (cfstringStruct *)0x0;
              do {
                do {
                  if (*local_210 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_210 - lVar9,pcVar8);
                  }
                  uVar10 = *(ulong *)(local_218 + (long)local_498 * 8);
                  puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
                  local_1e0 = uVar10;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar2)
                  ;
                  if ((uVar10 & 1) != 0) {
                    _objc_storeStrong(&local_1d0,local_1e0);
                  }
                  local_498 = (cfstringStruct *)((long)&local_498->field0_0x0 + 1);
                } while (local_498 < local_490);
                local_490 = pcVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                           auStack_128,0x10);
                local_498 = (cfstringStruct *)0x0;
              } while (local_490 != (cfstringStruct *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar8);
            if (local_1d0 == 0) {
              local_150 = 3;
            }
            else {
              bVar1 = (local_1c2 & 1) == 0;
              if (bVar1) {
                dVar11 = 13.0;
                local_4e0 = 0;
                FUN_00459420();
                _objc_retainAutoreleasedReturnValue();
                local_238 = local_4e0;
              }
              else {
                dVar11 = 14.0;
                local_4e0 = 1;
                FUN_00459420();
                _objc_retainAutoreleasedReturnValue();
                local_228 = local_4e0;
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setFont__026ca958,local_4e0);
              if (bVar1) {
                (*(code *)PTR__objc_release_02578630)(local_238);
              }
              else {
                (*(code *)PTR__objc_release_02578630)(local_228);
              }
              if ((local_1c2 & 1) == 0) {
                local_4f0 = &local_160;
              }
              else {
                local_4f0 = &local_168;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1d0,PTR_s_setTextColor__026caa98,*local_4f0);
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_sizeToFit_0269ec08);
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_bounds_026ca548);
              _CGRectGetWidth();
              dVar12 = dVar11;
              (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_bounds_026ca548);
              _CGRectGetHeight(dVar12,dVar13);
              if ((local_1c2 & 1) == 0) {
                local_550 = 0.0;
              }
              else {
                local_550 = 3.0;
              }
              dVar13 = (local_170 - (dVar12 + local_550)) * 0.5;
              local_558 = dVar13;
              if (dVar13 <= 0.0) {
                local_558 = 0.0;
              }
              dVar14 = local_558;
              (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_bounds_026ca548);
              _CGRectGetWidth(dVar14,dVar13,local_588,dVar16);
              uVar15 = 0;
              dVar13 = local_558;
              local_588 = dVar14;
              dVar16 = dVar12;
              FUN_004593d4();
              (*(code *)PTR__objc_msgSend_02578628)(uVar15,local_1d0,PTR_s_setFrame__026ca960);
              pcVar8 = local_1d8;
              if ((local_1c2 & 1) == 0) {
                if (local_1d8 != (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setHidden__026ca970,1);
                }
              }
              else {
                local_588 = dVar11 * 0.7;
                if (local_588 < 12.0) {
                  local_588 = 12.0;
                }
                puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_isKindOfClass__0269cd68,puVar2);
                if (((ulong)pcVar8 & 1) == 0) {
                  pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___UIView_026cdfd8;
                  _objc_alloc_init();
                  pcVar8 = local_1d8;
                  local_1d8 = pcVar6;
                  (*(code *)PTR__objc_release_02578630)(pcVar8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d8,PTR_s_setTag__026caa80,DAT_023241a8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1d8,PTR_s_setUserInteractionEnabled__026caad8,0);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_178,PTR_s_addSubview__026ca4c0,local_1d8);
                }
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_setHidden__026ca970,0);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d8,PTR_s_setBackgroundColor__026ca888,local_168);
                pcVar8 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_layer_026ca788);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
                (*(code *)PTR__objc_release_02578630)(pcVar8);
                dVar11 = (dVar14 - local_588) * 0.5;
                dVar13 = local_558 + dVar12 + 1.0;
                dVar16 = 2.0;
                FUN_004593d4();
                (*(code *)PTR__objc_msgSend_02578628)(dVar11,local_1d8,PTR_s_setFrame__026ca960);
              }
              local_150 = 0;
            }
            _objc_storeStrong(&local_1d8);
            _objc_storeStrong(&local_1d0,0);
          }
          else {
            FUN_00457ac4(local_178);
            local_150 = 3;
          }
          _objc_storeStrong(&local_1c0,0);
          local_418 = local_418 + 1;
        } while (local_418 < local_410);
        local_410 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10
                  );
        local_418 = 0;
      } while (local_410 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    _objc_storeStrong(&local_168);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_158,0);
    local_150 = 0;
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

