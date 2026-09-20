// FUN_0074eb8c @ 0074eb8c

void FUN_0074eb8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar2 = local_18;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    local_38 = param_1;
    FUN_0074998c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_20;
    local_68 = PTR___NSConcreteGlobalBlock_02578658;
    local_60 = 0xd0800000;
    local_5c = 0;
    local_58 = FUN_0074eda0;
    local_50 = &DAT_0257f968;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar1;
    local_40 = local_38;
    _dispatch_sync(puVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_48,0);
  }
  local_30 = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

