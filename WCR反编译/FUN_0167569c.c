// FUN_0167569c @ 0167569c

void FUN_0167569c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if ((*(long *)(param_1 + 0x30) == 3) || (*(long *)(param_1 + 0x30) == 4)) {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_48 = PTR___NSConcreteStackBlock_02578660;
    local_40 = 0xc2000000;
    local_3c = 0;
    local_38 = FUN_0167584c;
    local_30 = &DAT_0257a800;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = puVar1;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_0167589c;
    local_58 = &DAT_02581780;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_28 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_performChanges_completionHandler_026a1740,&local_48,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_28,0);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,&cf_evQQeQCgP);
  }
  return;
}

