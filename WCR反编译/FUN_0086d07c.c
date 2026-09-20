// FUN_0086d07c @ 0086d07c

void FUN_0086d07c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  dispatch_time_t dVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [31];
  byte local_21;
  undefined8 local_20;
  undefined8 local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028cd6d0)(param_1,param_2,param_3 & 1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_m_contact_026a0b68);
  _objc_retainAutoreleasedReturnValue();
  FUN_00884260();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((DAT_028cd865 & 1) != 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0087ddf0();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (((DAT_028cd866 & 1) != 0) || ((DAT_028cd8c8 & 1) != 0)) {
    _objc_initWeak(auStack_40,local_18);
    dVar2 = _dispatch_time(0,150000000);
    puVar3 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_0088a0f0;
    local_50 = &DAT_02578da0;
    _objc_copyWeak(auStack_48,auStack_40);
    _dispatch_after(dVar2,puVar3,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
  }
  return;
}

