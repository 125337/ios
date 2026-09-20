// _WCRSuperFloatQuickChatSync @ 01638c4c

void _WCRSuperFloatQuickChatSync
               (byte param_1,byte param_2,undefined8 param_3,undefined4 param_4,byte param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34;
  byte local_33;
  byte local_32;
  undefined **local_30;
  byte local_25;
  undefined4 local_24;
  undefined8 local_20;
  byte local_12;
  byte local_11;
  
  ppuVar1 = &local_60;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc0000000;
  local_54 = 0;
  local_50 = FUN_01638d68;
  local_48 = &DAT_02587970;
  local_34 = param_1 & 1;
  local_33 = param_2 & 1;
  local_32 = param_5 & 1;
  local_40 = param_3;
  local_38 = param_4;
  local_25 = param_5;
  local_24 = param_4;
  local_20 = param_3;
  local_12 = param_2;
  local_11 = param_1;
  _objc_retainBlock();
  puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_30 = ppuVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar2 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else {
    (*(code *)local_30[2])();
  }
  _objc_storeStrong(&local_30,0);
  return;
}

