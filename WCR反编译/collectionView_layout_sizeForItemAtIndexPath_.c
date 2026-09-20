// collectionView:layout:sizeForItemAtIndexPath: @ 01fbd094

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

CGSize WCRefineWechatThemeManagerViewController::collectionView_layout_sizeForItemAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  CGSize CVar1;
  undefined *puVar2;
  ulong uVar3;
  int iVar4;
  double in_d0;
  double in_d1;
  double dVar5;
  double dVar6;
  undefined8 in_d2;
  double in_d3;
  double dVar7;
  double local_e0;
  ulong local_d0;
  double local_b0;
  ulong local_50 [4];
  SEL local_30;
  ID local_28;
  double local_20;
  double local_18;
  
  local_50[3] = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_50 + 3,param_3);
  local_50[2] = 0;
  _objc_storeStrong(local_50 + 2,param_4);
  local_50[1] = 0;
  _objc_storeStrong(local_50 + 1,param_5);
  uVar3 = local_50[2];
  puVar2 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_50[2];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_d0;
  if (local_d0 == 0) {
    local_e0 = 12.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_minimumInteritemSpacing_026b4e50);
    local_e0 = in_d0;
  }
  if (local_50[0] == 0) {
    dVar6 = 12.0;
    in_d3 = 16.0;
    in_d1 = 16.0;
    in_d2 = 0x4038000000000000;
    FUN_01fb9f20();
  }
  else {
    dVar6 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_sectionInset_026b4e48);
  }
  dVar5 = in_d1;
  dVar7 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50[3],PTR_s_bounds_026ca548);
  _CGRectGetWidth(dVar6,dVar5,in_d2,dVar7);
  in_d3 = (dVar6 - in_d1) - in_d3;
  iVar4 = 3;
  if (in_d3 <= 520.0) {
    iVar4 = 2;
  }
  local_b0 = (double)(long)((in_d3 - (double)((long)iVar4 + -1) * local_e0) / (double)(long)iVar4);
  if (local_b0 < 80.0) {
    local_b0 = 80.0;
  }
  dVar6 = (double)(long)(local_b0 * DAT_02323d60) + 52.0;
  FUN_01fb648c();
  local_20 = local_b0;
  local_18 = dVar6;
  _objc_storeStrong(local_50);
  _objc_storeStrong(local_50 + 1,0);
  _objc_storeStrong(local_50 + 2,0);
  _objc_storeStrong(local_50 + 3,0);
  CVar1.field1_0x8 = local_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

