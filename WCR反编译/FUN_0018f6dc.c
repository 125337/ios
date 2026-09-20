// FUN_0018f6dc @ 0018f6dc

long FUN_0018f6dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long local_e0;
  long local_d8;
  long local_50 [3];
  long local_38;
  long local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  local_30 = param_3;
  local_28 = param_2;
  FUN_0018a440(local_20,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = lVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_50[0] == 0) {
    if (local_30 < 0) {
      local_e0 = 0;
    }
    else {
      local_e0 = local_30;
    }
    local_18 = local_e0;
  }
  else {
    local_d8 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_integerValue_026ca750);
    if (local_d8 < 0) {
      local_d8 = 0;
    }
    local_18 = local_d8;
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

