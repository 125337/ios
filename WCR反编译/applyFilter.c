// applyFilter @ 01df3824

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatActionPickerViewController::applyFilter(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  ulong local_2f0;
  ulong local_2e8;
  ulong local_248;
  ulong local_240;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  ID local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  undefined8 local_158;
  undefined *local_150;
  ID local_148;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_filterText_026c5ac0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_140 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pendingActions_026c5ac8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_140;
  local_148 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if (IVar3 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar1;
    _memset(auStack_198,0,0x40);
    IVar2 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_pendingActions_026c5ac8);
    _objc_retainAutoreleasedReturnValue();
    local_240 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != 0) {
      lVar7 = *local_188;
      local_248 = 0;
      do {
        do {
          if (*local_188 - lVar7 != 0) {
            _objc_enumerationMutation(*local_188 - lVar7,IVar2);
          }
          local_158 = *(undefined8 *)(local_190 + local_248 * 8);
          IVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_displayTitleForAction__026c5ad0,local_158);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1a0 = IVar4;
          (*(code *)PTR__objc_release_02578630)(IVar3);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          uVar5 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatSourceKey);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf___);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          uVar5 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf___);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(uVar5);
          IVar3 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_containsString__0269d0b0,local_140);
          if ((((IVar3 & 1) != 0) ||
              (puVar1 = local_1a8,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a8,PTR_s_containsString__0269d0b0,local_140),
              ((ulong)puVar1 & 1) != 0)) ||
             (puVar1 = local_1b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1b0,PTR_s_containsString__0269d0b0,local_140),
             ((ulong)puVar1 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_addObject__0269d180,local_158);
          }
          _objc_storeStrong(&local_1b0);
          _objc_storeStrong(&local_1a8,0);
          _objc_storeStrong(&local_1a0,0);
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_148,local_150);
    _objc_storeStrong(&local_150,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setDisplayActions__026c5ad8,local_148);
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_isGestureBindMode_026c5a98);
  if ((IVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_1b8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = puVar6;
    _memset(auStack_208,0,0x40);
    IVar2 = local_148;
    (*(code *)PTR__objc_retain_02578638)();
    local_2e8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,0x10);
    if (local_2e8 != 0) {
      lVar7 = *local_1f8;
      local_2f0 = 0;
      do {
        do {
          if (*local_1f8 - lVar7 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar7,IVar2);
          }
          local_1c8 = *(undefined8 *)(local_200 + local_2f0 * 8);
          IVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_130,PTR_s_wcr_isPluginPageAction__026c5af0,local_1c8);
          if ((IVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addObject__0269d180,local_1c8);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_addObject__0269d180,local_1c8);
          }
          local_2f0 = local_2f0 + 1;
        } while (local_2f0 < local_2e8);
        local_2e8 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                   0x10);
        local_2f0 = 0;
      } while (local_2e8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setDisplayPluginActions__026c5ae0,local_1b8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setDisplayOtherActions__026c5ae8,local_1c0);
    _objc_storeStrong(&local_1c0);
    _objc_storeStrong(&local_1b8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setDisplayPluginActions__026c5ae0,
               *(undefined8 *)PTR____NSArray0___02578280);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setDisplayOtherActions__026c5ae8,local_148);
  }
  IVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

