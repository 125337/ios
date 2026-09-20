// FUN_01d395a4 @ 01d395a4

void FUN_01d395a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar2 = PTR_WCRefineScheduledTask_026ce850;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineScheduledTask_026ce850,PTR_s_targetsByReplacingFriends_withFr_026c4600,
             *(undefined8 *)(param_1 + 0x20),local_20);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 0x28;
  local_30 = puVar2;
  _objc_loadWeakRetained();
  puVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_saveTargets_toast__026c45f0,puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

