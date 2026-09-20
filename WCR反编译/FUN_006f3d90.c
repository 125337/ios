// FUN_006f3d90 @ 006f3d90

void FUN_006f3d90(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint local_e4;
  long local_b0;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  long local_58 [3];
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_b0 = param_1 + 0x38;
  local_30 = param_1;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_38 = local_b0;
  if (local_b0 == 0) {
    local_b0 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_wcr_exportCIFrameCount_026a7100);
  }
  local_40 = local_b0;
  if (local_38 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_wcr_logExportCompletion_stage_ou_026a7168,
               *(undefined8 *)(param_1 + 0x20),&cf_WYX4lpS_,*(undefined8 *)(param_1 + 0x28),local_b0
              );
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_006f4214;
    local_60 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = lVar2;
    _dispatch_async(puVar1,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(local_58,0);
  }
  lVar2 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_status_026a1830);
  local_e4 = 0;
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
    local_e4 = (uint)puVar4;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_e4 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
                (*(long *)(param_1 + 0x30),0,&cf_U_O_WYX4lpS_Q1Y_);
    }
  }
  else if (*(long *)(param_1 + 0x30) != 0) {
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
              (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

