// layoutAttributesForElementsInRect: @ 01b073ec

/* Function Stack Size: 0x30 bytes */

ID WCRefineCardPageFlowLayout::layoutAttributesForElementsInRect_
             (ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ulong uVar4;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  SEL local_d8;
  ID local_d0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_d8 = param_2;
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158,
             param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar1;
  _memset(auStack_128,0,0x40);
  IVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_attributesCache_026be860);
  _objc_retainAutoreleasedReturnValue();
  local_168 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_168 != 0) {
    lVar3 = *local_118;
    local_170 = 0;
    do {
      do {
        if (*local_118 - lVar3 != 0) {
          _objc_enumerationMutation(*local_118 - lVar3,IVar2);
        }
        uVar4 = *(ulong *)(local_120 + local_170 * 8);
        local_e8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_frame_026ca640);
        _CGRectIntersectsRect();
        if ((uVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
        }
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

