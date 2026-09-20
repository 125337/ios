// FUN_01605f2c @ 01605f2c

void FUN_01605f2c(void)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  char *local_1e8;
  char *local_1e0;
  undefined *local_180;
  ulong local_168;
  int local_15c;
  ulong local_158;
  long local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100 [4];
  char *local_e0;
  char *local_d8;
  undefined4 local_cc;
  char *local_c8;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar6 = DAT_028e3c18;
  if ((DAT_028e3c18 < 1) || (lVar6 = 0, DAT_028e3c00 == 0)) {
    pcVar2 = "MMNewSessionMgr";
    _objc_getClass(lVar6);
    FUN_015f9a60();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_b0 = (undefined *)0x0;
      local_cc = 1;
    }
    else {
      local_d8 = (char *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_valueForKey__0269d128,&cf_m_arrSession);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_e0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
        pcVar2 = local_d8;
        local_d8 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_e0,0);
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      if (local_d8 == (char *)0x0) {
        local_b0 = (undefined *)0x0;
        local_cc = 1;
      }
      else {
        pcVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithCapacity__0269e038,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        local_100[0] = puVar3;
        _memset(auStack_148,0,0x40);
        pcVar2 = local_d8;
        (*(code *)PTR__objc_retain_02578638)();
        local_1e0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        if (local_1e0 != (char *)0x0) {
          lVar6 = *local_138;
          local_1e8 = (char *)0x0;
          do {
            do {
              if (*local_138 - lVar6 != 0) {
                _objc_enumerationMutation(*local_138 - lVar6,pcVar2);
              }
              uVar7 = *(ulong *)(local_140 + (long)local_1e8 * 8);
              local_150 = 0;
              local_108 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_valueForKey__0269d128,&cf_m_nsUserName);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_158 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((uVar7 & 1) != 0) {
                _objc_storeStrong(&local_150,local_158);
              }
              lVar5 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
              if (lVar5 == 0) {
                local_cc = 5;
              }
              else {
                local_15c = 0;
                uVar7 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_108,PTR_s_valueForKey__0269d128,&cf_m_uUnReadCount);
                _objc_retainAutoreleasedReturnValue();
                local_168 = uVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar7,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10)
                ;
                if ((uVar7 & 1) != 0) {
                  uVar7 = local_168;
                  (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_unsignedIntValue_0269db10);
                  local_15c = (int)uVar7;
                }
                if (local_15c != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_100[0],PTR_s_addObject__0269d180,local_150);
                }
                _objc_storeStrong(&local_168,0);
                local_cc = 0;
              }
              _objc_storeStrong(&local_158);
              _objc_storeStrong(&local_150,0);
              local_1e8 = local_1e8 + 1;
            } while (local_1e8 < local_1e0);
            local_1e0 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8
                       ,0x10);
            local_1e8 = (char *)0x0;
          } while (local_1e0 != (char *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar3 = local_100[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar3;
        local_cc = 1;
        _objc_storeStrong(local_100,0);
      }
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  else {
    local_b9 = 0;
    bVar1 = DAT_028e3c10 == (undefined *)0x0;
    if (bVar1) {
      local_180 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_180;
    }
    else {
      local_180 = DAT_028e3c10;
    }
    local_b9 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_180;
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

