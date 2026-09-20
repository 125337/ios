// pushGroupEditorForGroupId:fromViewController:telegramStyle:completion: @ 01ac3194

/* Function Stack Size: 0x2c bytes */

void WCRefineGroupManagementViewController::
     pushGroupEditorForGroupId_fromViewController_telegramStyle_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
               undefined4 param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *local_110;
  char *local_88;
  char *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined1 *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined8 local_50;
  byte local_41;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_40 == 0)) {
    local_54 = 1;
  }
  else {
    local_60 = (undefined *)0x0;
    if ((local_41 & 1) == 0) {
      puVar4 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_60;
      local_60 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_kind_026a27e8);
      puVar2 = PTR_WCRefineGroup_026ce630;
      if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
        puVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_customGroupWithName_scope__026bdf38,puVar3,0x1f);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_60;
        local_60 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_tabId_026a8270);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setGroupId__026a30e8);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_members_0269ea98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setMembers__026b00e0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_storeStrong(&local_68,0);
    }
    if ((local_60 == (undefined *)0x0) ||
       (puVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_kind_026a27e8),
       puVar2 != (undefined *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_N_ec_);
      local_54 = 1;
    }
    else {
      puVar2 = PTR_WCRGroupCreateViewController_026cf318;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTelegramStyle__026bdf40,local_41 & 1);
      if ((local_41 & 1) != 0) {
        puVar2 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_78 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_linkedGroupIds_026b00e8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTelegramLinkedGroupIds__026bdc90);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_preserveLinkedGroups_026a2a80);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_setTelegramPreserveGroups__026bdc98,puVar2);
        _objc_storeStrong(&local_78,0);
      }
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (lVar1 == 0) {
        local_110 = "MMUINavigationController";
        _objc_getClass();
        if (local_110 == (char *)0x0) {
          local_110 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
        }
        local_80 = local_110;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_88 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_110,1);
        _objc_storeStrong(&local_88,0);
        local_54 = 0;
      }
      else {
        lVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar1);
        local_54 = 1;
      }
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

