// wcr_runHiddenSidebarLayout: @ 015f0e08

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatWindow::wcr_runHiddenSidebarLayout_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4);
  if (local_38 != 0) {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
    IVar2 = local_28;
    uVar5 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isUserInteractionEnabled_026ca770);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,0);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserInteractionEnabled__026caad8,0);
    }
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (**(code **)(local_38 + 0x10))();
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebarScroll_026b1170);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupScroll_026b1178);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar4 & 1) == 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupScroll_026b1178);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(in_d0,local_28,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setUserInteractionEnabled__026caad8,(byte)IVar2 & 1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,1);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

