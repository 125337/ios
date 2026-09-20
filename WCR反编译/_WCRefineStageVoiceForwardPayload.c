// _WCRefineStageVoiceForwardPayload @ 008ad314

void _WCRefineStageVoiceForwardPayload(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  dispatch_time_t dVar6;
  undefined *puVar7;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  long local_40;
  uint local_38;
  undefined8 local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_1c = param_2;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    lVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
    lVar1 = DAT_028cde80;
    DAT_028cde80 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar2 = DAT_028cde88;
    DAT_028cde88 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    DAT_028cde98 = local_1c;
    DAT_028cdea0 = DAT_028cdea0 + 1;
    local_40 = DAT_028cdea0;
    dVar6 = _dispatch_time(0,120000000000);
    puVar7 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc0000000;
    local_5c = 0;
    local_58 = FUN_008ad51c;
    local_50 = &DAT_02578c00;
    local_48 = local_40;
    _dispatch_after(dVar6,puVar7,&local_68);
    (*(code *)PTR__objc_release_02578630)(puVar7);
  }
  local_38 = (uint)(lVar3 == 0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

