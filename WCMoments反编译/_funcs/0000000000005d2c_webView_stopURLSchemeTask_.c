// webView:stopURLSchemeTask: @0x5d2c

/* Function Stack Size: 0x20 bytes */

void WCMAssetHandler::webView_stopURLSchemeTask_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
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
  uVar1 = (*(code *)PTR__objc_retain_00110460)(local_18);
  _objc_sync_enter();
  uVar2 = _objc_msgSend_activeTasks(local_18,local_50);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  _objc_msgSend_removeObject_(uVar2,local_50,local_30);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_sync_exit(uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

