// putData:remotePath:completion: @ 00f067b4

/* Function Stack Size: 0x28 bytes */

void WCRefineCloudBackupService::putData_remotePath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  undefined *puVar8;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ID local_100;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ID local_b8;
  ID local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ID local_58;
  ID local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedProvider_026aba30);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar6;
  (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
  IVar7 = local_28;
  uVar3 = local_48;
  if ((IVar6 & 1) == 0) {
    IVar6 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_http);
    IVar7 = local_28;
    uVar3 = local_48;
    puVar8 = PTR__OBJC_CLASS___NSURL_026ce328;
    if ((IVar6 & 1) == 0) {
      local_138 = PTR___NSConcreteStackBlock_02578660;
      local_130 = 0xc2000000;
      local_12c = 0;
      local_128 = FUN_00f07ab4;
      local_120 = &DAT_025824c8;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_40;
      local_108 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_38;
      local_118 = uVar4;
      local_100 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_110 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar7,PTR_s_webdavEnsureParentsThen__026abb58,&local_138);
      _objc_storeStrong(&local_110);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_108,0);
      local_94 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedURL_026aba48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_URLWithString__026a16d8);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar8;
      (*(code *)PTR__objc_release_02578630)(IVar7);
      puVar8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_application_zip,
                 &cf_Content_Type);
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bearerOrRawAuthorization_026abb30);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_length_0269cca0);
      if (IVar7 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_Authorization);
      }
      IVar7 = local_28;
      uVar4 = local_38;
      puVar2 = local_a0;
      puVar8 = local_a8;
      local_f8 = PTR___NSConcreteStackBlock_02578660;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_00f07628;
      local_e0 = &DAT_02582498;
      local_b8 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_a8;
      local_d8 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = local_38;
      local_d0 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_48;
      local_c8 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar7,PTR_s_performMethod_url_headers_body_k_026abb38,&cf_PUT,puVar2,puVar8,uVar4,1
                 ,&local_f8);
      local_94 = 1;
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
    }
  }
  else {
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_00f06db0;
    local_78 = &DAT_02582468;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_40;
    local_60 = uVar3;
    local_58 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_38;
    local_70 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_openListEnsureToken__026abb28,&local_90);
    local_94 = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

