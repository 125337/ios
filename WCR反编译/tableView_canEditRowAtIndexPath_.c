// tableView:canEditRowAtIndexPath: @ 01eb75d8

/* Function Stack Size: 0x20 bytes */

bool WCRefineToDoListEditorViewController::tableView_canEditRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_entryAtIndexPath__026c77d0,local_30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (uint)(IVar1 != 0);
}

