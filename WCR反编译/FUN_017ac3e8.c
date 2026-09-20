// FUN_017ac3e8 @ 017ac3e8

void FUN_017ac3e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028e41a0)(local_18,local_20);
  }
  else {
    dVar3 = _dispatch_time(0,100000000);
    puVar1 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc0000000;
    local_54 = 0;
    local_50 = FUN_017b790c;
    local_48 = &DAT_0257cf98;
    local_40 = local_18;
    local_38 = local_20;
    _dispatch_after(dVar3,puVar1,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  return;
}

