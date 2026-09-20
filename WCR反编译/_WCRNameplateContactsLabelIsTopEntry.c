// _WCRNameplateContactsLabelIsTopEntry @ 010d60bc

byte _WCRNameplateContactsLabelIsTopEntry(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_188;
  undefined *local_180;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  undefined *local_e8;
  ulong local_e0;
  long local_d8;
  int local_cc;
  ulong local_c8;
  byte local_b9;
  undefined8 local_b8;
  long *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  if (local_c8 == 0) {
    local_b9 = 0;
    local_cc = 1;
  }
  else {
    local_d8 = 0;
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_e0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_d8,local_e0);
      }
      _objc_storeStrong(&local_e0,0);
    }
    lVar5 = local_d8;
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_d8;
    local_d8 = lVar5;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar5 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      local_b9 = 0;
      local_cc = 1;
    }
    else {
      local_b0 = &DAT_028e3390;
      local_b8 = 0;
      _objc_storeStrong(&local_b8,&PTR___NSConcreteGlobalBlock_02585498);
      if (*local_b0 + 1 != 0) {
        _dispatch_once(*local_b0 + 1,local_b0,local_b8);
      }
      _objc_storeStrong(&local_b8,0);
      uVar2 = DAT_028e3388;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3388,PTR_s_containsObject__0269cbb8,local_d8);
      if ((uVar2 & 1) == 0) {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_contactsTopNameCustomEnabled_0269fcc8);
        if (((ulong)puVar3 & 1) == 0) {
          local_b9 = 0;
          local_cc = 1;
        }
        else {
          puVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_customContactsTopNames_0269fcd0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_f0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          if (((ulong)puVar3 & 1) == 0) {
            local_b9 = 0;
            local_cc = 1;
          }
          else {
            _memset(auStack_138,0,0x40);
            puVar3 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_allValues_0269dae8);
            _objc_retainAutoreleasedReturnValue();
            local_180 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (local_180 != (undefined *)0x0) {
              lVar5 = *local_128;
              local_188 = (undefined *)0x0;
              do {
                do {
                  if (*local_128 - lVar5 != 0) {
                    _objc_enumerationMutation(*local_128 - lVar5,puVar3);
                  }
                  uVar6 = *(ulong *)(local_130 + (long)local_188 * 8);
                  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_f8 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
                  uVar2 = local_f8;
                  if ((uVar6 & 1) != 0) {
                    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
                    _objc_retainAutoreleasedReturnValue();
                    local_140 = uVar2;
                    (*(code *)PTR__objc_release_02578630)(puVar4);
                    uVar2 = local_140;
                    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
                    if ((uVar2 == 0) ||
                       (uVar2 = local_140,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_140,PTR_s_isEqualToString__0269ccc8,local_d8),
                       (uVar2 & 1) == 0)) {
                      local_cc = 0;
                    }
                    else {
                      local_b9 = 1;
                      local_cc = 1;
                    }
                    _objc_storeStrong(&local_140,0);
                    if (local_cc != 0) goto LAB_010d666c;
                  }
                  local_188 = local_188 + 1;
                } while (local_188 < local_180);
                local_180 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,
                           auStack_a8,0x10);
                local_188 = (undefined *)0x0;
              } while (local_180 != (undefined *)0x0);
            }
            local_cc = 0;
LAB_010d666c:
            (*(code *)PTR__objc_release_02578630)(puVar3);
            if (local_cc == 0) {
              local_b9 = 0;
              local_cc = 1;
            }
          }
          _objc_storeStrong(&local_f0,0);
        }
        _objc_storeStrong(&local_e8,0);
      }
      else {
        local_b9 = 1;
        local_cc = 1;
      }
    }
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

