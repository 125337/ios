// renameGroupWithIdentifier:title: @ 017728f0

/* Function Stack Size: 0x20 bytes */

bool WCRefinePluginHubManager::renameGroupWithIdentifier_title_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  ID local_90;
  ID local_88;
  undefined4 local_7c;
  long local_78;
  long local_70;
  long local_68;
  SEL local_60;
  ID local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  _objc_storeStrong(&local_68,param_3);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_4);
  lVar1 = local_70;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_68;
  local_78 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar1 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_49 = 0;
    local_7c = 1;
  }
  else {
    IVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_groupDefinitions_026b4430);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    lVar1 = local_68;
    IVar3 = local_88;
    local_b8 = PTR___NSConcreteGlobalBlock_02578658;
    local_b0 = 0xd0800000;
    local_ac = 0;
    local_a8 = FUN_01772c04;
    local_a0 = &DAT_02581d20;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_indexOfObjectPassingTest__026a27f8,&local_b8);
    local_49 = IVar3 != 0x7fffffffffffffff;
    local_90 = IVar3;
    if ((bool)local_49) {
      local_48 = &cf_id;
      local_38 = local_68;
      local_40 = &cf_title;
      local_30 = local_78;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setObject_atIndexedSubscript__0269e970,puVar5,local_90);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setConfigValue_forKey__026b4428,local_88,&cf_WCRPluginHubGroups);
    }
    local_7c = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_49 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

