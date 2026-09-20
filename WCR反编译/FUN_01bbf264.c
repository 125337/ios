// FUN_01bbf264 @ 01bbf264

void FUN_01bbf264(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98 [3];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  lVar1 = param_1 + 0x28;
  local_48 = param_1;
  _objc_loadWeakRetained();
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_01bbf50c;
  local_68 = &DAT_0258b640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = uVar2;
  _objc_copyWeak(auStack_50,param_1 + 0x28);
  uVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_updateRuleWithBlock__026c0568,&local_80);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resignFirstResponder_0269ea18);
  dVar3 = _dispatch_time(0,280000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_38;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_01bbf5d4;
  local_a0 = &DAT_0257a800;
  (*(code *)PTR__objc_retain_02578638)();
  local_98[0] = uVar2;
  _dispatch_after(dVar3,puVar4,&local_b8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(local_98);
  _objc_storeStrong(&local_58,0);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

