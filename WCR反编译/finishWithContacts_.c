// finishWithContacts: @ 01a9aba4

/* Function Stack Size: 0x18 bytes */

void WCRGroupContactPickerBridge::finishWithContacts_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_1b0;
  ulong local_190;
  ulong local_168;
  ulong local_160;
  ID local_138;
  byte local_129;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  undefined4 local_c4;
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
  uVar3 = local_c0;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_c4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar2;
    _memset(auStack_118,0,0x40);
    uVar3 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar5 = *local_108;
      local_168 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_110 + local_168 * 8);
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_129 = 0;
          bVar1 = (uVar6 & 1) == 0;
          if (bVar1) {
            local_190 = local_d8;
            FUN_01a9b024();
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_190;
          }
          else {
            local_190 = local_d8;
          }
          local_129 = bVar1;
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_190;
          if ((local_129 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          uVar6 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          if (uVar6 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
          }
          _objc_storeStrong(&local_120,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    local_138 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCompletion__0269fdc8,0);
    IVar4 = local_138;
    if (local_138 != 0) {
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_1b0 = *(undefined **)PTR____NSArray0___02578280;
      }
      (**(code **)(IVar4 + 0x10))(IVar4,local_1b0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    IVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_picker_026ab880);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_d0,0);
    local_c4 = 0;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

