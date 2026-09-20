// repoPreviewCurrentItem @ 01eefe68

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoHTMLRepositoryViewController::repoPreviewCurrentItem(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_38;
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_currentRepositoryActionItem_026c7ee0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  if (param_1 != 0) {
    puVar1 = PTR_WCRefineToDoHTMLFullPreviewViewController_026cf720;
    _objc_alloc_init();
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setItem__026c7ee8,local_28);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectBlock_026c7e38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSelectBlock__026c7ef0);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(param_1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

