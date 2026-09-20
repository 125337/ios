// FUN_0058a9fc @ 0058a9fc

void FUN_0058a9fc(long param_1)

{
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028cb620;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e0d8);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  if ((param_1 < 1) || (7 < param_1)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_hT;
  }
  else {
    local_28 = DAT_028cb618;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cb618,PTR_s_objectAtIndexedSubscript__0269cc78,param_1 + -1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

