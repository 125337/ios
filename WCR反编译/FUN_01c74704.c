// FUN_01c74704 @ 01c74704

void FUN_01c74704(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  long local_38;
  long local_30;
  long local_28;
  
  lVar2 = *(long *)(param_3 + 0x20);
  local_30 = param_3;
  local_28 = param_3;
  FUN_01c7497c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  if (lVar2 != 0) {
    FUN_01c74690();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
    dVar6 = param_1;
    local_48 = param_1;
    local_40 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_size_026cab00);
    local_58 = dVar6;
    local_50 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setObject_forKey_cost__0269e0c0,lVar1,uVar5,
               (long)(param_1 * param_2 * 4.0));
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_01c7506c;
  local_80 = &DAT_0257d718;
  uVar5 = *(undefined8 *)(param_3 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  local_78 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  local_70 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  lVar2 = local_38;
  local_68 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = lVar2;
  _dispatch_async(puVar3,&local_98);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_38,0);
  return;
}

