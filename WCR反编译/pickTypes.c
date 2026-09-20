// pickTypes @ 01bbe794

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::pickTypes(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined1 auStack_188 [24];
  undefined *local_170;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  undefined *local_118;
  undefined4 local_10c;
  ID local_108;
  SEL local_100;
  ID local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = param_2;
  local_f8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_108 = IVar1;
  if (IVar1 == 0) {
    local_10c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar2;
    _memset(auStack_160,0,0x40);
    puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_allTypeKeys_026ae488);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c8 != (undefined *)0x0) {
      lVar7 = *local_150;
      local_1d0 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar7 != 0) {
            _objc_enumerationMutation(*local_150 - lVar7,puVar2);
          }
          puVar5 = local_118;
          local_120 = *(undefined8 *)(local_158 + (long)local_1d0 * 8);
          local_c8 = &cf_id;
          local_c0 = &cf_title;
          puVar3 = PTR_WCRefineMessageSyncRule_026ce708;
          local_b8 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_titleForTypeKey__026a41e8,local_120)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_b0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_c8,2);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        local_1d0 = (undefined *)0x0;
      } while (local_1c8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_initWeak(auStack_168,local_f8);
    puVar2 = PTR_WCRMessageSyncMultiSelectViewController_026cf410;
    _objc_alloc();
    local_f0 = &cf_header;
    local_e0 = &cf_bTekvmo___W;
    local_e8 = &cf_items;
    puVar5 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_copy_0269d150);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_d8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_e0,&local_f0,2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,1
              );
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_stringArrayInRule_forKey__026a44e8,
               local_108,_kWCRMessageSyncRuleKeyTypes);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = PTR___NSConcreteStackBlock_02578660;
    local_1a0 = 0xc2000000;
    local_19c = 0;
    local_198 = FUN_01bbed80;
    local_190 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_188,auStack_168);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithTitle_sections_selectedI_026c0578,&cf_mo___W,puVar4,puVar6,
               &cf_hQNh_yTekhQ__W00vQN0S_T_z_06eI__gUSRvmo_0,&local_1a8);
    local_170 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    IVar1 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_170);
    _objc_destroyWeak(auStack_188);
    _objc_destroyWeak(auStack_168);
    _objc_storeStrong(&local_118,0);
    local_10c = 0;
  }
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

