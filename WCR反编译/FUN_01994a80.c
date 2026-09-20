// FUN_01994a80 @ 01994a80

void FUN_01994a80(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  byte local_28;
  byte local_21;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isCancelled_026a1c20);
  local_6c = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    FUN_01994ccc(uVar2,*(undefined8 *)(param_1 + 0x30));
    local_6c = (byte)uVar2;
  }
  local_21 = local_6c & 1;
  uVar1 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isCancelled_026a1c20);
  if (((uVar1 & 1) != 0) || ((local_21 & 1) == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_0199502c;
  local_50 = &DAT_02589d38;
  _objc_copyWeak(auStack_30,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_48 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_21 & 1;
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_40 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar2;
  _dispatch_async(puVar3,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_30);
  return;
}

