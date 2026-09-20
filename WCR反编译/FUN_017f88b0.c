// FUN_017f88b0 @ 017f88b0

void FUN_017f88b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_20;
  local_30 = param_1;
  if (local_28 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_20;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = PTR___dispatch_main_q_02578680;
      local_40 = uVar1;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_017f8b10;
      local_58 = &DAT_0257a7a0;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_40;
      local_50 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = uVar3;
      _dispatch_async(puVar2,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
      goto LAB_017f8aa0;
    }
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_34 = 1;
LAB_017f8aa0:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

