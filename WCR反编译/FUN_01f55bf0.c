// FUN_01f55bf0 @ 01f55bf0

void FUN_01f55bf0(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  byte local_41;
  undefined *local_40;
  long local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_1;
  local_29 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_voiceAutoSpeedEnabled_026bd4e0);
  local_41 = (byte)puVar2;
  local_50 = *(code **)(param_1 + 0x20);
  (*local_50)(local_20,*(undefined8 *)(param_1 + 0x28),local_28,local_29 & 1);
  if ((local_41 & 1) != 0) {
    dVar3 = _dispatch_time(0,300000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01f55da4;
    local_60 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar1;
    _dispatch_after(dVar3,puVar2,&local_78);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

