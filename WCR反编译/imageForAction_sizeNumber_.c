// imageForAction:sizeNumber: @ 0161d414

/* Function Stack Size: 0x20 bytes */

ID WCRSuperFloatDisplayHelper::imageForAction_sizeNumber_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ID IVar2;
  double local_68;
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
  IVar2 = local_18;
  uVar1 = local_28;
  local_68 = 1.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_doubleValue_026ca608);
  if (local_68 <= 1.0) {
    local_68 = 1.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_68,IVar2,PTR_s_imageForAction_size__026b19f8,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar2;
}

