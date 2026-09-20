// FUN_00338ac8 @ 00338ac8

long FUN_00338ac8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_30 = 0;
  local_28 = param_2;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  FUN_0033977c(local_20);
  if (local_28 == 0) {
    local_18 = 0;
    local_48 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    FUN_0033702c(local_38,local_30,local_50,puVar2);
    local_60 = 0;
    lVar3 = local_28;
    FUN_00339514(local_28,&cf___N,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar3;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_insertObject_atIndex__0269eac0,lVar3,local_60);
      local_60 = local_60 + 1;
    }
    lVar3 = local_28;
    FUN_00339514(local_28,&cf__t,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar3;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_insertObject_atIndex__0269eac0,lVar3,local_60);
      local_60 = local_60 + 1;
    }
    local_18 = local_60;
    local_48 = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

