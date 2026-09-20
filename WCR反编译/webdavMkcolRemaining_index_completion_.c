// webdavMkcolRemaining:index:completion: @ 00f0b8a0

/* Function Stack Size: 0x28 bytes */

void WCRefineCloudBackupService::webdavMkcolRemaining_index_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,
               undefined4 param_6)

{
  long lVar1;
  ulong uVar2;
  ID IVar3;
  ulong uVar4;
  ID IVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  ulong local_78;
  long local_70;
  ID local_68;
  ulong local_60;
  ID local_58;
  undefined4 local_4c;
  long local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  uVar4 = local_40;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  IVar5 = local_28;
  if (uVar4 < uVar2) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_normalizedURL_026aba48);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_joinBase_path__026abb40,IVar3);
    _objc_retainAutoreleasedReturnValue();
    local_58 = IVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    lVar1 = local_48;
    IVar5 = local_58;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_00f0bb24;
    local_80 = &DAT_025825e8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_38;
    local_70 = lVar1;
    local_68 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar4;
    local_60 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_webdavRequest_url_body_extraHead_026abb50,&cf_MKCOL,IVar5,0,0,&local_98);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  else {
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))(local_48,0);
    }
    local_4c = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

