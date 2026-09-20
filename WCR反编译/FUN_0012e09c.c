// FUN_0012e09c @ 0012e09c

void FUN_0012e09c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_30;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8660)(param_1,param_2,param_3 & 1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)();
  puVar3 = puVar2;
  if (local_30 == (undefined *)0x0) {
    FUN_00132c3c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)();
  }
  uVar1 = (uint)puVar3;
  FUN_0012e3fc();
  if (((uVar1 & 1) != 0) &&
     (puVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf__),
     ((ulong)puVar2 & 1) != 0)) {
    dVar4 = _dispatch_time(0,500000000);
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc0000000;
    local_5c = 0;
    local_58 = FUN_001338a0;
    local_50 = &DAT_025797b0;
    local_48 = local_18;
    _dispatch_after(dVar4,puVar2,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

