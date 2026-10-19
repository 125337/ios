// collectionView:layout:sizeForItemAtIndexPath: @0x1bed4

/* Function Stack Size: 0x28 bytes */

CGSize WCMVideoController::collectionView_layout_sizeForItemAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  CGSize CVar1;
  double in_d2;
  double in_d3;
  undefined8 local_90;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  double local_20;
  double dStack_18;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  _objc_msgSend_bounds(local_38,local_90);
  local_20 = in_d2;
  dStack_18 = in_d3;
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  CVar1.field1_0x8 = dStack_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

