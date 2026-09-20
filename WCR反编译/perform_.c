// perform: @ 005586a4

/* Function Stack Size: 0x18 bytes */

void WCRMomentsMenuActionTarget::perform_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cell_026a4fd0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_value_0269d830);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dataItem_026a13c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_location_026a4fd8);
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d0,in_d1,IVar1,PTR_s_WCRefinePerformDoubleTapActionVa_026a4fe0,IVar2,IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

