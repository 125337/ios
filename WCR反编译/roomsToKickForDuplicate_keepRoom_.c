// roomsToKickForDuplicate:keepRoom: @ 00edc974

/* Function Stack Size: 0x20 bytes */

ID WCRefineChatRoomKickHelper::roomsToKickForDuplicate_keepRoom_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_180;
  ulong local_178;
  ID local_150;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  ID local_e8;
  bool local_d9;
  ID local_d8;
  ID local_d0;
  undefined8 local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  IVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_rooms);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  IVar4 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_d9 = false;
  bVar1 = (IVar4 & 1) == 0;
  if (bVar1) {
    local_150 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    local_150 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_rooms);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_150;
  }
  local_d9 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_150;
  if ((local_d9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_trimmedString__0269ec98,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    IVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_e8;
    local_e8 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar3;
  _memset(auStack_138,0,0x40);
  IVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_178 != 0) {
    lVar5 = *local_128;
    local_180 = 0;
    do {
      do {
        if (*local_128 - lVar5 != 0) {
          _objc_enumerationMutation(*local_128 - lVar5,IVar2);
        }
        uVar6 = *(ulong *)(local_130 + local_180 * 8);
        local_f8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8,local_e8);
        if ((uVar6 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_f8);
        }
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

