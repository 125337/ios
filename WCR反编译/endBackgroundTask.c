// endBackgroundTask @ 00eb9274

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::endBackgroundTask(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bgTaskIdentifier_026ab348);
  if (IVar1 != *(ID *)PTR__UIBackgroundTaskInvalid_02578100) {
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bgTaskIdentifier_026ab348);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_endBackgroundTask__0269d680,IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_setBgTaskIdentifier__026ab360,
               *(undefined8 *)PTR__UIBackgroundTaskInvalid_02578100);
  }
  return;
}

