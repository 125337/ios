// FUN_00f09d68 @ 00f09d68

void FUN_00f09d68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_d8;
  cfstringStruct *local_d0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte local_71;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  long local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_1;
  _objc_storeStrong(&local_48);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_3);
  lVar1 = local_48;
  local_58 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_50 == (cfstringStruct *)0x0) {
      local_d0 = &cf_O;
    }
    else {
      local_d0 = local_50;
    }
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0,local_d0);
    local_5c = 1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    local_71 = 0;
    if (lVar1 == 0) {
      local_d8 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_normalizedRemotePath_026abb08);
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_d8;
    }
    else {
      local_d8 = *(undefined8 *)(param_1 + 0x20);
    }
    local_71 = lVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_d8;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    lVar1 = local_48;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    local_38 = &cf_path;
    local_30 = local_68;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_00f0a084;
    local_90 = &DAT_025821f8;
    local_80 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_openListRequest_path_token_json__026abb20,&cf_POST,&cf__api_fs_get,lVar1,
               puVar2,0,0,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

