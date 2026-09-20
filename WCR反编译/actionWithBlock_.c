// actionWithBlock: @ 01c7aef0

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginHubGroupManagerViewController::actionWithBlock_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  puVar1 = PTR_WCRefinePluginHubCellAction_026cf4a0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefinePluginHubCellAction_026cf4a0,PTR_s_new_0269d288)
  ;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setBlock__026b4f10,local_28);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_actionTargets_026b4558);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

