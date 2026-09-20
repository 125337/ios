// FUN_00830e60 @ 00830e60

undefined8
FUN_00830e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
  uVar2 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentOffset_0269dd18);
  uVar1 = 0;
  FUN_0081e864();
  local_30 = uVar1;
  local_28 = uVar2;
  local_20 = param_3;
  local_18 = param_4;
  _objc_storeStrong(&local_38,0);
  return local_30;
}

