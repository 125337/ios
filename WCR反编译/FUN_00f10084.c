// FUN_00f10084 @ 00f10084

void FUN_00f10084(long param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  cfstringStruct *local_d0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined4 local_74;
  long local_70;
  cfstringStruct *local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_1;
  _objc_storeStrong(&local_60);
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,param_3);
  lVar5 = local_60;
  local_70 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      lVar5 = *(long *)(param_1 + 0x28);
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_d0 = &cf_O;
      }
      else {
        local_d0 = local_68;
      }
      (**(code **)(lVar5 + 0x10))(lVar5,0,local_d0);
    }
    local_74 = 1;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    local_80 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_80;
    local_88 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    if (lVar5 == 0) {
      _objc_storeStrong(&local_80,&cf__);
    }
    lVar5 = local_60;
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    local_48 = &cf_dir;
    local_38 = local_80;
    local_40 = &cf_names;
    local_50 = local_88;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,1
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_00f103fc;
    local_98 = &DAT_02582408;
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,PTR_s_openListRequest_path_token_json__026abb20,&cf_POST,&cf__api_fs_remove,
               lVar5,puVar4,0,0,&local_b0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    local_74 = 0;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

