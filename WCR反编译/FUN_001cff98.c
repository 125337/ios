// FUN_001cff98 @ 001cff98

byte FUN_001cff98(double param_1,undefined8 param_2)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_50;
  ulong local_48 [3];
  double local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    _CACurrentMediaTime();
    uVar2 = local_20;
    local_30 = param_1;
    _objc_getAssociatedObject(local_20,&DAT_028c9030);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    local_48[0] = uVar2;
    _objc_getAssociatedObject(local_20,&DAT_028c9031);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48[0];
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    if ((((uVar2 & 1) == 0) ||
        (uVar2 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540),
        (uVar2 & 1) == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_doubleValue_026ca608),
       param_1 < local_30)) {
      uVar3 = local_20;
      FUN_001d2164();
      uVar2 = local_20;
      bVar1 = (byte)uVar3;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,(uint)uVar3 & 1)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028c9031,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar2 = local_20;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30 + 0.25,PTR__OBJC_CLASS___NSNumber_026ce038,
                 PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028c9030,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_boolValue_026ca540);
      bVar1 = (byte)uVar2;
    }
    local_11 = bVar1 & 1;
    local_24 = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

