// FUN_0061443c @ 0061443c

/* WARNING: Type propagation algorithm not settling */

void FUN_0061443c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40 [4];
  
  local_40[2] = 0;
  local_40[3] = param_1;
  _objc_storeStrong(local_40 + 2);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_48 = param_1;
  if ((local_40[2] != 0) && (local_40[0] == 0)) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_00614634;
    local_70 = &DAT_0257b6a8;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_68 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    local_60 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_40[2];
    local_58 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = lVar1;
    _dispatch_async(puVar2,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return;
}

