// WCRefineToDo_rectForRowAtIndexPath: @ 007fbcf4

/* Function Stack Size: 0x18 bytes */

CGRect WCRefineToDoHook::WCRefineToDo_rectForRowAtIndexPath_(ID param_1,SEL param_2,ID param_3)

{
  CGRect CVar1;
  ID IVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  ID local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  IVar2 = local_38;
  FUN_007fb85c(local_38,local_48,&cf_rectForRow);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar2;
  FUN_007fb9b4();
  FUN_007fba8c(1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_WCRefineToDo_rectForRowAtIndexPa_026a8930,local_50);
  local_30 = in_d0;
  local_28 = in_d1;
  local_20 = in_d2;
  local_18 = in_d3;
  FUN_007fba8c((byte)IVar2 & 1);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  CVar1.field0_0x0.field1_0x8 = (double)local_28;
  CVar1.field0_0x0.field0_0x0 = (double)local_30;
  CVar1.field1_0x10.field0_0x0 = (double)local_20;
  CVar1.field1_0x10.field1_0x8 = local_18;
  return CVar1;
}

