// tableView:numberOfRowsInSection: @0x627c

/* Function Stack Size: 0x20 bytes */

long_long WCMMomentsSettingsController::tableView_numberOfRowsInSection_
                    (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  int iVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  iVar1 = 4;
  if (param_4 == 0) {
    iVar1 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return (long)iVar1;
}

