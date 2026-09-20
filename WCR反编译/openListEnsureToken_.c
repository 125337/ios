// openListEnsureToken: @ 00f0bcbc

/* Function Stack Size: 0x18 bytes */

void WCRefineCloudBackupService::openListEnsureToken_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  ID local_98;
  undefined *local_90;
  undefined4 local_84;
  undefined *local_80;
  ID local_78;
  ID local_70;
  ID local_68;
  long local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3,param_3,param_4);
  IVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_normalizedURL_026aba48);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_50;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_68 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_trimmed__026aba28);
  _objc_retainAutoreleasedReturnValue();
  local_70 = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar4 = local_50;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_trimmed__026aba28);
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_hash_0269ec90);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf________lu);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = DAT_028e2b20;
  local_80 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b20,PTR_s_length_0269cca0);
  if (lVar5 != 0) {
    uVar6 = DAT_028e2b28;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e2b28,PTR_s_isEqualToString__0269ccc8,local_80);
    if ((uVar6 & 1) != 0) {
      (**(code **)(local_60 + 0x10))(local_60,DAT_028e2b20,0);
      local_84 = 1;
      goto LAB_00f0c188;
    }
  }
  IVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (IVar4 == 0) {
    IVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (IVar4 != 0) {
      _objc_storeStrong(IVar4,&DAT_028e2b20,local_78);
      _objc_storeStrong(&DAT_028e2b28,local_80);
      (**(code **)(local_60 + 0x10))(local_60,local_78,0);
      local_84 = 1;
      goto LAB_00f0c188;
    }
  }
  IVar4 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (IVar4 == 0) {
    (**(code **)(local_60 + 0x10))(local_60,0,&cf_kXQ);
    local_84 = 1;
  }
  else {
    local_48 = &cf_username;
    local_38 = local_70;
    local_40 = &cf_password;
    local_30 = local_78;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_50;
    puVar2 = local_80;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_00f0c1f8;
    local_b0 = &DAT_02582618;
    local_98 = local_50;
    local_90 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    lVar5 = local_60;
    local_a8 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_openListRequest_path_token_json__026abb20,&cf_POST,&cf__api_auth_login,0,
               puVar3,0,0,&local_c8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
LAB_00f0c188:
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

