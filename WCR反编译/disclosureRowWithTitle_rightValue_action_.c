// disclosureRowWithTitle:rightValue:action: @ 0168ebe8

/* Function Stack Size: 0x28 bytes */

ID AccountDetailViewController::disclosureRowWithTitle_rightValue_action_
             (ID param_1,SEL param_2,ID param_3,ID param_4,SEL param_5)

{
  undefined *puVar1;
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
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,param_5,
             local_18,local_28,local_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

