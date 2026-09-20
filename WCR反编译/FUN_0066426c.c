// FUN_0066426c @ 0066426c

void FUN_0066426c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  cfstringStruct *local_280;
  cfstringStruct *local_278;
  cfstringStruct *local_238;
  cfstringStruct *local_200;
  cfstringStruct *local_1b8;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  byte local_fa;
  byte local_f9;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  int local_d0;
  long local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  pcVar2 = local_b8;
  if (local_b0 != (cfstringStruct *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    pcVar3 = local_b8;
    if (((ulong)pcVar2 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_1b8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_1b8 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_1b8;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_d0 = 1;
      }
      else {
        pcVar2 = local_d8;
        FUN_00665300();
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_d8;
          FUN_006627f0();
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_d8;
            FUN_006638c8();
            if (((ulong)pcVar2 & 1) == 0) {
              pcVar2 = local_d8;
              FUN_00666cb0();
              if (((ulong)pcVar2 & 1) == 0) {
                local_d0 = 1;
              }
              else {
                pcVar2 = local_b0;
                FUN_00662d08();
                _objc_retainAutoreleasedReturnValue();
                local_e8 = pcVar2;
                FUN_00663124(pcVar2,local_b0);
                _objc_retainAutoreleasedReturnValue();
                local_238 = pcVar2;
                if (pcVar2 == (cfstringStruct *)0x0) {
                  local_238 = &cf___;
                }
                (*(code *)PTR__objc_retain_02578638)();
                local_f0 = local_238;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
                if (pcVar2 == (cfstringStruct *)0x0) {
                  local_d0 = 1;
                }
                else {
                  pcVar2 = local_e8;
                  FUN_0066641c();
                  if (((ulong)pcVar2 & 1) == 0) {
                    pcVar2 = local_d8;
                    FUN_00666f68();
                    _objc_retainAutoreleasedReturnValue();
                    local_f9 = 0;
                    local_fa = 0;
                    local_f8 = pcVar2;
                    _memset(auStack_148,0,0x40);
                    pcVar2 = local_f8;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_278 = pcVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,
                               auStack_a8,0x10);
                    if (local_278 != (cfstringStruct *)0x0) {
                      lVar4 = *local_138;
                      local_280 = (cfstringStruct *)0x0;
                      do {
                        do {
                          if (*local_138 - lVar4 != 0) {
                            _objc_enumerationMutation(*local_138 - lVar4,pcVar2);
                          }
                          uVar5 = *(ulong *)(local_140 + (long)local_280 * 8);
                          local_108 = uVar5;
                          FUN_006677a8();
                          if ((uVar5 & 1) == 0) {
                            local_f9 = 1;
                          }
                          else {
                            local_fa = 1;
                          }
                          local_280 = (cfstringStruct *)((long)&local_280->field0_0x0 + 1);
                        } while (local_280 < local_278);
                        local_278 = pcVar2;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,
                                   auStack_148,auStack_a8,0x10);
                        local_280 = (cfstringStruct *)0x0;
                      } while (local_278 != (cfstringStruct *)0x0);
                    }
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    if (((local_fa & 1) == 0) || ((local_f9 & 1) != 0)) {
                      pcVar2 = local_f8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_count_0269cfe0);
                      if ((pcVar2 == (cfstringStruct *)0x0) &&
                         (pcVar2 = local_d8, FUN_006677a8(), ((ulong)pcVar2 & 1) != 0)) {
                        pcVar2 = local_d8;
                        FUN_00667bb8();
                        _objc_retainAutoreleasedReturnValue();
                        FUN_006653a8(&cf_b__X__O_);
                        (*(code *)PTR__objc_release_02578630)(pcVar2);
                        local_d0 = 1;
                      }
                      else {
                        local_d0 = 0;
                      }
                    }
                    else {
                      pcVar2 = local_d8;
                      FUN_00667bb8();
                      _objc_retainAutoreleasedReturnValue();
                      FUN_006653a8(&cf_b__X__O_);
                      (*(code *)PTR__objc_release_02578630)(pcVar2);
                      local_d0 = 1;
                    }
                    _objc_storeStrong(&local_f8,0);
                    if (local_d0 != 0) goto LAB_00664dd8;
                  }
                  pcVar2 = local_b0;
                  _objc_getAssociatedObject(local_b0,&DAT_028cbc80);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = local_b0;
                  local_150 = pcVar2;
                  _objc_getAssociatedObject(local_b0,&DAT_028cbc81);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar2 = local_150;
                  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_158 = pcVar3;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1)
                  ;
                  if ((((ulong)pcVar2 & 1) == 0) ||
                     (pcVar3 = local_150,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_150,PTR_s_isEqualToString__0269ccc8,local_d8),
                     pcVar2 = local_158, ((ulong)pcVar3 & 1) == 0)) {
LAB_00664c74:
                    pcVar2 = local_b0;
                    pcVar3 = local_d8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
                    _objc_setAssociatedObject(pcVar2,&DAT_028cbc80,pcVar3,3);
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                    pcVar2 = local_b0;
                    pcVar3 = local_f0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_copy_0269d150);
                    _objc_setAssociatedObject(pcVar2,&DAT_028cbc81,pcVar3,3);
                    (*(code *)PTR__objc_release_02578630)(pcVar3);
                    pcVar2 = local_d8;
                    FUN_00667bb8();
                    _objc_retainAutoreleasedReturnValue();
                    FUN_006653a8(&cf__X_SY_W_egn_);
                    (*(code *)PTR__objc_release_02578630)(pcVar2);
                    local_d0 = 0;
                  }
                  else {
                    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                    (*(code *)PTR__objc_msgSend_02578628)
                              (pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
                    if ((((ulong)pcVar2 & 1) == 0) ||
                       (pcVar2 = local_158,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_158,PTR_s_isEqualToString__0269ccc8,local_f0),
                       ((ulong)pcVar2 & 1) == 0)) goto LAB_00664c74;
                    local_d0 = 1;
                  }
                  _objc_storeStrong(&local_158);
                  _objc_storeStrong(&local_150,0);
                }
LAB_00664dd8:
                _objc_storeStrong(&local_f0);
                _objc_storeStrong(&local_e8,0);
              }
            }
            else {
              pcVar2 = local_b0;
              FUN_00662d08();
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar2;
              FUN_00663124();
              _objc_retainAutoreleasedReturnValue();
              local_200 = pcVar3;
              if (pcVar3 == (cfstringStruct *)0x0) {
                local_200 = &cf___;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_e0 = local_200;
              (*(code *)PTR__objc_release_02578630)(pcVar3);
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              local_d0 = 1;
              _objc_storeStrong(&local_e0,0);
            }
          }
          else {
            local_d0 = 1;
          }
        }
        else {
          local_d0 = 1;
        }
      }
      _objc_storeStrong(&local_d8,0);
      goto LAB_00664e08;
    }
  }
  local_d0 = 1;
LAB_00664e08:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

