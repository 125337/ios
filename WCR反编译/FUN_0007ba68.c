// FUN_0007ba68 @ 0007ba68

byte FUN_0007ba68(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long local_50 [3];
  double local_38;
  undefined4 local_2c;
  double local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = param_1;
  if (local_20 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    _CFAbsoluteTimeGetCurrent();
    lVar2 = local_20;
    local_38 = param_1;
    _objc_getAssociatedObject(local_20,DAT_026df7a8);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_doubleValue_026ca608);
    lVar2 = local_20;
    uVar1 = DAT_026df7a8;
    if ((param_1 <= 0.0) || (local_28 <= local_38 - param_1)) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar2,uVar1,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_11 = 1;
    }
    else {
      local_11 = 0;
    }
    local_2c = 1;
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

