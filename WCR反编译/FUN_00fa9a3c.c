// FUN_00fa9a3c @ 00fa9a3c

void FUN_00fa9a3c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_18 = &DAT_028e3008;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02583d30);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    uVar2 = DAT_028e3000;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3000,PTR_s_objectForKeyedSubscript__0269d098,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar2;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

