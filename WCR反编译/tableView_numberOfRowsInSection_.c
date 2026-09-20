// tableView:numberOfRowsInSection: @ 01eec524

/* Function Stack Size: 0x20 bytes */

long_long WCRefineToDoHTMLRepositoryViewController::tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  ID IVar1;
  ID local_68;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((long)local_68 < 2) {
    local_68 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return local_68;
}

