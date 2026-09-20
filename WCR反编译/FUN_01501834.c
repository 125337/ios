// FUN_01501834 @ 01501834

byte FUN_01501834(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_280;
  ulong local_278;
  ulong local_230;
  ulong local_228;
  undefined1 auStack_1f8 [8];
  long local_1f0;
  long *local_1e8;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  ulong local_168;
  ushort local_15a;
  ulong local_158;
  byte local_14f;
  byte local_14e;
  byte local_14d;
  int local_14c;
  ulong local_148;
  byte local_139;
  undefined8 local_138;
  long *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  _objc_storeStrong(&local_148,param_1);
  uVar2 = local_148;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_148, (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_139 = 1;
    local_14c = 1;
  }
  else {
    local_14d = 1;
    local_14e = 0;
    local_14f = 0;
    for (local_158 = 0; uVar2 = local_158, uVar3 = local_148,
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0), uVar2 < uVar3;
        local_158 = local_158 + 1) {
      uVar2 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_characterAtIndex__0269fa18,local_158);
      local_15a = (ushort)uVar2;
      if (0x7f < local_15a) {
        local_14d = 0;
      }
      if ((0x2f < local_15a) && (local_15a < 0x3a)) {
        local_14e = 1;
      }
      if ((0x40 < local_15a) && (local_15a < 0x5b)) {
        local_14f = 1;
      }
    }
    if ((local_14d & 1) == 0) {
      local_139 = 0;
      local_14c = 1;
    }
    else if ((local_14e & 1) == 0) {
      uVar2 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_130 = &DAT_028e37e0;
      local_138 = 0;
      local_168 = uVar2;
      _objc_storeStrong(&local_138,&PTR___NSConcreteGlobalBlock_02586358);
      if (*local_130 + 1 != 0) {
        _dispatch_once(*local_130 + 1,local_130,local_138);
      }
      _objc_storeStrong(&local_138,0);
      _memset(auStack_1b0,0,0x40);
      uVar2 = DAT_028e37d0;
      (*(code *)PTR__objc_retain_02578638)();
      local_228 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10);
      if (local_228 != 0) {
        lVar5 = *local_1a0;
        local_230 = 0;
        do {
          do {
            if (*local_1a0 - lVar5 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar5,uVar2);
            }
            local_170 = *(ulong *)(local_1a8 + local_230 * 8);
            uVar3 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
            uVar4 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
            if ((uVar4 < uVar3) &&
               (uVar3 = local_168,
               (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_hasSuffix__0269d018,local_170),
               (uVar3 & 1) != 0)) {
              local_139 = 1;
              local_14c = 1;
              goto LAB_01501c44;
            }
            local_230 = local_230 + 1;
          } while (local_230 < local_228);
          local_228 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_230 = 0;
        } while (local_228 != 0);
      }
      local_14c = 0;
LAB_01501c44:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_14c == 0) {
        uVar2 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_hasPrefix__0269d320,&cf_com);
        if ((((uVar2 & 1) == 0) &&
            (uVar2 = local_168,
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_hasPrefix__0269d320,&cf_http),
            (uVar2 & 1) == 0)) &&
           (uVar2 = local_168,
           (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_hasPrefix__0269d320,&cf_www),
           (uVar2 & 1) == 0)) {
          if (((local_14f & 1) == 0) &&
             (uVar2 = local_148,
             (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0), 5 < uVar2)) {
            local_139 = 1;
            local_14c = 1;
          }
          else {
            _memset(auStack_1f8,0,0x40);
            uVar2 = DAT_028e37d8;
            (*(code *)PTR__objc_retain_02578638)();
            local_278 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,auStack_128
                       ,0x10);
            if (local_278 != 0) {
              lVar5 = *local_1e8;
              local_280 = 0;
              do {
                do {
                  if (*local_1e8 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_1e8 - lVar5,uVar2);
                  }
                  local_1b8 = *(undefined8 *)(local_1f0 + local_280 * 8);
                  uVar3 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
                  if ((4 < uVar3) &&
                     (uVar3 = local_168,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_168,PTR_s_containsString__0269d0b0,local_1b8),
                     (uVar3 & 1) != 0)) {
                    local_139 = 1;
                    local_14c = 1;
                    goto LAB_01501ec4;
                  }
                  local_280 = local_280 + 1;
                } while (local_280 < local_278);
                local_278 = uVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f8,
                           auStack_128,0x10);
                local_280 = 0;
              } while (local_278 != 0);
            }
            local_14c = 0;
LAB_01501ec4:
            (*(code *)PTR__objc_release_02578630)(uVar2);
            if (local_14c == 0) {
              local_139 = 0;
              local_14c = 1;
            }
          }
        }
        else {
          local_139 = 1;
          local_14c = 1;
        }
      }
      _objc_storeStrong(&local_168,0);
    }
    else {
      local_139 = 1;
      local_14c = 1;
    }
  }
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_139 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

