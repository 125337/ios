// FUN_018a8bec @ 018a8bec

void FUN_018a8bec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
  local_38 = param_1;
  local_30 = param_4;
  local_28 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_displayNameForRule_fallbackIndex_026b77b8,
             local_20,param_3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_40;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_openMessageSyncRule__026b77c0;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR_WCRefineMessageSyncRule_026ce708;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_summaryForRule__026b5c40,local_20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,uVar5,puVar1,puVar4,1);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = PTR_WCRefineMessageSyncRule_026ce708;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_ruleID__026a4500,local_20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setUserInfo__026a17c8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_addCell__0269e3f8,local_48);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_20,0);
  return;
}

