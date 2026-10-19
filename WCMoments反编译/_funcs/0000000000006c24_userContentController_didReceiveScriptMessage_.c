// userContentController:didReceiveScriptMessage: @0x6c24

/* Function Stack Size: 0x20 bytes */

void WCMWeakHandler::userContentController_didReceiveScriptMessage_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 local_58;
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
  _objc_msgSend_target(local_18,local_58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_userContentController_didReceiveScriptMessage_(uVar1,local_58,local_28,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

