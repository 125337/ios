// startUpdateTimer @ 0090ae50

/* Function Stack Size: 0x10 bytes */

void LogFloatingBall::startUpdateTimer(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateTimer_026aa0c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateTimer_026aa0c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,PTR__OBJC_CLASS___NSTimer_026ce210,
             PTR_s_scheduledTimerWithTimeInterval_t_026a4968,param_1,PTR_s_updateLogs_026aa030,0,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setUpdateTimer__026aa0c8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

