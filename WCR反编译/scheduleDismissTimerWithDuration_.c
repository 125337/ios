// scheduleDismissTimerWithDuration: @ 01715180

/* Function Stack Size: 0x18 bytes */

void ToastManager::scheduleDismissTimerWithDuration_(ID param_1,SEL param_2,double param_3)

{
  double dVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dismissTimer_026b3950);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissTimer_026b3950);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDismissTimer__026b3930,0);
  }
  _objc_initWeak(auStack_40,local_18);
  dVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSTimer_026ce210;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_017153e4;
  local_50 = &DAT_025885e0;
  _objc_copyWeak(auStack_48,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar1,puVar3,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,0,&local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDismissTimer__026b3930);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  return;
}

