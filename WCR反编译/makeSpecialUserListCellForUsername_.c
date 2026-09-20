// makeSpecialUserListCellForUsername: @ 01848df8

/* Function Stack Size: 0x18 bytes */

ID WCRefineAvatarFrameSpecialUsersViewController::makeSpecialUserListCellForUsername_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  ID IVar6;
  ID IVar7;
  ID local_60;
  undefined *local_58;
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
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar4 = "WCTableViewNormalCellManager";
    _objc_getClass();
    local_48 = (char *)0x0;
    local_50 = PTR_s_makeSpecialUserCell_cellInfo__026b6808;
    local_58 = PTR_s_onSpecialUserCellClicked__026b6810;
    local_40 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,
               PTR_s_cellForMakeSel_makeTarget_action_026b6818);
    if (((ulong)pcVar4 & 1) == 0) {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_respondsToSelector__026ca818,
                 PTR_s_cellForMakeSel_makeTarget_height_026b6820);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4053800000000000,local_40,PTR_s_cellForMakeSel_makeTarget_height_026b6820,
                   local_50,local_20,0);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_48;
        local_48 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
    }
    else {
      pcVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4053800000000000,local_40,PTR_s_cellForMakeSel_makeTarget_action_026b6818,
                 local_50,local_20,local_58,local_20,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_48;
      local_48 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_48 == (char *)0x0) {
      IVar6 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_snapshotPreviewImageForUsername__026b6828,local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_20;
      pcVar5 = local_40;
      puVar1 = PTR_s_openUserDetail__026b6830;
      IVar7 = local_20;
      local_60 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_displayNameForUsername__026ac938,local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_statusTextForUsername__026b6838,local_30)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_normalCellForSel_target_title_de_026b3248,puVar1,IVar2,IVar7,IVar6,
                 local_60,1);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_48;
      local_48 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      _objc_storeStrong(&local_60,0);
    }
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_addUserInfoValue_forKey__026b6840);
    if (((ulong)pcVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addUserInfoValue_forKey__026b6840,local_30,&cf_username);
    }
    _objc_setAssociatedObject(local_48,"WCRAvatarFrameSpecialUsername",local_30,3);
    pcVar4 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar4;
    local_34 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

