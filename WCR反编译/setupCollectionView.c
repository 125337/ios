// setupCollectionView @ 01fa7e9c

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::setupCollectionView(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double in_d2;
  undefined8 uVar8;
  double local_d8;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc_init();
  IVar3 = local_28;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar5 = (in_d2 - 40.0) / 3.0;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  dVar6 = dVar5 + 30.0;
  FUN_01fa8478();
  (*(code *)PTR__objc_msgSend_02578628)(dVar5,dVar6,local_38,PTR_s_setItemSize__026aa9f0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,local_38,PTR_s_setMinimumInteritemSpacing__026aa990);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4024000000000000,local_38,PTR_s_setMinimumLineSpacing__026aa988);
  uVar7 = 0x4024000000000000;
  uVar8 = 0x4024000000000000;
  dVar6 = 10.0;
  FUN_01fa84a4();
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,local_38,PTR_s_setSectionInset__026aa998);
  local_d8 = 0.0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  bVar1 = false;
  if (local_d8 <= 0.0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  if (bVar1) {
    local_d8 = 64.0;
  }
  dVar5 = local_d8 + 44.0;
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar6 = (dVar6 - local_d8) - 44.0;
  uVar7 = 0;
  FUN_01fa74bc();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar2 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,dVar5,uVar8,dVar6);
  uVar7 = *(undefined8 *)(local_28 + (long)_collectionView);
  *(undefined8 *)(local_28 + (long)_collectionView) = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar7);
  puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_collectionView),PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_collectionView),PTR_s_setDelegate__026ca910,local_28)
  ;
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_collectionView),PTR_s_setDataSource__026a2640,
             local_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_28 + (long)_collectionView),PTR_s_setAutoresizingMask__026ca878,
             0x12);
  uVar7 = *(undefined8 *)(local_28 + (long)_collectionView);
  puVar2 = PTR__OBJC_CLASS___UICollectionViewCell_026cf078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UICollectionViewCell_026cf078,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar7,PTR_s_registerClass_forCellWithReuseId_026aa9b0,puVar2,&cf_WatermarkCell);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  _objc_storeStrong(&local_38,0);
  return;
}

