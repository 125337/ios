// action2: @ 00fa3c54

/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::action2_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_btnArray);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (*(long *)(local_18 + 0x10) != 0) {
    lVar2 = *(long *)(local_18 + 0x10);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

