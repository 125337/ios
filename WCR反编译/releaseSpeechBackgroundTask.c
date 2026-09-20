// releaseSpeechBackgroundTask @ 0150e144

/* Function Stack Size: 0x10 bytes */

void WCRSpeechBroadcastEngine::releaseSpeechBackgroundTask(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(param_1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_speechBgTask_026aff98);
  if (IVar1 != *(ID *)PTR__UIBackgroundTaskInvalid_02578100) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_speechBgTask_026aff98);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_endBackgroundTask__0269d680,IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setSpeechBgTask__026affb8,
               *(undefined8 *)PTR__UIBackgroundTaskInvalid_02578100);
  }
  _objc_sync_exit(param_1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

