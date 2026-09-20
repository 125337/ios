// FUN_009d2b74 @ 009d2b74

void FUN_009d2b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  ulong uVar9;
  uint local_16c;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ulong local_d8;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  undefined *local_48;
  ulong local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = (undefined *)0x0;
  _objc_storeStrong(&local_48,param_2);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  local_68 = 0;
  local_60 = param_5;
  _objc_storeStrong(&local_68,param_6);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_7);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_finished_026a15b0);
  uVar9 = local_40;
  uVar1 = local_70;
  if ((uVar3 & 1) == 0) {
    if (local_60 < 0x78) {
      puVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_videoStatusPath_026aae18);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_48;
      FUN_009c9ac8(local_48,local_80);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = local_40;
      uVar1 = local_70;
      local_88 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        pcVar8 = &cf_r_cS0W_W;
        FUN_009c701c(&cf_r_cS0W_W,0xffffffffffffffff);
        _objc_retainAutoreleasedReturnValue();
        FUN_009d255c(uVar9,uVar1,0);
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        local_74 = 1;
      }
      else {
        local_90 = (undefined *)0x0;
        puVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_providerID_0269d480);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_99 = 0;
        local_16c = 1;
        if (((ulong)puVar5 & 1) == 0) {
          puVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_providerID_0269d480);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_16c = (uint)puVar5;
        }
        if ((local_99 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        lVar7 = local_50;
        puVar4 = local_88;
        if ((local_16c & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x404e000000000000,PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,
                     PTR_s_requestWithURL_cachePolicy_timeo_026aaf30,local_88,1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_90;
          local_90 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          lVar7 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
          puVar4 = local_90;
          if (lVar7 != 0) {
            pcVar8 = &cf_Bearer;
            (*(code *)PTR__objc_msgSend_02578628)
                      (&cf_Bearer,PTR_s_stringByAppendingString__0269d398,local_50);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_setValue_forHTTPHeaderField__026a16e8,pcVar8,&cf_Authorization);
            (*(code *)PTR__objc_release_02578630)(pcVar8);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
                     &cf_Accept);
        }
        else {
          local_38 = &cf_requestId;
          local_30 = local_58;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
          _objc_retainAutoreleasedReturnValue();
          FUN_009c9de0(puVar4,lVar7,puVar6,0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_90;
          local_90 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        puVar6 = PTR__OBJC_CLASS___NSURLSession_026ce498;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = local_40;
        puVar4 = local_90;
        local_f8 = PTR___NSConcreteStackBlock_02578660;
        local_f0 = 0xc2000000;
        local_ec = 0;
        local_e8 = FUN_009d458c;
        local_e0 = &DAT_02581638;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_70;
        local_d8 = uVar9;
        (*(code *)PTR__objc_retain_02578638)();
        uVar2 = local_68;
        local_b8 = uVar1;
        local_a8 = local_60;
        (*(code *)PTR__objc_retain_02578638)();
        puVar5 = local_48;
        local_b0 = uVar2;
        (*(code *)PTR__objc_retain_02578638)();
        lVar7 = local_50;
        local_d0 = puVar5;
        (*(code *)PTR__objc_retain_02578638)();
        uVar1 = local_58;
        local_c8 = lVar7;
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = uVar1;
        puVar5 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar4,&local_f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTask__026aaf18);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        uVar9 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_task_026a1510);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar9);
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_d0,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_b8,0);
        _objc_storeStrong(&local_d8,0);
        _objc_storeStrong(&local_90,0);
        local_74 = 0;
      }
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
    else {
      pcVar8 = &cf_ubI__e_;
      FUN_009c701c(&cf_ubI__e_,0xfffffffffffffffd);
      _objc_retainAutoreleasedReturnValue();
      FUN_009d255c(uVar9,uVar1,0);
      (*(code *)PTR__objc_release_02578630)(pcVar8);
      local_74 = 1;
    }
  }
  else {
    local_74 = 1;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

