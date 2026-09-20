// layoutItemsStack @ 01e846c4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::layoutItemsStack(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double in_d2;
  undefined8 uVar7;
  double local_38;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsStack_026c6eb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsScrollView_026c6ea0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar4 = in_d2;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_38 = in_d2;
  if (in_d2 <= 0.0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cardContainer_026be658);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = dVar4 - 24.0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  uVar7 = 0;
  uVar3 = 0;
  uVar5 = 0;
  dVar4 = local_38;
  FUN_01e728c8();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsStack_026c6eb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,uVar5,dVar4,uVar7);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsStack_026c6eb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsStack_026c6eb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsStack_026c6eb0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(PTR__UILayoutFittingCompressedSize_025781e0 + 8);
  dVar4 = local_38;
  FUN_01e75160();
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar4,uVar6,0x447a0000,0x42480000,IVar2,PTR_s_systemLayoutSizeFittingSize_with_026ad168
            );
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar7 = 0;
  uVar3 = uVar7;
  dVar4 = local_38;
  uVar5 = uVar6;
  FUN_01e728c8();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsStack_026c6eb0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar3,dVar4,uVar5);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  FUN_01e75160();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_itemsScrollView_026c6ea0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,uVar6);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

