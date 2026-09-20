// FUN_00eac128 @ 00eac128

void FUN_00eac128(undefined8 param_1,undefined8 param_2,byte param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_f0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined **local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  byte local_31;
  cfstringStruct *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  pcVar1 = local_30;
  local_31 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    if ((local_31 & 1) != 0) {
      FUN_00eab8c8();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
    }
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineAuthNameHelper_026ce2e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAuthNameHelper_026ce2e8,PTR_s_rememberLastChar_forUser__026ab178,local_30
               ,local_28);
    FUN_00eab8c8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)();
  }
  FUN_00eac5dc();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_cgi_026ab188);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if ((pcVar1 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910),
     ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDelegate__026ca910,0);
  }
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCgi__026ab168,0);
  FUN_00eab93c();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_50 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)();
  FUN_00eab93c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  FUN_00eac5dc();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_f0 = &cf___;
  }
  else {
    local_f0 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_50;
  local_58 = local_f0;
  ppuVar4 = &local_90;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_00ead560;
  local_78 = &DAT_0257a7a0;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar1 = local_58;
  local_70 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = pcVar1;
  _objc_retainBlock();
  puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  local_60 = ppuVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar6 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar5 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar6);
  }
  else {
    (*(code *)local_60[2])();
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

