// douyinNoteImagesSourceRank:fromPost: @ 01034f48

/* Function Stack Size: 0x1c bytes */

long_long WCRefineLinkParser::douyinNoteImagesSourceRank_fromPost_
                    (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  long local_e0;
  ulong local_d8;
  undefined4 local_d0;
  byte local_c9;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  long_long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar2 = local_c8;
  local_c9 = (byte)param_4;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    local_b0 = 0xffffffffffffffff;
  }
  else {
    local_d8 = 0;
    local_e0 = 0;
    _memset(auStack_128,0,0x40);
    uVar2 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_158 != 0) {
      lVar6 = *local_118;
      local_160 = 0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,uVar2);
          }
          local_e8 = *(ulong *)(local_120 + local_160 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_douyinNoteImageItemLooksUsable__026adf10,local_e8);
          uVar4 = local_e8;
          if ((IVar3 & 1) != 0) {
            local_d8 = local_d8 + 1;
          }
          puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar4 & 1) != 0) &&
             (IVar3 = local_b8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b8,PTR_s_douyinDictionaryLooksLikeNoteIma_026adef8,local_e8),
             (IVar3 & 1) != 0)) {
            local_e0 = local_e0 + 1;
          }
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    lVar6 = local_e0;
    if (local_d8 == 0) {
      local_b0 = 0xffffffffffffffff;
    }
    else if ((local_c9 & 1) == 0) {
      if ((local_e0 == 0) ||
         (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
         (ulong)(lVar6 * 2) < uVar2)) {
        uVar2 = local_d8;
        uVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
        uVar4 = local_d8;
        if (uVar2 == uVar5) {
          local_b0 = 0x32;
        }
        else {
          uVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
          if (uVar4 * 2 < uVar2) {
            local_b0 = 10;
          }
          else {
            local_b0 = 0x1e;
          }
        }
      }
      else {
        local_b0 = 0x50;
      }
    }
    else {
      local_b0 = 100;
    }
  }
  local_d0 = 1;
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

