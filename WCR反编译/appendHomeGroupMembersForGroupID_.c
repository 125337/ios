// appendHomeGroupMembersForGroupID: @ 01d3bd10

/* Function Stack Size: 0x18 bytes */

void WCRefineScheduledTaskViewController::appendHomeGroupMembersForGroupID_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  uint local_34;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_usernamesForHomeGroupID_refreshB_026af4c0,
               local_28,1);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_WCRefineScheduledTask_026ce850;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_stringArrayInTask_forKey__026a6cf0,
                 local_30,_kWCRScheduledTaskKeyTargets);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_WCRefineScheduledTask_026ce850;
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_mergeTargets_adding__026c45e8,puVar3,
                 local_40);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_18;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_50 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_U_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_saveTargets_toast__026c45f0,puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_febXTS9e_u0R_0);
    }
    local_34 = (uint)(puVar2 == (undefined *)0x0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

