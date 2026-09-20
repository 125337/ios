// openListRequest:path:token:json:body:headers:completion: @ 00f0cb1c

/* Function Stack Size: 0x48 bytes */

void WCRefineCloudBackupService::openListRequest_path_token_json_body_headers_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               ID param_8,ID param_9,undefined4 param_10)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  byte local_12c;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  ID local_b8;
  byte local_a9;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  ID local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
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
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = (undefined *)0x0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  IVar3 = local_28;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedURL_026aba48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_joinBase_path__026abb40,IVar2,local_40);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = local_48;
  local_78 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar5 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,&cf_Authorization);
  }
  puVar4 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = puVar4;
  if (local_50 != 0) {
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,local_50,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_80;
    local_80 = puVar6;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_application_json,
               &cf_Content_Type);
  }
  uVar1 = local_60;
  puVar4 = local_78;
  local_a8 = PTR___NSConcreteGlobalBlock_02578658;
  local_a0 = 0xd0800000;
  local_9c = 0;
  local_98 = FUN_00f0cfc0;
  local_90 = &DAT_025821d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_a8);
  uVar7 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_PUT);
  local_12c = 1;
  if ((uVar7 & 1) == 0) {
    uVar7 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_POST);
    local_12c = (byte)uVar7;
  }
  IVar2 = local_28;
  uVar7 = local_38;
  uVar1 = local_68;
  IVar3 = local_70;
  puVar6 = local_78;
  puVar4 = local_80;
  local_e0 = PTR___NSConcreteStackBlock_02578660;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = FUN_00f0d060;
  local_c8 = &DAT_02582258;
  local_b8 = local_28;
  local_a9 = local_12c & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_performMethod_url_headers_body_k_026abb38,uVar7,IVar3,puVar6,puVar4,
             local_12c & 1,&local_e0);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

