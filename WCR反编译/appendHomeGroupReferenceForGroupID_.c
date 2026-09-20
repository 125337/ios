// appendHomeGroupReferenceForGroupID: @ 01d3b9b4

/* Function Stack Size: 0x18 bytes */

void WCRefineScheduledTaskViewController::appendHomeGroupReferenceForGroupID_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined *local_58;
  uint local_4c;
  undefined *local_48;
  ID local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_targetForHomeGroupID__026c4650,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  if ((local_40 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    local_4c = 1;
  }
  else {
    puVar3 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,local_40,
               _kWCRScheduledTaskKeyTargets);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    local_20 = local_48;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_mergeTargets_adding__026c45e8,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    puVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    if (puVar2 != puVar3) {
      puVar4 = PTR_WCRefineScheduledTask_026ce850;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_usernamesForHomeGroupID__026af4b8,local_38
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      IVar1 = local_28;
      puVar4 = local_60;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__R_S_MR);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_saveTargets_toast__026c45f0,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R___Wvh);
    }
    local_4c = (uint)(puVar2 == puVar3);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

