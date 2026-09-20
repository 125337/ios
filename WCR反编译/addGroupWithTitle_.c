// addGroupWithTitle: @ 0177263c

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginHubManager::addGroupWithTitle_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_78;
  ID local_70;
  undefined4 local_64;
  long local_60;
  long local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  lVar1 = local_58;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_40 = (undefined *)0x0;
    local_64 = 1;
  }
  else {
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_groupDefinitions_026b4430);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    IVar2 = local_70;
    local_38 = &cf_id;
    local_28 = local_78;
    local_30 = &cf_title;
    local_20 = local_60;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_28,&local_38,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setConfigValue_forKey__026b4428,local_70,&cf_WCRPluginHubGroups);
    puVar4 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar4;
    local_64 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_40;
}

