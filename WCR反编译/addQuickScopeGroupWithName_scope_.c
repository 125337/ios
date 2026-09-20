// addQuickScopeGroupWithName:scope: @ 01ad7924

/* Function Stack Size: 0x20 bytes */

ID WCRefineGroupManager::addQuickScopeGroupWithName_scope_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  ID IVar1;
  unsigned_long_long uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  unsigned_long_long local_48;
  ID local_40;
  ID local_38;
  unsigned_long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_addCustomGroupWithName_scope__026be1f8,local_28,param_4);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_copy_0269d150);
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setKind__026ad410,3);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_setMembers__026b00e0,*(undefined8 *)PTR____NSArray0___02578280);
  uVar2 = local_30;
  FUN_01ad5e50();
  local_48 = uVar2;
  if (uVar2 != 0x7fffffffffffffff) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOrder__026ad418,uVar2);
  }
  if (((local_30 == 0x20) || (local_30 == 0x40)) || (local_30 == 0x80)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAvatarSource__026bdab0,&cf_official);
    uVar2 = local_30;
    puVar3 = PTR_WCRefineGroup_026ce630;
    IVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_defaultAvatarIconNameForScope_gr_026a3180,uVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAvatarValue__026bdab8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateGroup__026a2db0,local_40);
  if (local_48 != 0x7fffffffffffffff) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
               &cf_homeGroupingQuickPinnedUnreadOrderMigrated);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_50);
    _objc_storeStrong(&local_50,0);
  }
  IVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

