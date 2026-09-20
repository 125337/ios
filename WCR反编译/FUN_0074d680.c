// FUN_0074d680 @ 0074d680

byte FUN_0074d680(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  byte *local_50;
  byte local_41;
  undefined8 local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_20;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    local_41 = 0;
    local_40 = param_1;
    FUN_0074998c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_80 = PTR___NSConcreteGlobalBlock_02578658;
    local_78 = 0xd0800000;
    local_74 = 0;
    local_70 = FUN_0074df5c;
    local_68 = &DAT_0257f948;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = lVar1;
    local_58 = local_40;
    local_50 = &local_41;
    _dispatch_sync(puVar2,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11 = local_41 & 1;
    local_38 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

