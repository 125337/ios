// downloadRemotePath:toTemporaryPath: @ 00f09718

/* Function Stack Size: 0x20 bytes */

void WCRefineCloudBackupService::downloadRemotePath_toTemporaryPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  ID local_1f8;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  ID local_110;
  undefined8 local_108;
  ID local_100;
  ID local_f8;
  byte local_e9;
  ID local_e8;
  ID local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  ID local_a8;
  ID local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  ID local_60;
  undefined8 local_58;
  ID local_50;
  ID local_48;
  undefined8 local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedProvider_026aba30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
  IVar6 = local_28;
  uVar3 = local_40;
  if ((IVar5 & 1) == 0) {
    IVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_http);
    puVar7 = PTR__OBJC_CLASS___NSURL_026ce328;
    if ((IVar6 & 1) == 0) {
      IVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      local_e9 = 0;
      if (IVar6 == 0) {
        local_1f8 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedRemotePath_026abb08);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = local_1f8;
      }
      else {
        local_1f8 = local_38;
      }
      local_e9 = IVar6 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = local_1f8;
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      IVar6 = local_28;
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedURL_026aba48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_joinBase_path__026abb40,IVar5,local_e0);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = IVar6;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      IVar4 = local_28;
      uVar3 = local_40;
      IVar6 = local_f8;
      local_130 = PTR___NSConcreteStackBlock_02578660;
      local_128 = 0xc2000000;
      local_124 = 0;
      local_120 = FUN_00f0a994;
      local_118 = &DAT_02582588;
      local_100 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      IVar5 = local_e0;
      local_108 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_webdavRequest_url_body_extraHead_026abb50,&cf_GET,IVar6,0,0,&local_130)
      ;
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_e0,0);
      local_84 = 0;
    }
    else {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedURL_026aba48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_URLWithString__026a16d8);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar7;
      (*(code *)PTR__objc_release_02578630)(IVar6);
      puVar7 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_28;
      local_98 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bearerOrRawAuthorization_026abb30);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_length_0269cca0);
      if (IVar6 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_setObject_forKeyedSubscript__0269d248,local_a0,&cf_Authorization);
      }
      IVar6 = local_28;
      uVar3 = local_40;
      puVar1 = local_90;
      puVar7 = local_98;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_00f0a7b4;
      local_c0 = &DAT_02582528;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_90;
      local_b0 = uVar3;
      local_a8 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar6,PTR_s_performMethod_url_headers_body_k_026abb38,&cf_GET,puVar1,puVar7,0,0,
                 &local_d8);
      local_84 = 1;
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
    }
  }
  else {
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00f09d68;
    local_68 = &DAT_02582558;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_38;
    local_58 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = IVar5;
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_openListEnsureToken__026abb28,&local_80);
    local_84 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

