// deleteRemotePath:completion: @ 00f0fdac

/* Function Stack Size: 0x20 bytes */

void WCRefineCloudBackupService::deleteRemotePath_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  ID local_98;
  ID local_90;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  ID local_50;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedProvider_026aba30);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isEqualToString__0269ccc8,&cf_openlist);
  IVar4 = local_28;
  uVar1 = local_40;
  if ((IVar3 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedURL_026aba48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_joinBase_path__026abb40,IVar3,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_90 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    uVar1 = local_40;
    IVar4 = local_90;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_00f105d0;
    local_a8 = &DAT_025822b8;
    local_98 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_webdavRequest_url_body_extraHead_026abb50,&cf_DELETE,IVar4,0,0,&local_c0)
    ;
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  else {
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00f10084;
    local_68 = &DAT_02582558;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_38;
    local_58 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar2;
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_openListEnsureToken__026abb28,&local_80);
    local_84 = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

