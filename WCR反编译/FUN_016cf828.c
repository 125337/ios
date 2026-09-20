// FUN_016cf828 @ 016cf828

void FUN_016cf828(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *local_90;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_90 = (undefined8 *)(param_1 + 0x28);
  }
  else {
    local_90 = (undefined8 *)(param_1 + 0x20);
  }
  uVar2 = *local_90;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_dedicatedImportPackNameForZipPat_026ae3c0
             ,uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_importZipAtPath_intoPack__026ae3b8,
             *(undefined8 *)(param_1 + 0x28),puVar3);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_48 = puVar4;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_016cfa70;
  local_68 = &DAT_025796f0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  puVar4 = local_30;
  local_50 = local_48;
  local_60 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = puVar4;
  _dispatch_async(puVar3,&local_80);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

