// prepareLayout @ 01b06a54

/* Function Stack Size: 0x10 bytes */

void WCRefineCardPageFlowLayout::prepareLayout(ID param_1,SEL param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double in_d1;
  double dVar11;
  double dVar12;
  double dVar13;
  double in_d2;
  double in_d3;
  long local_328;
  long local_2f8;
  ulong local_268;
  undefined *local_220;
  undefined *local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  long local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  double local_198;
  double local_190;
  long local_188;
  long local_180;
  int local_174;
  double local_170;
  double local_160;
  double local_148;
  double local_140;
  double local_130;
  long local_128;
  long local_120;
  int local_114;
  double local_110;
  double local_d0;
  ID local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  double local_80;
  double dStack_78;
  ID local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ID local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = PTR_WCRefineCardPageFlowLayout_026cfe80;
  local_40 = param_1;
  local_30 = param_2;
  local_28 = param_1;
  _objc_msgSendSuper2(&local_40,PTR_s_prepareLayout_026be800);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setAttributesCache__026be808);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar4 == 0) {
    uStack_58 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
    local_60 = *(undefined8 *)PTR__CGSizeZero_025782f8;
    local_50 = local_60;
    uStack_48 = uStack_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,uStack_58,local_28,PTR_s_setContentSize__026ca8e8);
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    local_68 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = in_d2;
    dStack_78 = in_d3;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    if ((local_80 <= 0.0) || (dStack_78 <= 0.0)) {
      uStack_b8 = *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8);
      local_c0 = *(undefined8 *)PTR__CGSizeZero_025782f8;
      local_b0 = local_c0;
      uStack_a8 = uStack_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,uStack_b8,local_28,PTR_s_setContentSize__026ca8e8);
    }
    else {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardsPerPage_026be818);
      local_c8 = IVar4;
      if (IVar4 == 0) {
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_columns_026be820);
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rows_026be828);
        local_c8 = IVar4 * IVar5;
      }
      if (local_c8 == 0) {
        local_c8 = 1;
      }
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_columns_026be820);
      if (IVar4 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setColumns__026be830,1);
      }
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rows_026be828);
      if (IVar4 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRows__026be838,1);
      }
      dVar12 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageInsets_026be840);
      dVar7 = dVar12 - in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageInsets_026be840);
      dVar8 = (dVar12 - in_d1) - in_d3;
      dVar13 = dVar8;
      local_110 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_interItemSpacing_026be848);
      local_114 = 0;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_columns_026be820);
      dVar12 = dStack_78;
      local_120 = IVar4 - 1;
      local_2f8 = local_120;
      if (local_120 <= local_114) {
        local_2f8 = (long)local_114;
      }
      local_128 = local_2f8;
      dVar11 = (double)local_2f8;
      local_d0 = dVar8 - dVar11 * dVar13;
      dVar7 = dStack_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageInsets_026be840);
      dVar13 = dVar12 - dVar7;
      local_148 = dVar11;
      local_140 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageInsets_026be840);
      dVar11 = (dVar12 - dVar7) - dVar8;
      dVar7 = dVar11;
      local_170 = dVar13;
      local_160 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lineSpacing_026be850);
      local_174 = 0;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rows_026be828);
      dVar12 = local_d0;
      local_180 = IVar4 - 1;
      local_328 = local_180;
      if (local_180 <= local_174) {
        local_328 = (long)local_174;
      }
      local_188 = local_328;
      local_130 = dVar11 - (double)local_328 * dVar7;
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_columns_026be820);
      dVar7 = local_130;
      local_190 = (double)(long)(dVar12 / (double)IVar4);
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_rows_026be828);
      dVar12 = (double)IVar4;
      local_198 = (double)(long)(dVar7 / dVar12);
      for (local_1a0 = 0; (long)local_1a0 < (long)local_68; local_1a0 = local_1a0 + 1) {
        local_1a8 = 0;
        if (local_c8 != 0) {
          local_1a8 = local_1a0 / local_c8;
        }
        uVar1 = 0;
        if (local_c8 != 0) {
          uVar1 = local_1a0 / local_c8;
        }
        uVar1 = local_1a0 - uVar1 * local_c8;
        IVar4 = local_28;
        local_1b0 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_columns_026be820);
        uVar2 = local_1b0;
        local_1b8 = 0;
        if (IVar4 != 0) {
          local_1b8 = uVar1 / IVar4;
        }
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_columns_026be820);
        dVar7 = local_80;
        uVar1 = 0;
        if (IVar4 != 0) {
          uVar1 = uVar2 / IVar4;
        }
        local_1c0 = uVar2 - uVar1 * IVar4;
        dVar8 = (double)NEON_ucvtf(local_1a8);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageInsets_026be840);
        dVar13 = local_190;
        dVar9 = dVar12 + dVar7 * dVar8;
        dVar8 = (double)NEON_ucvtf(local_1c0);
        dVar7 = local_190;
        local_1e0 = dVar12;
        local_1d8 = dVar11;
        local_1d0 = in_d3;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_interItemSpacing_026be848);
        dVar13 = dVar13 + dVar7;
        dVar11 = dVar9 + dVar13 * dVar8;
        local_1c8 = dVar11;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pageInsets_026be840);
        dVar12 = local_198;
        dVar10 = (double)NEON_ucvtf(local_1b8);
        dVar8 = local_198;
        local_210 = dVar11;
        local_208 = dVar13;
        local_200 = dVar9;
        local_1f8 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lineSpacing_026be850);
        local_1f0 = dVar11 + (dVar12 + dVar8) * dVar10;
        puVar3 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSIndexPath_026ce288,PTR_s_indexPathForItem_inSection__026a3d28
                   ,local_1a0,0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_026cf368;
        local_218 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_026cf368,
                   PTR_s_layoutAttributesForCellWithIndex_026be858,puVar3);
        _objc_retainAutoreleasedReturnValue();
        dVar7 = local_1c8;
        dVar12 = local_1f0;
        dVar11 = local_190;
        in_d3 = local_198;
        local_220 = puVar6;
        FUN_01b05ae4();
        (*(code *)PTR__objc_msgSend_02578628)(dVar7,local_220,PTR_s_setFrame__026ca960);
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_attributesCache_026be860);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar4);
        _objc_storeStrong(&local_220);
        _objc_storeStrong(&local_218,0);
      }
      local_268 = 0;
      if (local_c8 != 0) {
        local_268 = ((local_68 + local_c8) - 1) / local_c8;
      }
      if (local_268 == 0) {
        local_268 = 1;
      }
      dVar12 = (double)NEON_ucvtf(local_268);
      dVar12 = dVar12 * local_80;
      FUN_01b0521c();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar12,dStack_78,local_28,PTR_s_setContentSize__026ca8e8);
    }
  }
  return;
}

