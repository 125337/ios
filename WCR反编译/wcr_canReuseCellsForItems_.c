// wcr_canReuseCellsForItems: @ 01af9580

/* Function Stack Size: 0x18 bytes */

bool WCRefineHomeAvatarStripView::wcr_canReuseCellsForItems_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  long lVar6;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1a0;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  byte local_f1;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  int local_d8;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  SEL local_c0;
  cfstringStruct *local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (cfstringStruct *)0x0;
  local_c0 = param_2;
  local_b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  pcVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cellViews_026be660);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d1 = 0;
  bVar1 = true;
  if (pcVar3 != (cfstringStruct *)0x0) {
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    bVar1 = true;
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cellViews_026be660);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar4 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      bVar1 = pcVar3 != pcVar4;
    }
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (bVar1) {
    local_a9 = 0;
    local_d8 = 1;
  }
  else {
    for (local_e0 = (cfstringStruct *)0x0; pcVar2 = local_e0, pcVar3 = local_c8,
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0), pcVar2 < pcVar3;
        local_e0 = (cfstringStruct *)((long)&local_e0->field0_0x0 + 1)) {
      pcVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_cellViews_026be660);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_e8;
      local_f0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      local_1a0 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1a0 = &::cf___;
      }
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isEqualToString__0269ccc8,local_1a0);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      if (((ulong)pcVar4 & 1) == 0) {
        local_a9 = 0;
        local_d8 = 1;
      }
      else {
        local_f1 = 0;
        _memset(auStack_140,0,0x40);
        pcVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_avatarHost_026b1098);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_1d0 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        if (local_1d0 != (cfstringStruct *)0x0) {
          lVar5 = *local_130;
          local_1d8 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_130 - lVar5 != 0) {
                _objc_enumerationMutation(*local_130 - lVar5,pcVar3);
              }
              lVar6 = *(long *)(local_138 + (long)local_1d8 * 8);
              local_100 = lVar6;
              (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_tag_026cab98);
              if ((lVar6 != 0x24f6e4) &&
                 (lVar6 = local_100,
                 (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_tag_026cab98),
                 lVar6 != 0x24f6e5)) {
                local_f1 = 1;
                local_d8 = 5;
                goto LAB_01af9a94;
              }
              local_1d8 = (cfstringStruct *)((long)&local_1d8->field0_0x0 + 1);
            } while (local_1d8 < local_1d0);
            local_1d0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8
                       ,0x10);
            local_1d8 = (cfstringStruct *)0x0;
          } while (local_1d0 != (cfstringStruct *)0x0);
        }
        local_d8 = 0;
LAB_01af9a94:
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        if ((local_f1 & 1) == 0) {
          local_a9 = 0;
          local_d8 = 1;
        }
        else {
          local_d8 = 0;
        }
      }
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_e8,0);
      if (local_d8 != 0) goto LAB_01af9b3c;
    }
    local_a9 = 1;
    local_d8 = 1;
  }
LAB_01af9b3c:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

