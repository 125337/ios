// FUN_009d255c @ 009d255c

void FUN_009d255c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finished_026a15b0);
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFinished__026a15b8,1);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_28;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_009d4504;
    local_70 = &DAT_0257cba8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_30;
    local_68 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_38;
    local_50 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_40;
    local_60 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar2;
    _dispatch_async(puVar5,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_68,0);
  }
  local_44 = (uint)!bVar1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

