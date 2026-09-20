// FUN_00296d84 @ 00296d84

void FUN_00296d84(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  byte local_19;
  long local_18;
  
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  if ((param_2 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,&cf_evQCgP);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_00296f7c;
    local_38 = &DAT_02578c20;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar1;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00296fcc;
    local_60 = &DAT_0257b788;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_30 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_performChanges_completionHandler_026a1740,&local_50,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

