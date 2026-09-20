// removeLongPressCustomItem: @ 01102044

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginIconCatalog::removeLongPressCustomItem_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  long lVar6;
  ulong uVar7;
  ulong local_150;
  ulong local_148;
  ID local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar1 = local_c0;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar1;
  _WCRLongPressMenuItemIsCustom();
  if ((uVar1 & 1) == 0) {
    local_cc = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    _memset(auStack_120,0,0x40);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_rawLongPressCustomItems_026aed90);
    _objc_retainAutoreleasedReturnValue();
    local_148 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_148 != 0) {
      lVar6 = *local_110;
      local_150 = 0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,IVar3);
          }
          uVar7 = *(ulong *)(local_118 + local_150 * 8);
          local_e0 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((uVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_e0);
          }
          local_150 = local_150 + 1;
        } while (local_150 < local_148);
        local_148 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_150 = 0;
      } while (local_148 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_resolvedLongPressOrder_026aed60);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_128 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_removeObject__0269d678,local_c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLongPressOrder__026aee18,local_128);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_notifyLongPressMenuChanged_026aedf0);
    _objc_storeStrong(&local_128);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

