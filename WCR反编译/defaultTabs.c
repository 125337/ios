// defaultTabs @ 01517878

/* Function Stack Size: 0x10 bytes */

ID WCRefineTelegramGroupingStore::defaultTabs(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_38;
  ID local_30;
  ID local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_tabWithId_title_kind_scopeMask_r_026b0160,&cf_all,&cf_hQ,0,0,3,0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_tabWithId_title_kind_scopeMask_r_026b0160,&cf_private,&cf_yO,1,1,3,1);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_tabWithId_title_kind_scopeMask_r_026b0160,&cf_chatroom,&cf__J,1,2,3,1);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_tabWithId_title_kind_scopeMask_r_026b0160,&cf_other,&cf_vQN,1,0x18,3,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar4;
}

