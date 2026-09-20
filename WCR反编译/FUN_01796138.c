// FUN_01796138 @ 01796138

void FUN_01796138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar1 = local_18;
  local_28 = param_1;
  local_20 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if ((uVar1 == 0) ||
     (uVar1 = local_18, FUN_01796c38(), puVar2 = PTR___dispatch_main_q_02578680, (uVar1 & 1) != 0))
  {
    local_38 = 1;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_18;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01796dc8;
    local_58 = &DAT_02588c10;
    local_48 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    local_40 = local_28;
    _dispatch_async(puVar2,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_50,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

