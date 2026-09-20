// FUN_00185cec @ 00185cec

void FUN_00185cec(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  uint local_84;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  byte local_41;
  undefined *local_40;
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8918)(param_1,param_2,param_3 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_84 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_84 = (uint)puVar2;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_84 & 1) != 0) {
    dVar3 = _dispatch_time(0,150000000);
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc0000000;
    local_64 = 0;
    local_60 = FUN_00188348;
    local_58 = &DAT_025797b0;
    local_50 = local_18;
    _dispatch_after(dVar3,puVar1,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

