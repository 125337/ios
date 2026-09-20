// saveHistoryColorsToUserDefaults @ 0190bdac

/* Function Stack Size: 0x10 bytes */

void WCRefineColorPickerController::saveHistoryColorsToUserDefaults(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  ulong local_138;
  ulong local_130;
  undefined *local_110;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_historyColors_026b88d8);
  _objc_retainAutoreleasedReturnValue();
  local_130 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != 0) {
    lVar3 = *local_f8;
    local_138 = 0;
    do {
      do {
        if (*local_f8 - lVar3 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar3,IVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + local_138 * 8);
        puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,
                   PTR_s_archivedDataWithRootObject_requi_026ae650,local_c8,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar1;
        if (puVar1 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_addObject__0269d180,puVar1);
        }
        _objc_storeStrong(&local_110,0);
        local_138 = local_138 + 1;
      } while (local_138 < local_130);
      local_130 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_138 = 0;
    } while (local_130 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

