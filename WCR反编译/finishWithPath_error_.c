// finishWithPath:error: @ 00273114

/* Function Stack Size: 0x20 bytes */

void WCRFinderDLWaiter::finishWithPath_error_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_finished_026a15b0);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFinished__026a15b8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancel_0269d1e8);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCompletion__0269fdc8,0);
    if (DAT_028c95a0 == local_18) {
      _objc_storeStrong(0,&DAT_028c95a0,0);
    }
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(local_48,local_28,local_30);
    }
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  else {
    local_40 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

