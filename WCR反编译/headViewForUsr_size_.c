// headViewForUsr:size: @ 01d9d0d8

/* Function Stack Size: 0x20 bytes */

ID WCRefineSessionStatsBoardView::headViewForUsr_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_4,local_18,PTR_s_headViewForUsr_size_privacy__026c4f00,local_28,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar1;
}

