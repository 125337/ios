// applicationDidBecomeActive: @ 01710540

/* Function Stack Size: 0x18 bytes */

void ToastManager::applicationDidBecomeActive_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentToastView_026b3958);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar2 != 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentToastView_026b3958);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar4 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4000000000000000,local_18,PTR_s_scheduleDismissTimerWithDuration_026b3960);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

