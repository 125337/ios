// FUN_0074a9e8 @ 0074a9e8

undefined8 FUN_0074a9e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_2;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_recordedAt);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_20,0);
  return param_1;
}

