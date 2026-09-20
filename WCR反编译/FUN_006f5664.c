// FUN_006f5664 @ 006f5664

void FUN_006f5664(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint local_bc;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x38;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  puVar1 = PTR___dispatch_main_q_02578680;
  local_28 = lVar2;
  if (lVar2 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_006f5a50;
    local_38 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = lVar2;
    _dispatch_async(puVar1,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_30,0);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_status_026a1830);
  local_bc = 0;
  if (lVar2 == 3) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630);
    local_bc = (uint)puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_bc & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,&cf_U_O_WYX_Q1Y_);
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

