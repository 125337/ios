// beginInteractiveTransition @ 01e581b0

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramTabStripView::beginInteractiveTransition(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  IVar1 = param_1;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wrapGeneration_026c69b8);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWrapGeneration__026c69c0,IVar1 + 1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWrapAnimating__026c69c8,0);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_indicatorView_026c6920);
  _objc_retainAutoreleasedReturnValue();
  local_50 = 0x3ff0000000000000;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_indicatorView_026c6920);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_presentationLayer_026ca7e0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    uStack_48 = in_d1;
    local_40 = in_d2;
    uStack_38 = in_d3;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_frame_026ca640);
    uStack_48 = in_d1;
    local_40 = in_d2;
    uStack_38 = in_d3;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,uStack_48,local_40,uStack_38,local_18,PTR_s_setInteractiveStartFrame__026c69d0
            );
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_removeAnimationForKey__026ca7f0,&cf_wcr_tg_indicator);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setInteractiveTransition__026c69d8,1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedTabId_026b01c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPreviewTabId__026c69e0);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  uVar3 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPreviewProgress__026c69e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layoutIndicator_026c6938);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,uStack_48,IVar1,PTR_s_setContentOffset_animated__0269ddd8,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

