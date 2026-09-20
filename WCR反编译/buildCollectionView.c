// buildCollectionView @ 01fb9924

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineWechatThemeManagerViewController::buildCollectionView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_a8;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438,PTR_s_new_0269d288);
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setMinimumInteritemSpacing__026aa990);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4028000000000000,local_38,PTR_s_setMinimumLineSpacing__026aa988);
  uVar6 = 0x4028000000000000;
  uVar9 = 0x4030000000000000;
  uVar7 = 0x4030000000000000;
  uVar8 = 0x4038000000000000;
  FUN_01fb9f20();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSectionInset__026aa998);
  puVar1 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentFrame_026c9ef8);
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar7,uVar8,uVar9,puVar1,PTR_s_initWithFrame_collectionViewLayo_026aa9a0,local_38
            );
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCollectionView__026aa9a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  if (IVar4 == 0) {
    local_a8 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
  }
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if (IVar4 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineThemeCardCell_026cf7f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineThemeCardCell_026cf7f0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_registerClass_forCellWithReuseId_026aa9b0,puVar1,&cf_WCRThemeCard);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addGestureRecognizer__026ca4a8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addSubview__026ca4c0);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_38,0);
  return;
}

