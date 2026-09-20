// FUN_017f932c @ 017f932c

/* WARNING: Type propagation algorithm not settling */

void FUN_017f932c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_d8;
  ulong local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ulong local_a8;
  long *local_a0;
  byte *local_98;
  undefined8 local_90;
  long local_88 [2];
  byte local_71;
  undefined *local_70;
  ulong local_68;
  byte local_59;
  ulong local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_30;
  puVar1 = PTR___dispatch_main_q_02578680;
  local_40 = param_1;
  if (local_38 == 0) {
    local_50 = (undefined *)0x0;
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_30;
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      uVar2 = local_30;
      if ((uVar3 & 1) != 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = uVar2;
        _NSTemporaryDirectory();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_temp_video__ld_mov);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = uVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar2 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_writeToFile_atomically__0269f928,local_d8,1);
        if ((uVar2 & 1) != 0) {
          puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_50;
          local_50 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        _objc_storeStrong(&local_d8);
        _objc_storeStrong(&local_d0,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_startAccessingSecurityScopedReso_026a22c0);
      local_59 = (byte)uVar3;
      _NSTemporaryDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_temp_video__ld_mov);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      puVar1 = PTR__OBJC_CLASS___NSFileCoordinator_026cf040;
      _objc_alloc_init();
      uVar3 = local_58;
      uVar2 = local_68;
      local_71 = 0;
      local_88[1] = 0;
      local_88[0] = 0;
      local_90 = 0;
      local_c8 = PTR___NSConcreteGlobalBlock_02578658;
      local_c0 = 0xd0800000;
      local_bc = 0;
      local_b8 = FUN_017f99f0;
      local_b0 = &DAT_025895a8;
      local_70 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = uVar2;
      local_a0 = local_88;
      local_98 = &local_71;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_coordinateReadingItemAtURL_optio_026b59d8,uVar3,8,&local_90,&local_c8)
      ;
      _objc_storeStrong(local_88 + 1,local_90);
      if ((local_59 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_stopAccessingSecurityScopedResou_026a22d0);
      }
      if (((local_71 & 1) == 0) || (local_88[0] == 0)) {
        _objc_storeStrong(&local_50,local_58);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_startAccessingSecurityScopedReso_026a22c0);
      }
      else {
        _objc_storeStrong(&local_50,local_88[0]);
      }
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(local_88,0);
      _objc_storeStrong(local_88 + 1,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_58,0);
    }
    puVar1 = PTR___dispatch_main_q_02578680;
    if (local_50 == (undefined *)0x0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_44 = 1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

