// FUN_01b70ab0 @ 01b70ab0

void FUN_01b70ab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_40 = (undefined *)0x0;
  lVar3 = *(long *)(param_1 + 0x20);
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_path_0269d4d8);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  if (lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,
                 PTR_s_importDouTuBackupFromText_intoPa_026bfae0,*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x28),local_38);
      local_40 = puVar2;
    }
    else {
      puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,
                 PTR_s_importDouTuBackupFromData_intoPa_026ae408,*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x28),local_38);
      local_40 = puVar2;
    }
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_importDouTuBackupAtPath_intoPack_026ae400,uVar4,
               *(undefined8 *)(param_1 + 0x28),local_38);
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_38;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01b70de4;
  local_70 = &DAT_0257d7c8;
  local_48 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = puVar1;
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  (*(code *)PTR__objc_retain_02578638)();
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  local_60 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  local_58 = uVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar4;
  _dispatch_async(puVar2,&local_88);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_38,0);
  return;
}

