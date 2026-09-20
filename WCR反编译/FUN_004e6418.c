// FUN_004e6418 @ 004e6418

byte FUN_004e6418(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  ulong local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = param_2;
  if (((local_20 == 0) || (param_2 == 0)) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
     puVar2 = PTR___dispatch_main_q_02578680, (uVar1 & 1) == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_004e6778;
    local_50 = &DAT_025791c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar1;
    local_40 = local_28;
    _dispatch_async(puVar2,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_11 = 1;
    local_38 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

