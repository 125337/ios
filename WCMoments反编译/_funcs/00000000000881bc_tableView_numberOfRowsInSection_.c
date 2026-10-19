// tableView:numberOfRowsInSection: @0x881bc

/* Function Stack Size: 0x20 bytes */

long_long WCMYBIBSheetView::tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined8 local_60;
  long_long local_58;
  undefined8 local_40;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (param_4 != 0) {
    local_58 = 1;
  }
  else {
    _objc_msgSend_actions(local_20,local_60);
    local_40 = _objc_retainAutoreleasedReturnValue();
    local_58 = _objc_msgSend_count(local_40,local_60);
  }
  local_18 = local_58;
  if (param_4 == 0) {
    (*(code *)PTR__objc_release_00110458)(local_40);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

