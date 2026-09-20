// FUN_007b1138 @ 007b1138

void FUN_007b1138(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_007ac894();
  if ((param_1 & 1) == 0) {
    (*DAT_028ccc18)(local_18,local_20);
  }
  else {
    (*DAT_028ccc18)(local_18,local_20);
    _objc_storeWeak(&DAT_028ccbe8,local_18);
    _objc_initWeak(auStack_28,local_18);
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_007b4d7c;
    local_38 = &DAT_02578da0;
    _objc_copyWeak(auStack_30,auStack_28);
    _dispatch_async(puVar1,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}

