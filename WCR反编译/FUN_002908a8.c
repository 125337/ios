// FUN_002908a8 @ 002908a8

void FUN_002908a8(ulong param_1)

{
  ulong uVar1;
  dispatch_time_t dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  ulong local_20;
  ulong local_18;
  
  uVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_00290aac();
  if (((uVar1 & 1) == 0) ||
     (lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8), lVar6 = *(long *)(lVar7 + 0x18),
     *(long *)(lVar7 + 0x18) = lVar6 + -1, lVar6 < 1)) {
    uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    _objc_retainBlock();
    lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    uVar4 = *(undefined8 *)(lVar6 + 0x28);
    *(undefined8 *)(lVar6 + 0x28) = 0;
    local_50 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    dVar2 = _dispatch_time(0,450000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00290dfc;
    local_60 = &DAT_02579910;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar3;
    _dispatch_after(dVar2,puVar5,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    dVar2 = _dispatch_time(0,250000000);
    puVar5 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_00290da0;
    local_30 = &DAT_0257b2e8;
    local_28 = *(undefined8 *)(param_1 + 0x30);
    _dispatch_after(dVar2,puVar5,&local_48);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  return;
}

