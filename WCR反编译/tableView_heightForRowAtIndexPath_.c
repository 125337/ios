// tableView:heightForRowAtIndexPath: @ 01eec610

/* Function Stack Size: 0x20 bytes */

double WCRefineToDoHTMLRepositoryViewController::tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  double dVar3;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar3 = 120.0;
  if (IVar2 != 0) {
    dVar3 = 190.0;
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return dVar3;
}

