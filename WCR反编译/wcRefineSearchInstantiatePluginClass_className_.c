// wcRefineSearchInstantiatePluginClass:className: @ 014c8d9c

/* Function Stack Size: 0x20 bytes */

ID WCRefineSearchManager::wcRefineSearchInstantiatePluginClass_className_
             (ID param_1,SEL param_2,CLASS param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  cfstringStruct *local_198;
  cfstringStruct *local_108;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  cfstringStruct *local_70 [3];
  undefined *local_58;
  undefined4 local_4c;
  ulong local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_48 = 0;
  local_40 = (undefined *)param_3;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_48,param_4);
  if (local_40 == (undefined *)0x0) {
    local_28 = (undefined *)0x0;
    local_4c = 1;
    goto LAB_014c93e8;
  }
  local_58 = (undefined *)0x0;
  uVar5 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineMessageSyncRuleViewController);
  puVar3 = local_40;
  if (((uVar5 & 1) == 0) ||
     (puVar1 = PTR_WCRefineMessageSyncRuleViewController_026ced18,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineMessageSyncRuleViewController_026ced18,PTR_s_class_0269cd60),
     puVar3 != puVar1)) {
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_isEqualToString__0269ccc8,&cf_WCRefineScheduledTaskViewController);
    puVar3 = local_40;
    uVar5 = uVar2 & 0xffffffff;
    if ((uVar2 & 1) != 0) {
      puVar1 = PTR_WCRefineScheduledTaskViewController_026ced20;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTaskViewController_026ced20,PTR_s_class_0269cd60);
      uVar5 = (long)puVar3 - (long)puVar1;
      if (uVar5 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = &::cf___;
        puVar3 = PTR_WCRefineScheduledTask_026ce850;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineScheduledTask_026ce850,PTR_s_tasks_026a53a8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_88 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((((ulong)puVar3 & 1) != 0) &&
           (puVar3 = local_88, (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0),
           pcVar4 = (cfstringStruct *)PTR_WCRefineScheduledTask_026ce850, puVar3 != (undefined *)0x0
           )) {
          puVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_taskID__026a6cd8);
          _objc_retainAutoreleasedReturnValue();
          local_198 = pcVar4;
          if (pcVar4 == (cfstringStruct *)0x0) {
            local_198 = &::cf___;
          }
          _objc_storeStrong(&local_80,local_198);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        puVar1 = PTR_WCRefineScheduledTaskViewController_026ced20;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithTaskID__026af668,local_80);
        puVar3 = local_58;
        local_58 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
        goto LAB_014c934c;
      }
    }
    puVar1 = local_40;
    _objc_alloc_init(uVar5);
    puVar3 = local_58;
    local_58 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_70[0] = &::cf___;
    puVar3 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineMessageSyncRule_026ce708,PTR_s_rules_026a44d8)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((ulong)puVar3 & 1) != 0) &&
       (puVar3 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0),
       pcVar4 = (cfstringStruct *)PTR_WCRefineMessageSyncRule_026ce708, puVar3 != (undefined *)0x0))
    {
      puVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_ruleID__026a4500);
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_108 = &::cf___;
      }
      _objc_storeStrong(local_70,local_108);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar1 = PTR_WCRefineMessageSyncRuleViewController_026ced18;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithRuleID__026af660,local_70[0]);
    puVar3 = local_58;
    local_58 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(local_70,0);
  }
LAB_014c934c:
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_wcRefineForceExpandCollapsibleSe_026af670,local_58,local_48);
  puVar3 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = puVar3;
  local_4c = 1;
  _objc_storeStrong(&local_58,0);
LAB_014c93e8:
  _objc_storeStrong(&local_48,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

