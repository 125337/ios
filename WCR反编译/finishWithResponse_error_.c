// finishWithResponse:error: @ 00f7212c

/* Function Stack Size: 0x20 bytes */

void WCRFriendRelationCgiBridge::finishWithResponse_error_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID local_40;
  undefined4 local_34;
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
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_handler_0269fbe8);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHandler__0269fb20,0);
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))(local_40,local_28,local_30);
    }
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  else {
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

