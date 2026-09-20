// _WCRSuperFloatQuickChatIncoming @ 01639360

void _WCRSuperFloatQuickChatIncoming
               (undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  undefined **local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar2 = local_18;
  local_38 = param_5;
  local_30 = param_4;
  local_28 = param_1;
  local_19 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  lVar1 = local_18;
  if (lVar2 == 0) {
    local_3c = 1;
  }
  else {
    ppuVar3 = &local_90;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_0163951c;
    local_78 = &DAT_025879b0;
    local_50 = local_19 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = lVar1;
    local_68 = local_30;
    local_60 = local_38;
    local_58 = local_28;
    _objc_retainBlock();
    puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    local_48 = ppuVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar5 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar4 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    else {
      (*(code *)local_48[2])();
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_70,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

