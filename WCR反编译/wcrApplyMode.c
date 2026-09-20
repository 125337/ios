// wcrApplyMode @ 017c48b8

/* Function Stack Size: 0x10 bytes */

void WCRefineAIPersonaLibraryViewController::wcrApplyMode(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mode_026ab488);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrNavItem_action__026b4e68,&cf_e_,PTR_s_wcrCreatePersona_026b4e60);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_Rh;
  if (IVar2 != 1) {
    pcVar1 = &cf_aSGr;
  }
  IVar2 = param_1;
  local_28 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_wcrNavItem_action__026b4e68,pcVar1,PTR_s_wcrToggleMode_026b4e70);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrReloadContent_026b4e40);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

