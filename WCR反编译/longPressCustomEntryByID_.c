// longPressCustomEntryByID: @ 010ff540

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::longPressCustomEntryByID_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_d4;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  uVar4 = local_c8;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar4;
  _WCRLongPressMenuItemIsCustom();
  if ((uVar4 & 1) == 0) {
    local_b0 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_rawLongPressCustomItems_026aed90);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar3 = *local_110;
      local_148 = 0;
      do {
        do {
          if (*local_110 - lVar3 != 0) {
            _objc_enumerationMutation(*local_110 - lVar3,IVar1);
          }
          uVar4 = *(ulong *)(local_118 + local_148 * 8);
          local_e0 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = local_e0;
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar4;
            local_d4 = 1;
            goto LAB_010ff770;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_d4 = 0;
LAB_010ff770:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_d4 == 0) {
      local_b0 = 0;
      local_d4 = 1;
    }
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

