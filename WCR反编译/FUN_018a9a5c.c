// FUN_018a9a5c @ 018a9a5c

void FUN_018a9a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_50;
  undefined *local_48;
  uint local_3c;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_isAutoClearChatTask__026a6cc0,local_20);
  bVar1 = ((ulong)puVar2 & 1) == 0;
  if (bVar1) {
    puVar3 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_displayNameForTask_fallbackIndex_026b7800,
               local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_s_openScheduledTask__026b7808;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR_WCRefineScheduledTask_026ce850;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_summaryForTask__026b7810,local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar2,uVar6,puVar3,puVar4,1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar2 = PTR_WCRefineScheduledTask_026ce850;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineScheduledTask_026ce850,PTR_s_taskID__026a6cd8,local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserInfo__026a17c8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_addCell__0269e3f8,local_50);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_20,0);
  return;
}

