// addAllDisplayed @ 01df8780

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatActionPickerViewController::addAllDisplayed(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  ulong local_160;
  ulong local_158;
  ID local_128;
  long local_120;
  ID local_118;
  long local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayActions_026c5af8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSmRy);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar3;
    _memset(auStack_108,0,0x40);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_displayActions_026c5af8);
    _objc_retainAutoreleasedReturnValue();
    local_158 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != 0) {
      lVar6 = *local_f8;
      local_160 = 0;
      do {
        do {
          if (*local_f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar6,IVar2);
          }
          lVar7 = *(long *)(local_100 + local_160 * 8);
          local_c8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar7;
          FUN_01df2eec();
          _objc_retainAutoreleasedReturnValue();
          local_110 = lVar4;
          (*(code *)PTR__objc_release_02578630)(lVar7);
          lVar4 = local_110;
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
          if (lVar4 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,local_110);
          }
          _objc_storeStrong(&local_110,0);
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_160 = 0;
      } while (local_158 != 0);
    }
    (*(code *)PTR__objc_release_02578630)();
    _WCRSuperFloatRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_118 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    for (local_120 = 0; lVar6 = local_120, IVar2 = local_118,
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0), lVar6 < (long)IVar2;
        local_120 = local_120 + 1) {
      IVar2 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_objectAtIndexedSubscript__0269cc78,local_120);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      IVar5 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar5 & 1) != 0) {
        IVar2 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR_s_objectAtIndexedSubscript__0269cc78,local_120);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_128 = IVar5;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        puVar3 = local_c0;
        IVar2 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_128,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar2;
        FUN_01df2eec();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_128,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,
                     _WCRSuperFloatEnabledKey);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_setObject_atIndexedSubscript__0269e970,local_128,local_120);
        }
        _objc_storeStrong(&local_128,0);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_118);
    _WCRSuperFloatNotifySettingsChanged();
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectionHandler_026b8278);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectionHandler_026b8278);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar2 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__mR);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_dismissViewControllerAnimated_co_0269cf98,1);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

