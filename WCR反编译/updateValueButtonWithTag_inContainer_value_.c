// updateValueButtonWithTag:inContainer:value: @ 01a82318

/* Function Stack Size: 0x28 bytes */

void WCRefineGlobalPageBackgroundViewController::updateValueButtonWithTag_inContainer_value_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,double param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_30;
  local_38 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewWithTag__026cabe0,local_28);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  local_40 = uVar1;
  FUN_01a82230(local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setTitle_forState__026caab8,uVar2,0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

