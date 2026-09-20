// summaryForTask: @ 014b6d0c

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::summaryForTask_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  cfstringStruct *local_38;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_stringArrayInTask_forKey__026a6cf0,local_28,&cf_targets);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isTaskEnabled__026a6cb8,local_28);
  local_38 = &::cf___;
  if ((IVar1 & 1) == 0) {
    local_38 = &cf_sQ;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scheduleSummaryForTask__026af490,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar3;
}

