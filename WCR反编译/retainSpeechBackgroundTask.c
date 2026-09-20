// retainSpeechBackgroundTask @ 0150ddc0

/* Function Stack Size: 0x10 bytes */

void WCRSpeechBroadcastEngine::retainSpeechBackgroundTask(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  uint local_30;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_speechBgTask_026aff98);
  IVar4 = *(ID *)PTR__UIBackgroundTaskInvalid_02578100;
  if (IVar1 == IVar4) {
    _objc_initWeak(0,auStack_38,local_18);
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_0150dfc0;
    local_48 = &DAT_0257be28;
    _objc_copyWeak(auStack_40,auStack_38);
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_beginBackgroundTaskWithName_expi_0269d688,&cf_wcr_speech_broadcast,
               &local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSpeechBgTask__026affb8,puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  local_30 = (uint)(IVar1 != IVar4);
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

