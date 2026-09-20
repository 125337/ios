// FUN_00f0e6ec @ 00f0e6ec

void FUN_00f0e6ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  cfstringStruct *local_d8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_7c;
  long local_78;
  cfstringStruct *local_70;
  long local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  local_60 = param_1;
  _objc_storeStrong(&local_68);
  local_70 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_70,param_3);
  lVar1 = local_68;
  local_78 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  lVar7 = local_68;
  if (lVar1 == 0) {
    lVar7 = *(long *)(param_1 + 0x20);
    uVar8 = *(undefined8 *)PTR____NSArray0___02578280;
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_d8 = &cf_O;
    }
    else {
      local_d8 = local_70;
    }
    (**(code **)(lVar7 + 0x10))(lVar7,uVar8,local_d8);
    local_7c = 1;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    local_58 = &cf_path;
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_remoteDirectory_026abb70);
    _objc_retainAutoreleasedReturnValue();
    local_50 = &cf_page;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = uVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    local_48 = &cf_per_page;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,100);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_00f0ea34;
    local_98 = &DAT_025821f8;
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = *(undefined8 *)(param_1 + 0x28);
    local_90 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar9,PTR_s_openListRequest_path_token_json__026abb20,&cf_POST,&cf__api_fs_list,lVar7
               ,puVar5,0,0,&local_b0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar8);
    _objc_storeStrong(&local_90,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

