// testConnectionWithCompletion: @ 00f04004

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupService::testConnectionWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  ID local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  ID local_98;
  ID local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasServerURL_026aba58);
  if ((IVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_finish_success_message__026abb10,local_38,0,&cf_HQkXQSv);
    local_3c = 1;
  }
  else {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedProvider_026aba30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
    IVar4 = local_28;
    uVar3 = local_38;
    if ((IVar5 & 1) == 0) {
      IVar5 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf_http);
      IVar4 = local_28;
      uVar3 = local_38;
      puVar6 = PTR__OBJC_CLASS___NSURL_026ce328;
      if ((IVar5 & 1) == 0) {
        local_100 = PTR___NSConcreteStackBlock_02578660;
        local_f8 = 0xc2000000;
        local_f4 = 0;
        local_f0 = FUN_00f04f68;
        local_e8 = &DAT_025822e8;
        local_d8 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_e0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_webdavEnsureParentsThen__026abb58,&local_100);
        _objc_storeStrong(&local_e0,0);
        local_3c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedURL_026aba48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_URLWithString__026a16d8);
        _objc_retainAutoreleasedReturnValue();
        local_80 = puVar6;
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_28;
        local_88 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bearerOrRawAuthorization_026abb30);
        _objc_retainAutoreleasedReturnValue();
        local_90 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
        if (IVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,&cf_Authorization
                    );
        }
        IVar4 = local_28;
        puVar2 = local_80;
        puVar6 = local_88;
        local_d0 = PTR___NSConcreteStackBlock_02578660;
        local_c8 = 0xc2000000;
        local_c4 = 0;
        local_c0 = FUN_00f048e4;
        local_b8 = &DAT_02582288;
        local_98 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        puVar1 = local_88;
        local_b0 = puVar2;
        (*(code *)PTR__objc_retain_02578638)();
        uVar3 = local_38;
        local_a8 = puVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_a0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_performMethod_url_headers_body_k_026abb38,&cf_HEAD,puVar2,puVar6,0,0,
                   &local_d0);
        local_3c = 1;
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_a8,0);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
        _objc_storeStrong(&local_80,0);
      }
    }
    else {
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_00f044f0;
      local_60 = &DAT_02582228;
      local_50 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_openListEnsureToken__026abb28,&local_78);
      local_3c = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

