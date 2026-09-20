// wcr_operatorGlassNativeAck: @ 00f98948

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::wcr_operatorGlassNativeAck_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  IVar1 = local_18;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30[0] = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_setAssociatedObject(local_18,&DAT_028e2f08,0);
  _objc_setAssociatedObject(local_18,&DAT_028e2f09,0,0);
  if (local_30[0] != 0) {
    (**(code **)(local_30[0] + 0x10))(local_30[0],1);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  return;
}

