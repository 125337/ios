// FUN_00f45fe0 @ 00f45fe0

void FUN_00f45fe0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long local_c8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  long local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined **local_48;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  lVar2 = local_30;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_c8 = *(long *)(param_1 + 0x20);
  }
  else {
    local_c8 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_40 = local_c8;
  ppuVar4 = &local_80;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_00f4624c;
  local_68 = &DAT_02582d68;
  local_50 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  lVar2 = local_40;
  local_60 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = lVar2;
  _objc_retainBlock();
  puVar5 = PTR___dispatch_main_q_02578680;
  local_48 = ppuVar4;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_40;
  local_b8 = puVar1;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_00f4640c;
  local_a0 = &DAT_02582d98;
  local_88 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  ppuVar4 = local_48;
  local_98 = lVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = ppuVar4;
  _dispatch_async(puVar5,&local_b8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

