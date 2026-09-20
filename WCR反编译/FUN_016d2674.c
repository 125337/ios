// FUN_016d2674 @ 016d2674

void FUN_016d2674(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_230;
  ulong local_220;
  undefined *local_190;
  undefined *local_188;
  ulong local_158 [2];
  int local_144;
  ulong local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ulong local_e8 [3];
  undefined *local_d0;
  ulong local_c8;
  ulong local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_38 = &cf_getSelectedMsgLocalIds;
  local_30 = &cf_getArrSelectMsgLocalID;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_e8[0] = 0;
  local_d0 = puVar1;
  _memset(auStack_130,0,0x40);
  puVar1 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_b8,0x10);
  if (local_188 != (undefined *)0x0) {
    lVar5 = *local_120;
    local_190 = (undefined *)0x0;
    do {
      do {
        if (*local_120 - lVar5 != 0) {
          _objc_enumerationMutation(*local_120 - lVar5,puVar1);
        }
        uVar6 = *(undefined8 *)(local_128 + (long)local_190 * 8);
        local_f0 = uVar6;
        _NSSelectorFromString();
        uVar2 = local_c8;
        local_138 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,uVar6);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_138);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_140 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar2 & 1) == 0) {
LAB_016d296c:
            local_144 = 0;
          }
          else {
            uVar4 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_count_0269cfe0);
            uVar2 = local_140;
            if (uVar4 == 0) {
              if (local_e8[0] == 0) {
                _objc_storeStrong(local_e8,local_140);
              }
              goto LAB_016d296c;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = uVar2;
            local_144 = 1;
          }
          _objc_storeStrong(&local_140,0);
          if (local_144 != 0) goto LAB_016d2a04;
        }
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_b8,0x10)
      ;
      local_190 = (undefined *)0x0;
    } while (local_188 != (undefined *)0x0);
  }
  local_144 = 0;
LAB_016d2a04:
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_144 == 0) {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_valueForKey__0269d128,&cf_m_arrSelectMsgLocalID);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_158[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) == 0) {
      local_144 = 0;
    }
    else {
      uVar2 = local_158[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_158[0],PTR_s_count_0269cfe0);
      if (uVar2 == 0) {
        if (local_e8[0] == 0) {
          local_230 = local_158[0];
        }
        else {
          local_230 = local_e8[0];
        }
        local_220 = local_230;
      }
      else {
        local_220 = local_158[0];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_220;
      local_144 = 1;
    }
    _objc_storeStrong(local_158,0);
    uVar2 = local_e8[0];
    if (local_144 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar2;
      local_144 = 1;
    }
  }
  _objc_storeStrong(local_e8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

