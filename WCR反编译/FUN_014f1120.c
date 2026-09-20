// FUN_014f1120 @ 014f1120

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014f1120(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_208;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_158;
  ulong local_150;
  ushort local_142;
  ulong local_140;
  byte local_131;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  undefined4 local_cc;
  ulong local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_2);
  uVar3 = local_c0;
  if (local_c8 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
       1 < uVar3)) {
      local_b0 = &DAT_028e37a8;
      local_b8 = 0;
      _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_025862f8);
      if (*local_b0 != -1) {
        _dispatch_once(local_b0,local_b8);
      }
      _objc_storeStrong(&local_b8,0);
      uVar3 = local_c0;
      FUN_014f19b4();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      FUN_01500a0c();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = local_d8;
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_d8;
      local_d8 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar3 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
      if (uVar3 < 2) {
        local_cc = 1;
      }
      else {
        uVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,DAT_028e3798);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = uVar3;
        _memset(auStack_128,0,0x40);
        uVar3 = local_e0;
        (*(code *)PTR__objc_retain_02578638)();
        local_1c8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        if (local_1c8 != 0) {
          lVar5 = *local_118;
          local_1d0 = 0;
          do {
            do {
              if (*local_118 - lVar5 != 0) {
                _objc_enumerationMutation(*local_118 - lVar5,uVar3);
              }
              uVar6 = *(ulong *)(local_120 + local_1d0 * 8);
              puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              local_e8 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_130 = uVar6;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              uVar6 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
              if ((uVar6 < 2) ||
                 (uVar6 = local_130,
                 (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0), 0xc < uVar6
                 )) {
                local_cc = 3;
              }
              else {
                local_131 = 1;
                for (local_140 = 0; uVar6 = local_140, uVar4 = local_130,
                    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
                    uVar6 < uVar4; local_140 = local_140 + 1) {
                  uVar6 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_130,PTR_s_characterAtIndex__0269fa18,local_140);
                  local_142 = (ushort)uVar6;
                  if ((local_142 < 0x4e00) || (0x9fff < local_142)) {
                    local_131 = 0;
                    break;
                  }
                }
                if (((local_131 & 1) == 0) &&
                   (uVar6 = local_130,
                   (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0), 5 < uVar6
                   )) {
                  local_cc = 3;
                }
                else {
                  bVar1 = (local_131 & 1) == 0;
                  if (bVar1) {
                    local_208 = local_130;
                    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_lowercaseString_0269d9c0);
                    _objc_retainAutoreleasedReturnValue();
                    local_158 = local_208;
                  }
                  else {
                    local_208 = local_130;
                  }
                  (*(code *)PTR__objc_retain_02578638)();
                  local_150 = local_208;
                  if (bVar1) {
                    (*(code *)PTR__objc_release_02578630)(local_158);
                  }
                  uVar6 = DAT_028e37a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (DAT_028e37a0,PTR_s_containsObject__0269cbb8,local_150);
                  if ((((uVar6 & 1) == 0) && (uVar6 = local_150, FUN_01500c04(), (uVar6 & 1) == 0))
                     && (uVar6 = local_150, FUN_01501018(), (uVar6 & 1) == 0)) {
                    uVar6 = local_c8;
                    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
                    bVar1 = false;
                    if (899 < uVar6) {
                      uVar6 = local_c8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,local_150);
                      _objc_retainAutoreleasedReturnValue();
                      bVar1 = uVar6 == 0;
                      (*(code *)PTR__objc_release_02578630)(uVar6);
                    }
                    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                    if (bVar1) {
                      local_cc = 3;
                    }
                    else {
                      uVar6 = local_c8;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_c8,PTR_s_objectForKeyedSubscript__0269d098,local_150);
                      _objc_retainAutoreleasedReturnValue();
                      uVar4 = uVar6;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (puVar2,PTR_s_numberWithUnsignedInteger__0269e4d0,uVar4 + 1);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_c8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                                 local_150);
                      (*(code *)PTR__objc_release_02578630)(puVar2);
                      (*(code *)PTR__objc_release_02578630)(uVar6);
                      local_cc = 0;
                    }
                  }
                  else {
                    local_cc = 3;
                  }
                  _objc_storeStrong(&local_150,0);
                }
              }
              _objc_storeStrong(&local_130,0);
              local_1d0 = local_1d0 + 1;
            } while (local_1d0 < local_1c8);
            local_1c8 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                       0x10);
            local_1d0 = 0;
          } while (local_1c8 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        _objc_storeStrong(&local_e0,0);
        local_cc = 0;
      }
      _objc_storeStrong(&local_d8,0);
      goto LAB_014f1968;
    }
  }
  local_cc = 1;
LAB_014f1968:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

