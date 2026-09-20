// downloadEmoticonURLSync:aesKey: @ 00f343ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::downloadEmoticonURLSync_aesKey_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  dispatch_semaphore_t pdVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_time_t timeout;
  long lVar5;
  ID local_170;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  dispatch_semaphore_t local_c0;
  undefined8 *local_b8;
  ID local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  code *local_88;
  undefined8 local_80;
  dispatch_semaphore_t local_78;
  undefined *local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined8 local_58;
  long local_50;
  SEL local_48;
  ID local_40;
  ID local_38;
  undefined8 local_30;
  long *local_28;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  lVar5 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    local_38 = 0;
    local_5c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_38 = 0;
      local_5c = 1;
    }
    else {
      local_28 = &DAT_028e2d48;
      local_30 = 0;
      _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02582ab8);
      if (*local_28 != -1) {
        _dispatch_once(local_28,local_30);
      }
      _objc_storeStrong(&local_30,0);
      puVar2 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402e000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
                 PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,local_68,1);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar2;
      local_78 = _dispatch_semaphore_create(0);
      puVar2 = local_70;
      uVar4 = DAT_028e2d40;
      local_b8 = &local_a8;
      local_a8 = 0;
      local_98 = 0x32000000;
      local_94 = 0x30;
      local_90 = FUN_00f348ec;
      local_88 = FUN_00f34940;
      local_80 = 0;
      local_e8 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_00f3496c;
      local_d0 = &DAT_02582ad8;
      local_b0 = local_40;
      uVar3 = local_58;
      local_a0 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      pdVar1 = local_78;
      local_c8 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = pdVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar2,&local_e8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      pdVar1 = local_78;
      timeout = _dispatch_time(0,20000000000);
      _dispatch_semaphore_wait(pdVar1,timeout);
      lVar5 = local_a0[5];
      (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
      if (lVar5 == 0) {
        local_170 = 0;
      }
      else {
        local_170 = local_a0[5];
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = local_170;
      local_5c = 1;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_c8,0);
      __Block_object_dispose(&local_a8,8);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return local_38;
}

