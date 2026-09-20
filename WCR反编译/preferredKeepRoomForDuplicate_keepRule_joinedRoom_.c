// preferredKeepRoomForDuplicate:keepRule:joinedRoom: @ 00edcd98

/* Function Stack Size: 0x28 bytes */

ID WCRefineChatRoomKickHelper::preferredKeepRoomForDuplicate_keepRule_joinedRoom_
             (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_350;
  cfstringStruct *local_330;
  cfstringStruct *local_2f8;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2b8;
  cfstringStruct *local_288;
  cfstringStruct *local_280;
  cfstringStruct *local_250;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  undefined8 local_1e8;
  cfstringStruct *local_1e0;
  cfstringStruct *local_1d8;
  bool local_1c9;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  cfstringStruct *local_178;
  int local_170;
  bool local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined8 local_158;
  long_long local_150;
  cfstringStruct *local_148;
  SEL local_140;
  ID local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = (cfstringStruct *)0x0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_158 = 0;
  local_150 = param_4;
  _objc_storeStrong(&local_158,param_5);
  pcVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_rooms)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_169 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_250 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  else {
    local_250 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_rooms);
    _objc_retainAutoreleasedReturnValue();
    local_168 = local_250;
  }
  local_169 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = local_250;
  if ((local_169 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_168);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = &::cf___;
    local_170 = 1;
  }
  else if (local_150 == 2) {
    _memset(auStack_1b8,0,0x40);
    pcVar2 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_280 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10);
    if (local_280 != (cfstringStruct *)0x0) {
      lVar5 = *local_1a8;
      local_288 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_1a8 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1a8 - lVar5,pcVar2);
          }
          pcVar6 = *(cfstringStruct **)(local_1b0 + (long)local_288 * 8);
          local_178 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isEqualToString__0269ccc8,local_158);
          pcVar4 = local_178;
          if (((ulong)pcVar6 & 1) == 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = pcVar4;
            local_170 = 1;
            goto LAB_00edd0e4;
          }
          local_288 = (cfstringStruct *)((long)&local_288->field0_0x0 + 1);
        } while (local_288 < local_280);
        local_280 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                   0x10);
        local_288 = (cfstringStruct *)0x0;
      } while (local_280 != (cfstringStruct *)0x0);
    }
    local_170 = 0;
LAB_00edd0e4:
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_170 == 0) {
      pcVar2 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      local_170 = 1;
      local_130 = pcVar2;
    }
  }
  else if (local_150 == 1) {
    pcVar2 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_roomSizes);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_1c9 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_2b8 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
    }
    else {
      local_2b8 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_148,PTR_s_objectForKeyedSubscript__0269d098,&cf_roomSizes);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = local_2b8;
    }
    local_1c9 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = local_2b8;
    if ((local_1c9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_1c0;
    local_1d8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_objectForKeyedSubscript__0269d098,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_1e0 = pcVar2;
    _memset(auStack_228,0,0x40);
    pcVar2 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_2f0 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,0x10);
    if (local_2f0 != (cfstringStruct *)0x0) {
      lVar5 = *local_218;
      local_2f8 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_218 - lVar5 != 0) {
            _objc_enumerationMutation(*local_218 - lVar5,pcVar2);
          }
          local_1e8 = *(undefined8 *)(local_220 + (long)local_2f8 * 8);
          pcVar4 = local_1c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c0,PTR_s_objectForKeyedSubscript__0269d098,local_1e8);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if ((long)pcVar6 - (long)local_1e0 != 0 && (long)local_1e0 <= (long)pcVar6) {
            _objc_storeStrong((long)pcVar6 - (long)local_1e0,&local_1d8,local_1e8);
            local_1e0 = pcVar6;
          }
          local_2f8 = (cfstringStruct *)((long)&local_2f8->field0_0x0 + 1);
        } while (local_2f8 < local_2f0);
        local_2f0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_128,
                   0x10);
        local_2f8 = (cfstringStruct *)0x0;
      } while (local_2f0 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    if (local_1d8 == (cfstringStruct *)0x0) {
      local_330 = &::cf___;
    }
    else {
      local_330 = local_1d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_330;
    local_170 = 1;
    _objc_storeStrong(&local_1d8);
    _objc_storeStrong(&local_1c0,0);
  }
  else {
    pcVar2 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_350 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_350 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_350;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_170 = 1;
  }
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

