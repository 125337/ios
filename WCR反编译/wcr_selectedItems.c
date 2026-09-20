// wcr_selectedItems @ 01f96448

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackPickerViewController::wcr_selectedItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  ulong local_130;
  ulong local_128;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  _memset(auStack_108,0,0x40);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_128 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_128 != 0) {
    lVar6 = *local_f8;
    local_130 = 0;
    do {
      do {
        if (*local_f8 - lVar6 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar6,IVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + local_130 * 8);
        IVar3 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedPaths_026ba4d0);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_absolutePath_026ae300);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        if ((IVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_c8);
        }
        local_130 = local_130 + 1;
      } while (local_130 < local_128);
      local_128 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_130 = 0;
    } while (local_128 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

