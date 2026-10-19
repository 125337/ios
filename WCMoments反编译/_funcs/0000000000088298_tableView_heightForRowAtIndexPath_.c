// tableView:heightForRowAtIndexPath: @0x88298

/* Function Stack Size: 0x20 bytes */

double WCMYBIBSheetView::tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  double dVar1;
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
  dVar1 = (double)_objc_msgSend_cellHeight(local_18,local_58);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return dVar1;
}

