// FUN_00f04f68 @ 00f04f68

void FUN_00f04f68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  uint local_44;
  long local_40;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38);
  lVar1 = local_38;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_normalizedURL_026aba48);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_normalizedRemotePath_026abb08);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_joinBase_path__026abb40,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar4 = local_50;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    local_28 = &cf_Depth;
    local_20 = &cf_0;
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00f05244;
    local_68 = &DAT_025822b8;
    local_58 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_webdavRequest_url_body_extraHead_026abb50,&cf_PROPFIND,uVar4,0,puVar5,
               &local_80);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_finish_success_message__026abb10,
               *(undefined8 *)(param_1 + 0x20),0,local_38);
  }
  local_44 = (uint)(lVar1 != 0);
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

