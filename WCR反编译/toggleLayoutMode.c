// toggleLayoutMode @ 01fbaccc

/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::toggleLayoutMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isCardLayout_026c9f80);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_repositoryAddButton_026c9f00);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  local_28 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_layoutToggleButton_026c9f08);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyLayoutMode_026c9f28);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_reloadThemes_026c9f60);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

