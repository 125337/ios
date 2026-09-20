// FUN_00282158 @ 00282158

void FUN_00282158(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  byte local_58;
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
    local_40 = FUN_0028235c;
    local_38 = &DAT_02578c20;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar1;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_0028242c;
    local_68 = &DAT_0257b378;
    local_58 = *(byte *)(param_1 + 0x30) & 1;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_30 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_performChanges_completionHandler_026a1740,&local_50,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

