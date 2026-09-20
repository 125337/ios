// addCustomGroupWithName:scope:members:detailTemplate: @ 01ad755c

/* Function Stack Size: 0x30 bytes */

ID WCRefineGroupManager::addCustomGroupWithName_scope_members_detailTemplate_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *local_d8;
  long local_b8;
  undefined *local_48;
  cfstringStruct *local_40;
  long local_38;
  unsigned_long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_6);
  puVar1 = PTR_WCRefineGroup_026ce630;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineGroup_026ce630,PTR_s_customGroupWithName_scope__026bdf38,local_28,local_30)
  ;
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_generateGroupIdWithName__026be1e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setGroupId__026a30e8);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAvatarSource__026bdab0,&cf_official);
  puVar1 = PTR_WCRefineGroup_026ce630;
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_scope_0269ea90);
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_defaultAvatarIconNameForScope_gr_026a3180,puVar3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAvatarValue__026bdab8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nextCustomOrder_026be1f0);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setOrder__026ad418,IVar2);
  if (local_38 == 0) {
    local_b8 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_b8 = local_38;
  }
  puVar1 = PTR__OBJC_CLASS___NSOrderedSet_026ce618;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSOrderedSet_026ce618,PTR_s_orderedSetWithArray__026a4b80,local_b8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMembers__026b00e0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_40 == (cfstringStruct *)0x0) {
    local_d8 = &::cf___;
  }
  else {
    local_d8 = local_40;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDetailTemplate__026a2dc8,local_d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_18 + 8),PTR_s_addObject__0269d180,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persist_026b68b8);
  puVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

