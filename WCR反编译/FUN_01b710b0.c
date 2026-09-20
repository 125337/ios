// FUN_01b710b0 @ 01b710b0

void FUN_01b710b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_importDouTuBackupFromDeviceIntoP_026bfae8
             ,*(undefined8 *)(param_1 + 0x20),puVar1);
  puVar1 = PTR___dispatch_main_q_02578680;
  local_30 = puVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_38 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = puVar2;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  local_50 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_48 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_28,0);
  return;
}

