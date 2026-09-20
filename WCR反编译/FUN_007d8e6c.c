// FUN_007d8e6c @ 007d8e6c

void FUN_007d8e6c(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  undefined *local_48;
  undefined **local_40 [3];
  undefined *local_28;
  uint local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar1 = local_18 != 0;
  if (bVar1) {
    DAT_028cce60 = DAT_028cce60 + 1;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,DAT_028cce60);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    _objc_setAssociatedObject(local_18,&DAT_028cce68,puVar3,1);
    lVar2 = local_18;
    ppuVar4 = &local_70;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_007d90b0;
    local_58 = &DAT_02580030;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_28;
    local_50 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = puVar3;
    _objc_retainBlock();
    local_40[0] = ppuVar4;
    (*(code *)ppuVar4[2])(DAT_02323da8);
    (*(code *)local_40[0][2])(DAT_02323c60);
    (*(code *)local_40[0][2])(DAT_02323d88);
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_28,0);
  }
  local_1c = (uint)!bVar1;
  _objc_storeStrong(&local_18,0);
  return;
}

