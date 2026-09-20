// FUN_01b03a34 @ 01b03a34

void FUN_01b03a34(undefined8 param_1)

{
  undefined8 local_18;
  
  FUN_01b03980();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(param_1);
  return;
}

