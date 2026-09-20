// FUN_007dd650 @ 007dd650

byte FUN_007dd650(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint local_230;
  ulong local_1e0;
  ulong local_1d8;
  undefined *local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  int local_e0;
  ulong local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  uVar3 = local_d0;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0),
     uVar3 == 0)) {
    local_c1 = 0;
    local_e0 = 1;
    goto LAB_007ddda8;
  }
  uVar3 = local_d0;
  FUN_007ce1d4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_e8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     ((uVar3 = local_e8, (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
      uVar3 == 0 ||
      (uVar3 = local_e8,
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,local_d0),
      (uVar3 & 1) != 0)))) {
    uVar3 = DAT_028cccb0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = DAT_028cccb0,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccb0,PTR_s_count_0269cfe0), uVar3 != 0)) {
      _memset(auStack_130,0,0x40);
      uVar3 = DAT_028cccb0;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccb0,PTR_s_allValues_0269dae8);
      _objc_retainAutoreleasedReturnValue();
      local_1d8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1d8 != 0) {
        lVar4 = *local_120;
        local_1e0 = 0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,uVar3);
            }
            uVar5 = *(ulong *)(local_128 + local_1e0 * 8);
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_f0 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((((uVar5 & 1) != 0) &&
                (uVar5 = local_f0,
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0), uVar5 != 0))
               && (uVar5 = local_d0,
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d0,PTR_s_isEqualToString__0269ccc8,local_f0), (uVar5 & 1) != 0))
            {
              local_c1 = 1;
              local_e0 = 1;
              goto LAB_007ddb20;
            }
            local_1e0 = local_1e0 + 1;
          } while (local_1e0 < local_1d8);
          local_1d8 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1e0 = 0;
        } while (local_1d8 != 0);
      }
      local_e0 = 0;
LAB_007ddb20:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_e0 != 0) goto LAB_007ddd88;
    }
    bVar1 = false;
    uVar3 = local_d0;
    FUN_007d0814();
    local_230 = 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_d0;
      FUN_007d1248();
      local_230 = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_d0;
        FUN_007d147c();
        local_230 = 1;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_d0;
          FUN_007d0a9c();
          local_230 = 1;
          if ((uVar3 & 1) == 0) {
            uVar3 = local_d0;
            FUN_007d0d5c();
            local_230 = 1;
            if ((uVar3 & 1) == 0) {
              uVar3 = local_d0;
              FUN_007d0ff0();
              local_230 = 1;
              if ((uVar3 & 1) == 0) {
                uVar5 = local_d0;
                FUN_007d16a4();
                uVar3 = local_d0;
                local_230 = 1;
                if ((uVar5 & 1) == 0) {
                  local_c0 = &cf_cN;
                  local_b8 = &cf_Plugin;
                  local_b0 = &cf_Plugins;
                  local_138 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
                  _objc_retainAutoreleasedReturnValue();
                  bVar1 = true;
                  FUN_007c8de0();
                  local_230 = (uint)uVar3;
                }
              }
            }
          }
        }
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    if ((local_230 & 1) == 0) {
      local_c1 = 0;
      local_e0 = 1;
    }
    else {
      local_c1 = 1;
      local_e0 = 1;
    }
  }
  else {
    local_c1 = 1;
    local_e0 = 1;
  }
LAB_007ddd88:
  _objc_storeStrong(&local_e8,0);
LAB_007ddda8:
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

