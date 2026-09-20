// makeUserCellForUsername: @ 01c4ff88

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateSpecialUsersViewController::makeUserCellForUsername_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  ID IVar5;
  ID IVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  ID local_60;
  ID local_58;
  undefined *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar3 = "WCTableViewNormalCellManager";
    _objc_getClass();
    local_48 = (char *)0x0;
    local_50 = PTR_s_makeUserCell_cellInfo__026c1cc0;
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,
               PTR_s_cellForMakeSel_makeTarget_action_026b6818);
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,
                 PTR_s_cellForMakeSel_makeTarget_height_026b6820);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4050000000000000,local_40,PTR_s_cellForMakeSel_makeTarget_height_026b6820,
                   local_50,local_20,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_48;
        local_48 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    else {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4050000000000000,local_40,PTR_s_cellForMakeSel_makeTarget_action_026b6818,
                 local_50,local_20,PTR_s_openDetail__026c1cc8,local_20,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    if (local_48 == (char *)0x0) {
      IVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_snapshotHeadForUsername__026c1cd0,local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_20;
      local_58 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_statusTextForUsername__026b6838,local_30)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_40;
      local_60 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,
                 PTR_s_normalCellForSel_target_title_de_026b3248);
      IVar5 = local_20;
      pcVar4 = local_40;
      pcVar3 = PTR_WCRefineHelper_026ce000;
      puVar1 = PTR_s_openDetail__026c1cc8;
      puVar9 = PTR_s_normalCellForSel_target_title_de_026b3248;
      if (((ulong)pcVar7 & 1) == 0) {
        puVar9 = PTR_WCRefineNameplateHelper_026ce5f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_displayNameForUsername__026ac938,
                   local_30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar1,IVar5,puVar9,
                   local_60,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_48;
        local_48 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(puVar9);
      }
      else {
        puVar8 = PTR_WCRefineNameplateHelper_026ce5f8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_displayNameForUsername__026ac938,
                   local_30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar9,puVar1,IVar5,puVar8,local_60,local_58,1)
        ;
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_48;
        local_48 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        (*(code *)PTR__objc_release_02578630)(puVar8);
      }
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_addUserInfoValue_forKey__026b6840);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addUserInfoValue_forKey__026b6840,local_30,&cf_username);
    }
    _objc_setAssociatedObject(local_48,"WCRNameplateUsername",local_30,3);
    pcVar3 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar3;
    local_34 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

