// collectionView:layout:referenceSizeForFooterInSection: @ 0199022c

/* Function Stack Size: 0x28 bytes */

CGSize WCRefineFileManagerViewController::collectionView_layout_referenceSizeForFooterInSection_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  CGSize CVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  double in_d2;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  double local_20;
  double dStack_18;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayEntries_026ba498);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (IVar3 == 0) {
    local_20 = *(double *)PTR__CGSizeZero_025782f8;
    dStack_18 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    dVar4 = 44.0;
    FUN_0197b3e0();
    local_20 = in_d2;
    dStack_18 = dVar4;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  CVar1.field1_0x8 = dStack_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

