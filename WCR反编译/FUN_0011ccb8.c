// FUN_0011ccb8 @ 0011ccb8

void FUN_0011ccb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  lVar2 = local_18;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     puVar3 = PTR___dispatch_main_q_02578680, lVar2 == 0)) {
    local_38 = 1;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_18;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_001230d8;
    local_58 = &DAT_025796f0;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_20;
    local_50 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar2;
    local_40 = local_28;
    _dispatch_async(puVar3,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

