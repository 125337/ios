// FUN_01c449f8 @ 01c449f8

void FUN_01c449f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte local_60;
  undefined8 local_58;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_40 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_50 = 0;
  local_58 = 0;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_prepareNameplateExportZipForRela_026c1b50,*(undefined8 *)(param_1 + 0x28),
             &local_50,&local_58);
  _objc_storeStrong(&local_38,local_50);
  _objc_storeStrong(&local_40,local_58);
  puVar3 = PTR___dispatch_main_q_02578680;
  local_41 = (byte)uVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  local_60 = local_41 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_40;
  local_78 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar2;
  _dispatch_async(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

