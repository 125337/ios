// buildDefaultRows @ 01ab66b4

/* Function Stack Size: 0x10 bytes */

ID WCRGroupListViewController::buildDefaultRows(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID local_100;
  ID local_f8;
  ID local_f0;
  SEL local_e8;
  ID local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  ID local_b0;
  ID local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  ID local_78;
  ID local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ID local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = param_2;
  local_e0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manageScope_026bdd90);
  if (param_1 == 0) {
    IVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_systemGroupWithId__026bde20);
    _objc_retainAutoreleasedReturnValue();
    local_60 = &cf_id;
    local_48 = &cf_sys_friend;
    local_58 = &cf_title;
    IVar2 = local_e0;
    local_f0 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_systemGroupNameWithId_fallback__026bde40,&cf_sys_friend,&::cf_S);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_e0;
    local_50 = &cf_detail;
    IVar3 = local_e0;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_homeSessionCountForScope__026bde48);
    IVar4 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_disabled_026a2c20);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_memberCountText_disabled__026bde50,IVar3,IVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_60,3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_f0,0);
  }
  else if (param_1 == 1) {
    IVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_systemGroupWithId__026bde20);
    _objc_retainAutoreleasedReturnValue();
    local_98 = &cf_id;
    local_80 = &cf_sys_chatroom;
    local_90 = &cf_title;
    IVar2 = local_e0;
    local_f8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_systemGroupNameWithId_fallback__026bde40,&cf_sys_chatroom,&cf__J);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_e0;
    local_88 = &cf_detail;
    IVar3 = local_e0;
    local_78 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_homeSessionCountForScope__026bde48,2);
    IVar4 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_disabled_026a2c20);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_memberCountText_disabled__026bde50,IVar3,IVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_70 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_80,&local_98,3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_68 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_f8,0);
  }
  else if (param_1 == 2) {
    IVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_systemGroupWithId__026bde20);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = &cf_id;
    local_b8 = &cf_sys_other;
    local_c8 = &cf_title;
    IVar2 = local_e0;
    local_100 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_systemGroupNameWithId_fallback__026bde40,&cf_sys_other,&cf_vQN);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_e0;
    local_c0 = &cf_detail;
    IVar3 = local_e0;
    local_b0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_homeSessionCountForScope__026bde48,0x1c);
    IVar4 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_disabled_026a2c20);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_memberCountText_disabled__026bde50,IVar3,IVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_a8 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b8,&local_d0,3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_a0 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a0,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_100,0);
  }
  else {
    puVar6 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_d8;
}

