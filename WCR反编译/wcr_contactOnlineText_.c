// wcr_contactOnlineText: @ 01da2acc

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsBoardView::wcr_contactOnlineText_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_198;
  undefined *local_190;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined1 local_f9;
  ulong local_f8;
  int local_ec;
  ulong local_e8;
  SEL local_e0;
  ID local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38 [2];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  _objc_storeStrong(&local_e8,param_3);
  if (local_e8 == 0) {
    local_d0 = (cfstringStruct *)0x0;
    local_ec = 1;
  }
  else {
    local_38[0] = (cfstringStruct *)PTR_s_isOnline_026c4f70;
    pcVar1 = &cf_isOnlineNow;
    _NSSelectorFromString();
    local_38[1] = pcVar1;
    for (local_f8 = 0; local_f8 < 2; local_f8 = local_f8 + 1) {
      if ((local_38[local_f8] != (cfstringStruct *)0x0) &&
         (uVar4 = local_e8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_e8,PTR_s_respondsToSelector__026ca818,local_38[local_f8]),
         (uVar4 & 1) != 0)) {
        uVar4 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_38[local_f8]);
        local_f9 = (undefined1)uVar4;
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_d0 = &cf__W_;
          local_ec = 1;
          goto LAB_01da2edc;
        }
      }
    }
    _memset(auStack_148,0,0x40);
    local_c8 = &cf_m_isOnline;
    local_c0 = &cf_m_uiOnlineStatus;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_190 != (undefined *)0x0) {
      lVar5 = *local_138;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar5 != 0) {
            _objc_enumerationMutation(*local_138 - lVar5,puVar2);
          }
          local_108 = *(undefined8 *)(local_140 + (long)local_198 * 8);
          local_150 = 0;
          uVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_valueForKey__0269d128,local_108);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_150;
          local_150 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
          if (((uVar4 & 1) == 0) ||
             (uVar4 = local_150,
             (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_boolValue_026ca540),
             (uVar4 & 1) == 0)) {
            local_ec = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_d0 = &cf__W_;
            local_ec = 1;
          }
          _objc_storeStrong(&local_150,0);
          if (local_ec != 0) goto LAB_01da2eac;
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_b8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    local_ec = 0;
LAB_01da2eac:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_ec == 0) {
      local_d0 = (cfstringStruct *)0x0;
      local_ec = 1;
    }
  }
LAB_01da2edc:
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_d0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

