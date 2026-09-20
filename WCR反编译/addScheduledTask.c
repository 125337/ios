// addScheduledTask @ 018aa038

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::addScheduledTask(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *local_38;
  uint local_2c;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar3 = 0;
  FUN_01138c30(&cf_scheduled_task,0);
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineScheduledTask_026ce850,PTR_s_tasks_026a53a8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    puVar4 = PTR_WCRefineScheduledTask_026ce850;
    bVar2 = puVar5 < segment_command_00000020.segname + 10;
    if (bVar2) {
      puVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_newTaskWithSerialNumber__026af478,puVar5 + 1);
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_saveTasks__026a6ce8,local_28);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      IVar1 = local_18;
      puVar4 = PTR_WCRefineScheduledTask_026ce850;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineScheduledTask_026ce850,PTR_s_taskID__026a6cd8,local_38);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_pushScheduledTaskEditorWithTaskI_026b7830);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_38,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf___);
    }
    local_2c = (uint)!bVar2;
    _objc_storeStrong(&local_28,0);
  }
  return;
}

