// isEntertainmentFakeGroupUserName: @ 00169f94

/* Function Stack Size: 0x18 bytes */

bool WCRefineClearSessionHook::isEntertainmentFakeGroupUserName_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined *local_188;
  undefined *local_180;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  ulong local_e8;
  int local_dc;
  ulong local_d8;
  SEL local_d0;
  ID local_c8;
  byte local_b9;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  uVar2 = local_d8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_d8;
  if ((uVar2 & 1) == 0) {
    local_b9 = 0;
    local_dc = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = uVar3;
    local_38 = &cf__chatroom_;
    local_30 = &cf___chatroom;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar1;
    _memset(auStack_138,0,0x40);
    puVar1 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_b8,0x10);
    if (local_180 != (undefined *)0x0) {
      lVar5 = *local_128;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,puVar1);
          }
          local_f8 = *(ulong *)(local_130 + (long)local_188 * 8);
          uVar2 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasSuffix__0269d018,local_f8);
          if ((uVar2 & 1) != 0) {
            uVar3 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
            uVar4 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
            uVar2 = local_e8;
            if (uVar4 < uVar3) {
              uVar3 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
              uVar4 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar2,PTR_s_substringToIndex__0269d6c0,uVar3 - uVar4);
              _objc_retainAutoreleasedReturnValue();
              local_140 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
              lVar6 = 0;
              if (uVar2 == 0) {
LAB_0016a2b0:
                local_dc = 0;
              }
              else {
                uVar2 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_rangeOfString__0269d838,&::cf__);
                lVar6 = uVar2 + 0x8000000000000001;
                if (lVar6 != 0) goto LAB_0016a2b0;
                lVar6 = 1;
                local_b9 = 1;
                local_dc = 1;
              }
              _objc_storeStrong(lVar6,&local_140,0);
              if (local_dc != 0) goto LAB_0016a338;
            }
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_b8,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    local_dc = 0;
LAB_0016a338:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_dc == 0) {
      local_b9 = 0;
      local_dc = 1;
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

