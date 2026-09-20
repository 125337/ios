// FUN_01a9c680 @ 01a9c680

byte FUN_01a9c680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setValue_forKey__0269d300,local_30,local_28);
  local_11 = 1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

