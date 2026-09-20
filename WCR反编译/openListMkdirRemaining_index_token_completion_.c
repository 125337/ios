// openListMkdirRemaining:index:token:completion: @ 00f0c680

/* Function Stack Size: 0x30 bytes */

void WCRefineCloudBackupService::openListMkdirRemaining_index_token_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  ID IVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  undefined8 local_90;
  long local_88;
  ID local_80;
  ulong local_78;
  undefined4 local_6c;
  long local_68;
  undefined8 local_60;
  unsigned_long_long local_58;
  ulong local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_60 = 0;
  local_58 = param_4;
  _objc_storeStrong(&local_60,param_5);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_6);
  uVar4 = local_58;
  uVar6 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
  IVar5 = local_40;
  uVar2 = local_60;
  if (uVar4 < uVar6) {
    local_38 = &cf_path;
    uVar7 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_68;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_00f0c978;
    local_a0 = &DAT_02582648;
    (*(code *)PTR__objc_retain_02578638)();
    uVar6 = local_50;
    local_88 = lVar1;
    local_80 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_60;
    local_98 = uVar6;
    local_78 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_openListRequest_path_token_json__026abb20,&cf_POST,&cf__api_fs_mkdir,
               uVar2,puVar8,0,0,&local_b8);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_88,0);
    local_6c = 0;
  }
  else {
    if (local_68 != 0) {
      (**(code **)(local_68 + 0x10))(local_68,0);
    }
    local_6c = 1;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

