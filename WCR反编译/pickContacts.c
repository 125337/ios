// pickContacts @ 01df8e80

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatActionPickerViewController::pickContacts(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  void *local_180;
  void *local_178;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined1 auStack_130 [8];
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_c8;
  undefined1 auStack_c0 [8];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_initWeak(auStack_c0,param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar3;
  pvVar4 = _memset(auStack_120,0,0x40);
  _WCRSuperFloatEnabledActions();
  _objc_retainAutoreleasedReturnValue();
  local_178 = pvVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_178 != (void *)0x0) {
    lVar6 = *local_110;
    local_180 = (void *)0x0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,pvVar4);
        }
        uVar7 = *(ulong *)(local_118 + (long)local_180 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_e0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar7 & 1) != 0) {
          uVar7 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatCustomPayloadKey
                    );
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          FUN_01df2eec();
          _objc_retainAutoreleasedReturnValue();
          local_128 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar7);
          uVar7 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_hasPrefix__0269d320,&cf_chat_);
          puVar3 = local_c8;
          if ((uVar7 & 1) != 0) {
            uVar7 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_substringFromIndex__0269d120,5);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar7);
          }
          _objc_storeStrong(&local_128,0);
        }
        local_180 = (void *)((long)local_180 + 1);
      } while (local_180 < local_178);
      local_178 = pvVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_180 = (void *)0x0;
    } while (local_178 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar4);
  IVar2 = local_b0;
  puVar1 = local_c8;
  puVar3 = PTR_WCRefineGroupManagementViewController_026ce580;
  local_150 = PTR___NSConcreteStackBlock_02578660;
  local_148 = 0xc2000000;
  local_144 = 0;
  local_140 = FUN_01df92cc;
  local_138 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_130,auStack_c0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_presentSessionSelectPickerFromVi_026a24d0,IVar2,&cf_bT_N,puVar1,&local_150
            );
  _objc_destroyWeak(auStack_130);
  _objc_storeStrong(&local_c8,0);
  _objc_destroyWeak(auStack_c0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

