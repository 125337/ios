// msgBannerPreviewContactForUserName: @ 01b92480

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageBannerBeautifyViewController::msgBannerPreviewContactForUserName_
             (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  code *pcVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  code *local_1d0;
  code *local_1a8;
  code *local_1a0;
  code *local_178;
  ulong local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  ulong local_128;
  code *local_120;
  code *local_118;
  code *local_110;
  undefined *local_108;
  code *local_100;
  code *local_f8;
  undefined *local_f0;
  code *local_e8;
  code *local_e0;
  int local_d4;
  long local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  code *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  lVar4 = local_c8;
  FUN_01b92980();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    local_b0 = (code *)0x0;
    local_d4 = 1;
  }
  else {
    pcVar1 = "CContactMgr";
    _objc_getClass();
    FUN_01b91608();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = (code *)pcVar1;
    if ((code *)pcVar1 == (code *)0x0) {
      local_b0 = (code *)0x0;
      local_d4 = 1;
    }
    else {
      local_e8 = (code *)0x0;
      local_f0 = PTR_s_getContactByName__0269d178;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178);
      if ((((ulong)pcVar1 & 1) != 0) &&
         (pcVar2 = local_e0,
         (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_methodForSelector__0269e1d8,local_f0),
         local_f8 = pcVar2, pcVar2 != (code *)0x0)) {
        pcVar3 = local_e0;
        local_100 = pcVar2;
        (*pcVar2)(local_e0,local_f0,local_d0);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_e8;
        local_e8 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      if (local_e8 == (code *)0x0) {
        local_108 = PTR_s_getContactList_contactType__026a2fc8;
        pcVar2 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_respondsToSelector__026ca818,
                   PTR_s_getContactList_contactType__026a2fc8);
        if ((((ulong)pcVar2 & 1) != 0) &&
           (pcVar2 = local_e0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_e0,PTR_s_methodForSelector__0269e1d8,local_108), local_110 = pcVar2,
           pcVar2 != (code *)0x0)) {
          pcVar3 = local_e0;
          local_118 = pcVar2;
          (*pcVar2)(local_e0,local_108,1);
          _objc_retainAutoreleasedReturnValue();
          local_120 = pcVar3;
          _memset(auStack_168,0,0x40);
          pcVar2 = local_120;
          (*(code *)PTR__objc_retain_02578638)();
          local_1a0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_a8,
                     0x10);
          if (local_1a0 != (code *)0x0) {
            lVar4 = *local_158;
            local_1a8 = (code *)0x0;
            do {
              do {
                if (*local_158 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_158 - lVar4,pcVar2);
                }
                uVar5 = *(ulong *)(local_160 + (long)local_1a8 * 8);
                local_128 = uVar5;
                FUN_01b92aa4();
                _objc_retainAutoreleasedReturnValue();
                local_170 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_length_0269cca0);
                if (uVar5 == 0) {
                  local_d4 = 3;
                }
                else {
                  uVar5 = local_170;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_170,PTR_s_isEqualToString__0269ccc8,local_d0);
                  if ((uVar5 & 1) == 0) {
                    local_d4 = 0;
                  }
                  else {
                    _objc_storeStrong(&local_e8,local_128);
                    local_d4 = 2;
                  }
                }
                _objc_storeStrong(&local_170,0);
                if ((local_d4 != 0) && (local_d4 != 3)) goto LAB_01b92848;
                local_1a8 = local_1a8 + 1;
              } while (local_1a8 < local_1a0);
              local_1a0 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,
                         auStack_a8,0x10);
              local_1a8 = (code *)0x0;
            } while (local_1a0 != (code *)0x0);
          }
          local_d4 = 0;
LAB_01b92848:
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          _objc_storeStrong(&local_120,0);
        }
      }
      pcVar2 = local_e8;
      FUN_01b92aa4();
      _objc_retainAutoreleasedReturnValue();
      local_178 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (code *)0x0) {
        local_1d0 = (code *)0x0;
      }
      else {
        local_1d0 = local_e8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_1d0;
      local_d4 = 1;
      _objc_storeStrong(&local_178);
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

