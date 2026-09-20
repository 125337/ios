// FUN_00f46c98 @ 00f46c98

void FUN_00f46c98(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  byte local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x30);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_GIFDataByRemovingMetadata__026ac318,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    _objc_storeStrong(&local_28,*(undefined8 *)(param_1 + 0x20));
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_imageUTIForData__026ac320,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___dispatch_main_q_02578680;
  local_30 = uVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_00f46e98;
  local_58 = &DAT_02582ee8;
  local_38 = *(byte *)(param_1 + 0x38) & 1;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_30;
  local_40 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  lVar1 = local_28;
  local_50 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = lVar1;
  _dispatch_async(puVar3,&local_70);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

