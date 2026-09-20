// FUN_00fac7a0 @ 00fac7a0

void FUN_00fac7a0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  uint local_38;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_createWCRefineConfigBackupZipAtT_026abb60,0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (lVar2 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_00fac96c;
    local_50 = &DAT_0257cc98;
    local_40 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar1;
    _dispatch_async(puVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_48,0);
  }
  local_38 = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

