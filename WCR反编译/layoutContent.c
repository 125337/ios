// layoutContent @ 01c37f64

/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateLibraryViewController::layoutContent(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_d2;
  double in_d3;
  double dVar8;
  double local_88;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_88 = 0.0;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  bVar1 = false;
  if (local_88 <= 0.0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    local_88 = 64.0;
  }
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchVisible_026ba6e8);
  iVar3 = 0x2c;
  if ((IVar2 & 1) == 0) {
    iVar3 = 0;
  }
  dVar4 = (double)iVar3;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchVisible_026ba6e8);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchBar_026a2698);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar5 = 0;
  dVar7 = local_88;
  uVar6 = in_d2;
  dVar8 = dVar4;
  FUN_01c36640();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_searchBar_026a2698);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,dVar7,uVar6,dVar8);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  uVar6 = 0;
  dVar7 = local_88 + dVar4;
  dVar4 = (in_d3 - local_88) - dVar4;
  FUN_01c36640();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,dVar7,in_d2,dVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_updateCollectionLayoutIfNeeded_026c1a90);
  return;
}

