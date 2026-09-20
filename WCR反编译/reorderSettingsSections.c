// reorderSettingsSections @ 01ebd77c

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListSettingsViewController::reorderSettingsSections(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_94;
  ID local_90;
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = param_2;
  local_80 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_90 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_90;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((IVar1 & 1) == 0) ||
     (IVar1 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0),
     IVar1 == 0)) {
    local_94 = 1;
  }
  else {
    local_78 = &::cf___;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = &cf_aSGr7h_;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    local_68 = &cf_ofn_;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
    _objc_retainAutoreleasedReturnValue();
    local_60 = &cf_he;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    local_58 = &cf_Q_7h_;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_78,5);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_90;
    puVar2 = local_a0;
    local_c8 = PTR___NSConcreteGlobalBlock_02578658;
    local_c0 = 0xd0800000;
    local_bc = 0;
    local_b8 = FUN_01ebdb24;
    local_b0 = &DAT_0258ca20;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_sortUsingComparator__0269d168,&local_c8);
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    local_94 = 0;
  }
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

