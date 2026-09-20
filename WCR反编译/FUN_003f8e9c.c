// FUN_003f8e9c @ 003f8e9c

undefined1  [16] FUN_003f8e9c(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined8 local_30;
  undefined8 local_28;
  double local_20;
  double local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,local_30);
  dVar2 = param_2;
  dVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_translationInView__026cabb0,local_30);
  param_1 = param_1 - dVar2;
  param_2 = param_2 - dVar3;
  FUN_003f9348();
  local_20 = param_1;
  local_18 = param_2;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

