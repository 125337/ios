// FUN_0018fe24 @ 0018fe24

void FUN_0018fe24(undefined8 param_1,long param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long local_30;
  undefined4 local_28;
  byte local_21;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = param_3;
  local_20 = param_2;
  if ((local_18 == 0) || (param_2 < 0)) {
    local_28 = 1;
  }
  else {
    lVar1 = local_18;
    FUN_0018a5a4(local_18,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_20);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

