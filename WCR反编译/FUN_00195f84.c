// FUN_00195f84 @ 00195f84

uint FUN_00195f84(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  uint local_90;
  long local_48 [3];
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_28 = param_3;
  local_20 = param_2;
  FUN_0018a5a4(local_18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = lVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_28 != 0) {
    *(bool *)local_28 = local_48[0] != 0;
  }
  if (local_48[0] == 0) {
    local_90 = 0;
  }
  else {
    lVar1 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_boolValue_026ca540);
    local_90 = (uint)lVar1;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_18,0);
  return local_90 & 1;
}

