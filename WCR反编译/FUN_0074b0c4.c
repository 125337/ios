// FUN_0074b0c4 @ 0074b0c4

double FUN_0074b0c4(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  double local_80;
  undefined8 local_50;
  undefined8 local_28;
  undefined8 local_20;
  double local_18;
  
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  bVar1 = param_1 <= 0.0;
  local_80 = param_1;
  if (bVar1) {
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_createTime);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = param_1;
  }
  local_18 = local_80;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  _objc_storeStrong(&local_28,0);
  return local_18;
}

