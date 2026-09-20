// FUN_007490e0 @ 007490e0

byte FUN_007490e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  byte local_69;
  undefined8 local_68;
  undefined4 local_60;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = local_30;
  local_48 = param_1;
  FUN_0074c890(local_30,local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_21 = 1;
    local_60 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
    local_69 = 1;
    local_68 = param_1;
    FUN_0074998c();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_50;
    local_b0 = PTR___NSConcreteGlobalBlock_02578658;
    local_a8 = 0xd0800000;
    local_a4 = 0;
    local_a0 = FUN_0074cb90;
    local_98 = &DAT_0257f908;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar1;
    local_88 = local_68;
    local_80 = local_48;
    local_78 = &local_69;
    _dispatch_sync(puVar2,&local_b0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_21 = local_69 & 1;
    local_60 = 1;
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

