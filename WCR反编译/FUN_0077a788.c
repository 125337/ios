// FUN_0077a788 @ 0077a788

undefined8
FUN_0077a788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28,param_5);
  local_18 = local_20;
  if (local_28 == 0) {
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    FUN_0077a918(local_18,uVar1,param_2,param_3,param_4);
  }
  _objc_storeStrong(&local_28,0);
  return local_18;
}

