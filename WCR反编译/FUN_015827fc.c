// FUN_015827fc @ 015827fc

/* WARNING: Type propagation algorithm not settling */

void FUN_015827fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  long local_58;
  uint local_4c;
  long local_48;
  long local_40 [4];
  
  local_40[2] = 0;
  local_40[3] = param_1;
  _objc_storeStrong(local_40 + 2);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  local_48 = param_1;
  if ((local_40[0] == 0) &&
     (lVar2 = local_40[2], (*(code *)PTR__objc_msgSend_02578628)(local_40[2],PTR_s_length_0269cca0),
     lVar2 != 0)) {
    lVar2 = local_40[2];
    FUN_0155f6d8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___dispatch_main_q_02578680;
    local_58 = lVar2;
    if (lVar2 != 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_01582a9c;
      local_88 = &DAT_02584500;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      local_80 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      local_78 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_58;
      local_70 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = lVar1;
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar4;
      _dispatch_async(puVar3,&local_a0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_80,0);
    }
    local_4c = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_58,0);
    if (local_4c == 0) {
      local_4c = 0;
    }
  }
  else {
    local_4c = 1;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return;
}

