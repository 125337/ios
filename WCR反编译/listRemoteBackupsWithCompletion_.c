// listRemoteBackupsWithCompletion: @ 00f0e034

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupService::listRemoteBackupsWithCompletion_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined **local_f8;
  ID local_f0;
  cfstringStruct *local_e8;
  ID local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined **local_b8;
  ID local_b0;
  ID local_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  ID local_70;
  undefined **local_68;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3,param_3,param_4);
  uVar1 = local_60;
  ppuVar2 = &local_98;
  local_98 = PTR___NSConcreteStackBlock_02578660;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_00f0e4d4;
  local_80 = &DAT_025824f8;
  local_70 = local_50;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = uVar1;
  _objc_retainBlock();
  IVar3 = local_50;
  local_68 = ppuVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_supportsVersionHistory_026aba88);
  if ((IVar3 & 1) == 0) {
    (*(code *)local_68[2])(local_68,*(undefined8 *)PTR____NSArray0___02578280,&cf__IN);
    local_9c = 1;
  }
  else {
    IVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_normalizedProvider_026aba30);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
    IVar3 = local_50;
    ppuVar2 = local_68;
    if ((IVar4 & 1) == 0) {
      IVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_normalizedURL_026aba48);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_remoteDirectory_026abb70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_joinBase_path__026abb40,IVar4);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_retain_02578638)();
      IVar4 = local_50;
      IVar3 = local_e0;
      local_e8 = &
                 cf_<_xmlversion__1_0_encoding__utf_8__><d:propfindxmlns:d__DAV:_><d:prop><d:displayname_><d:resourcetype_><_d:prop><_d:propfind>
      ;
      pcVar6 = &
               cf_<_xmlversion__1_0_encoding__utf_8__><d:propfindxmlns:d__DAV:_><d:prop><d:displayname_><d:resourcetype_><_d:prop><_d:propfind>
      ;
      (*(code *)PTR__objc_msgSend_02578628)
                (&
                 cf_<_xmlversion__1_0_encoding__utf_8__><d:propfindxmlns:d__DAV:_><d:prop><d:displayname_><d:resourcetype_><_d:prop><_d:propfind>
                 ,PTR_s_dataUsingEncoding__026a12e8,4);
      _objc_retainAutoreleasedReturnValue();
      local_48 = &cf_Depth;
      local_38 = &cf_1;
      local_40 = &cf_Content_Type;
      local_30 = &cf_application_xml;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = local_68;
      local_118 = PTR___NSConcreteStackBlock_02578660;
      local_110 = 0xc2000000;
      local_10c = 0;
      local_108 = FUN_00f0f2a0;
      local_100 = &DAT_025822b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = ppuVar2;
      local_f0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar4,PTR_s_webdavRequest_url_body_extraHead_026abb50,&cf_PROPFIND,IVar3,pcVar6,
                 puVar7,&local_118);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_e0,0);
      local_9c = 0;
    }
    else {
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_00f0e6ec;
      local_c0 = &DAT_02582228;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = ppuVar2;
      local_b0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_openListEnsureToken__026abb28,&local_d8);
      local_9c = 1;
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

