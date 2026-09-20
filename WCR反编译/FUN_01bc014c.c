// FUN_01bc014c @ 01bc014c

void FUN_01bc014c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong();
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar2 = param_1 + 0x20;
  local_48 = param_1;
  _objc_loadWeakRetained();
  uVar1 = local_30;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01bc0360;
  local_58 = &DAT_02587458;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_updateRuleWithBlock__026c0568);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resignFirstResponder_0269ea18);
  dVar3 = _dispatch_time(0,280000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar1;
  _dispatch_after(dVar3,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

