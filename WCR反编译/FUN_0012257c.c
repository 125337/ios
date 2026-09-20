// FUN_0012257c @ 0012257c

long FUN_0012257c(undefined8 param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong uVar6;
  char *local_1e8;
  char *local_1e0;
  char *local_158;
  byte local_149;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  long local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  int local_c8;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  lVar5 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_b0 = 0;
    local_c8 = 1;
  }
  else {
    pcVar2 = "CContactMgr";
    _objc_getClass();
    FUN_0010f1e0();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_b0 = 0;
      local_c8 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getContactByName__0269d178,local_b8);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_b0 = 0;
        local_c8 = 1;
      }
      else {
        FUN_0010dca0(pcVar2,&cf_m_nsChatRoomMemList);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        FUN_00119ab8();
        _objc_retainAutoreleasedReturnValue();
        local_e0 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
        if (pcVar2 == (char *)0x0) {
          local_b0 = 0;
          local_c8 = 1;
        }
        else {
          FUN_0010ef9c();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = &cf_isInContactList_;
          local_e8 = pcVar2;
          _NSSelectorFromString();
          pcVar2 = local_d0;
          local_f0 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_respondsToSelector__026ca818,pcVar4);
          local_f1 = (byte)pcVar2;
          local_100 = 0;
          _memset(auStack_148,0,0x40);
          pcVar2 = local_e0;
          (*(code *)PTR__objc_retain_02578638)();
          local_1e0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          if (local_1e0 != (char *)0x0) {
            lVar5 = *local_138;
            local_1e8 = (char *)0x0;
            do {
              do {
                if (*local_138 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_138 - lVar5,pcVar2);
                }
                uVar6 = *(ulong *)(local_140 + (long)local_1e8 * 8);
                local_108 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_length_0269cca0);
                if ((((uVar6 != 0) &&
                     (uVar6 = local_108,
                     (*(code *)PTR__objc_msgSend_02578628)
                               (local_108,PTR_s_hasSuffix__0269d018,&cf__chatroom), (uVar6 & 1) == 0
                     )) && (uVar6 = local_108,
                           (*(code *)PTR__objc_msgSend_02578628)
                                     (local_108,PTR_s_containsString__0269d0b0,&cf__openim),
                           (uVar6 & 1) == 0)) &&
                   ((pcVar3 = local_e8,
                    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0),
                    pcVar3 == (char *)0x0 ||
                    (uVar6 = local_108,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_108,PTR_s_isEqualToString__0269ccc8,local_e8), (uVar6 & 1) == 0
                    )))) {
                  local_149 = 0;
                  if ((local_f1 & 1) != 0) {
                    pcVar3 = local_d0;
                    (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_f0,local_108);
                    local_149 = (byte)pcVar3;
                  }
                  if ((local_149 & 1) == 0) {
                    pcVar3 = local_d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_d0,PTR_s_getContactByName__0269d178,local_108);
                    _objc_retainAutoreleasedReturnValue();
                    puVar1 = PTR_s_isBrandContact_0269d9c8;
                    local_158 = pcVar3;
                    if (pcVar3 == (char *)0x0) {
LAB_00122b4c:
                      local_c8 = 0;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (pcVar3,PTR_s_respondsToSelector__026ca818,
                                 PTR_s_isBrandContact_0269d9c8);
                      if ((((ulong)pcVar3 & 1) == 0) ||
                         (pcVar3 = local_158,
                         (*(code *)PTR__objc_msgSend_02578628)(local_158,puVar1),
                         ((ulong)pcVar3 & 1) == 0)) {
                        puVar1 = PTR_s_isMyContact_0269ef80;
                        pcVar3 = local_158;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_158,PTR_s_respondsToSelector__026ca818,
                                   PTR_s_isMyContact_0269ef80);
                        if (((ulong)pcVar3 & 1) != 0) {
                          pcVar3 = local_158;
                          (*(code *)PTR__objc_msgSend_02578628)(local_158,puVar1);
                          local_149 = (byte)pcVar3;
                        }
                        goto LAB_00122b4c;
                      }
                      local_c8 = 3;
                    }
                    _objc_storeStrong(&local_158,0);
                    if (local_c8 != 0) goto LAB_00122b94;
                  }
                  if ((local_149 & 1) != 0) {
                    local_100 = local_100 + 1;
                  }
                }
LAB_00122b94:
                local_1e8 = local_1e8 + 1;
              } while (local_1e8 < local_1e0);
              local_1e0 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,
                         auStack_a8,0x10);
              local_1e8 = (char *)0x0;
            } while (local_1e0 != (char *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_b0 = local_100;
          local_c8 = 1;
          _objc_storeStrong(&local_e8,0);
        }
        _objc_storeStrong(&local_e0,0);
      }
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

