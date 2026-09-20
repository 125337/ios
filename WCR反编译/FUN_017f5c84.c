// FUN_017f5c84 @ 017f5c84

void FUN_017f5c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  cfstringStruct *local_148;
  uint local_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  byte local_b0;
  undefined8 local_a8;
  byte local_99;
  undefined8 local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  byte local_59;
  cfstringStruct *local_58;
  byte local_49;
  undefined *local_48;
  long local_40;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_49 = 0;
  local_59 = 0;
  local_fc = 1;
  local_40 = param_1;
  if ((local_38 == 0) && (local_fc = 1, local_30 != (cfstringStruct *)0x0)) {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    pcVar2 = local_30;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_path_0269d4d8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fileExistsAtPath__026ca630);
    local_fc = (uint)puVar1 ^ 1;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  puVar1 = PTR___dispatch_main_q_02578680;
  if ((local_fc & 1) == 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_71 = false;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_148 = &cf_mov;
    }
    else {
      local_148 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_148;
    }
    local_71 = pcVar3 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_148;
    if ((local_71 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_wcr_local_recording__lld___);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar1;
    (*(code *)PTR__objc_release_02578630)();
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_88);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_90 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_98 = 0;
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = local_98;
    puVar4 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_98,local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR___dispatch_main_q_02578680;
    local_99 = (byte)puVar4;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_88;
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_017f6378;
    local_e0 = &DAT_025838f0;
    local_b0 = local_99 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_98;
    local_d8 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    puVar4 = local_90;
    local_b8 = *(undefined8 *)(param_1 + 0x28);
    local_c8 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = puVar4;
    _dispatch_async(puVar1,&local_f8);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_68,0);
    local_60 = 0;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_60 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

