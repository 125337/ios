// webdavRequest:url:body:extraHeaders:completion: @ 00f0b300

/* Function Stack Size: 0x38 bytes */

void WCRefineCloudBackupService::webdavRequest_url_body_extraHeaders_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ID IVar5;
  ulong uVar6;
  byte local_e4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  byte local_91;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined *local_70;
  ID local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
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
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_28;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_basicAuthorization_026abc60);
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar5;
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
  if (IVar5 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,&cf_Authorization);
  }
  uVar1 = local_50;
  puVar4 = local_60;
  local_90 = PTR___NSConcreteGlobalBlock_02578658;
  local_88 = 0xd0800000;
  local_84 = 0;
  local_80 = FUN_00f0b698;
  local_78 = &DAT_025821d8;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_90);
  uVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_PUT);
  local_e4 = 1;
  if ((uVar6 & 1) == 0) {
    uVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_MKCOL);
    local_e4 = 1;
    if ((uVar6 & 1) == 0) {
      uVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_PROPFIND);
      local_e4 = (byte)uVar6;
    }
  }
  IVar5 = local_28;
  uVar6 = local_38;
  uVar3 = local_40;
  uVar2 = local_48;
  uVar1 = local_58;
  puVar4 = local_60;
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_00f0b738;
  local_a8 = &DAT_025825b8;
  local_91 = local_e4 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_performMethod_url_headers_body_k_026abb38,uVar6,uVar3,puVar4,uVar2,
             local_e4 & 1,&local_c0);
  _objc_storeStrong(&local_a0);
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

