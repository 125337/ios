// wcr_presentNumberInputTitle:subtitle:current:min:max:completion: @ 0057f0cc

/* Function Stack Size: 0x40 bytes */

void WCRMomentsScheduledTaskListViewController::
     wcr_presentNumberInputTitle_subtitle_current_min_max_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6,
               long_long param_7,ID param_8,undefined4 param_9)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_90 [8];
  long_long local_88;
  long_long local_80;
  long_long local_78;
  undefined1 auStack_70 [12];
  uint local_64;
  long local_60;
  long_long local_58;
  long_long local_50;
  long_long local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_60 = 0;
  local_58 = param_7;
  local_50 = param_6;
  local_48 = param_5;
  _objc_storeStrong(&local_60,param_8);
  bVar1 = local_60 != 0;
  if (bVar1) {
    _objc_initWeak(auStack_70,local_28);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_0057f2f8;
    local_b0 = &DAT_0257dfa8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_40;
    local_a8 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_60;
    local_a0 = uVar3;
    local_88 = local_48;
    local_80 = local_50;
    local_78 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar2;
    _objc_copyWeak(auStack_90,auStack_70);
    _dispatch_async(puVar5,&local_c8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_destroyWeak(auStack_70);
  }
  local_64 = (uint)!bVar1;
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

