// FUN_001a1aa8 @ 001a1aa8

void FUN_001a1aa8(undefined8 param_1,long param_2,byte param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_48 [3];
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
    FUN_0018a2dc(local_18,1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_30 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = puVar2;
    if ((local_21 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObject__0269d678,puVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,puVar2);
    }
    _objc_storeStrong(local_48);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

