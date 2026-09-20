// FUN_008dd0b0 @ 008dd0b0

void FUN_008dd0b0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [3];
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_38 = 0;
  local_48 = 0;
  puVar1 = PTR_WCRefineVoicePackStore_026cea20;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineVoicePackStore_026cea20,PTR_s_unzipArchiveAtPath_toRootAsNamed_026a9d80,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),&local_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,local_48);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_40 = puVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_40;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_008dd2dc;
  local_80 = &DAT_0257b6a8;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = puVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  local_70 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = local_38;
  local_68 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_60[0] = uVar3;
  _dispatch_async(puVar2,&local_98);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(local_60);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

