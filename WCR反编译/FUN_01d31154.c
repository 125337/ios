// FUN_01d31154 @ 01d31154

/* WARNING: Type propagation algorithm not settling */

void FUN_01d31154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  int local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  long local_40 [4];
  
  local_40[2] = 0;
  local_40[3] = param_1;
  _objc_storeStrong(local_40 + 2);
  local_40[1] = 0;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_48 = param_1;
  if ((local_40[0] == 0) && (local_40[2] != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_40[2]);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___dispatch_main_q_02578680;
    local_80 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_01d3156c;
      local_90 = &DAT_0257a800;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = uVar1;
      _dispatch_async(puVar3,&local_a8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_74 = 1;
      _objc_storeStrong(&local_88,0);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_01d31630;
      local_c0 = &DAT_0257a7a0;
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_80;
      local_b8 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      _dispatch_async(puVar3,&local_d8);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_b8,0);
      local_74 = 0;
    }
    _objc_storeStrong(&local_80,0);
    if (local_74 == 0) {
      local_74 = 0;
    }
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01d314a8;
    local_58 = &DAT_0257a800;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar1;
    _dispatch_async(puVar3,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_74 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(local_40 + 1,0);
  _objc_storeStrong(local_40 + 2,0);
  return;
}

