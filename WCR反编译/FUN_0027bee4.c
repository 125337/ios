// FUN_0027bee4 @ 0027bee4

void FUN_0027bee4(undefined8 param_1,byte param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 local_78;
  undefined8 local_48;
  undefined8 local_30;
  undefined8 local_28;
  byte local_19;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_19 = param_2;
  _objc_storeStrong(&local_28,param_3);
  bVar1 = (local_19 & 1) == 0;
  if (bVar1) {
    local_78 = 0;
  }
  else {
    local_78 = local_18;
    FUN_0027a410();
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_78;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  FUN_0027c064(local_18,local_30,local_28);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

