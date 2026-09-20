// wcr_kickable @ 01d8b794

/* Function Stack Size: 0x10 bytes */

ID WCRefineSessionStatsActivityViewController::wcr_kickable(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_150;
  ulong local_148;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_canManage_026c4d10);
  if ((param_1 & 1) == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar1;
    _memset(auStack_110,0,0x40);
    IVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_visibleRows_026c4d98);
    _objc_retainAutoreleasedReturnValue();
    local_148 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != 0) {
      lVar5 = *local_100;
      local_150 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,IVar2);
          }
          uVar6 = *(ulong *)(local_108 + local_150 * 8);
          local_d0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_usr);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_118 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar6 & 1) != 0) &&
             (uVar3 = local_118,
             (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
             uVar6 = local_118, puVar1 = PTR_WCRefineChatRoomKickHelper_026ce2d8, uVar3 != 0)) {
            IVar4 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_roomUsr_026c4cc0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_isProtectedMember_inRoom__0269ed48,uVar6);
            (*(code *)PTR__objc_release_02578630)(IVar4);
            if (((ulong)puVar1 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_118);
            }
          }
          _objc_storeStrong(&local_118,0);
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    _objc_storeStrong(&local_c8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

