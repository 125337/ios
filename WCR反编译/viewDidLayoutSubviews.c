// viewDidLayoutSubviews @ 01fa84f0

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::viewDidLayoutSubviews(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_d2;
  double in_d3;
  undefined8 uVar6;
  double dVar7;
  double local_98;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = PTR_WCRefineWatermarkLibraryViewController_026d02b0;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSendSuper2(&local_40,PTR_s_viewDidLayoutSubviews_0269de90);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_98 = 0.0;
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  bVar1 = false;
  if (local_98 <= 0.0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (bVar1) {
    local_98 = 64.0;
  }
  uVar6 = 0x4046000000000000;
  uVar3 = 0;
  dVar5 = local_98;
  uVar4 = in_d2;
  FUN_01fa74bc();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,dVar5,uVar4,uVar6,*(undefined8 *)(local_28 + (long)_searchBar),
             PTR_s_setFrame__026ca960);
  uVar4 = 0;
  dVar5 = local_98 + 44.0;
  dVar7 = (in_d3 - local_98) - 44.0;
  FUN_01fa74bc();
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,dVar5,in_d2,dVar7,*(undefined8 *)(local_28 + (long)_collectionView),
             PTR_s_setFrame__026ca960);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  return;
}

