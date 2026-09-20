// FUN_00f07ab4 @ 00f07ab4

void FUN_00f07ab4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_b8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_1;
  _objc_storeStrong(&local_48);
  lVar1 = local_48;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    local_69 = 0;
    if (lVar1 == 0) {
      local_b8 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_normalizedRemotePath_026abb08);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_b8;
    }
    else {
      local_b8 = *(undefined8 *)(param_1 + 0x20);
    }
    local_69 = lVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_b8;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_normalizedURL_026aba48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_joinBase_path__026abb40,uVar2,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_78;
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_38 = &cf_Content_Type;
    local_30 = &cf_application_zip;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_00f07e0c;
    local_90 = &DAT_025822b8;
    local_80 = *(undefined8 *)(param_1 + 0x38);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_webdavRequest_url_body_extraHead_026abb50,&cf_PUT,uVar2,uVar4,puVar3,
               &local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,local_48);
    }
    local_54 = 1;
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

