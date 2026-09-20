// FUN_00026c48 @ 00026c48

void FUN_00026c48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48 = param_1;
  local_40 = param_4;
  local_38 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_______);
  _objc_retainAutoreleasedReturnValue();
  dVar6 = (double)NEON_ucvtf(local_38);
  local_50 = puVar2;
  dVar3 = _dispatch_time(0,(long)(dVar6 * 0.35 * 1000000000.0));
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_50;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_00026f10;
  local_88 = &DAT_02579000;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = puVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  local_78 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = *(undefined8 *)(param_1 + 0x40);
  local_70 = uVar5;
  _dispatch_after(dVar3,puVar2,&local_a0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_30,0);
  return;
}

