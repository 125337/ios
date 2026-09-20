// FUN_003e24b4 @ 003e24b4

void FUN_003e24b4(ulong param_1)

{
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028ca408;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257ce90);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if (8 < param_1) {
    local_48 = &cf___;
  }
  else {
    local_48 = DAT_028ca400;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028ca400,PTR_s_objectAtIndexedSubscript__0269cc78,param_1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (8 >= param_1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_autoreleaseReturnValue(local_48);
  return;
}

