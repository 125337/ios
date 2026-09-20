// updateCollectionLayoutIfNeeded @ 01c38384

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineNameplateLibraryViewController::updateCollectionLayoutIfNeeded(ID param_1,SEL param_2)

{
  uint uVar1;
  ID IVar2;
  undefined *puVar4;
  int iVar5;
  double in_d0;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 in_d1;
  undefined8 uVar9;
  double in_d2;
  undefined8 uVar10;
  double local_178;
  ID local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  double local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined8 uStack_90;
  double local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_60;
  double local_38;
  SEL local_30;
  ID local_28;
  ID IVar3;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(in_d0,in_d1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_78 = 0x3ff0000000000000;
  if (1.0 <= in_d0) {
    uVar6 = 0;
    local_60 = 0.0;
    IVar2 = local_28;
    local_38 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = uVar6;
    local_60 = in_d2;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    dVar7 = local_60 + 90.0;
    uVar10 = 0;
    uVar6 = 0;
    uVar9 = 0;
    local_88 = dVar7;
    FUN_01c3888c();
    IVar2 = local_28;
    local_a8 = uVar6;
    uStack_a0 = uVar9;
    local_98 = dVar7;
    uStack_90 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = (uint)IVar3;
    local_c8 = uVar6;
    local_c0 = uVar9;
    local_b8 = dVar7;
    local_b0 = uVar10;
    FUN_01c388d8(uVar6,uVar9,dVar7,uVar10,local_a8,uStack_a0,local_98,uStack_90);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((uVar1 & 1) == 0) {
      uStack_e8 = uStack_a0;
      local_f0 = local_a8;
      uStack_d8 = uStack_90;
      local_e0 = local_98;
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
      _objc_retainAutoreleasedReturnValue();
      uStack_108 = uStack_e8;
      local_110 = local_f0;
      uStack_f8 = uStack_d8;
      local_100 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,uStack_e8,local_e0,uStack_d8);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      uStack_128 = uStack_a0;
      local_130 = local_a8;
      uStack_118 = uStack_90;
      local_120 = local_98;
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
      _objc_retainAutoreleasedReturnValue();
      uStack_148 = uStack_128;
      local_150 = local_130;
      uStack_138 = uStack_118;
      local_140 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,uStack_128,local_120,uStack_118);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    dVar7 = local_38;
    dVar8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastLayoutWidth_026c1a98);
    if (0.5 <= ABS(dVar7 - dVar8)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,local_28,PTR_s_setLastLayoutWidth__026c1aa0);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_collectionView_026a0fd8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_158 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_158;
      puVar4 = PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UICollectionViewFlowLayout_026ce438,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((IVar2 & 1) != 0) {
        local_178 = (double)(long)(((local_38 - 24.0) - 20.0) / 3.0);
        if (local_178 < 1.0) {
          local_178 = 80.0;
        }
        dVar7 = local_178 / DAT_02324270;
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isSelectMode_026b6440);
        iVar5 = 0x26;
        if ((IVar2 & 1) == 0) {
          iVar5 = 0x1c;
        }
        dVar7 = (double)(long)dVar7 + (double)iVar5;
        FUN_01c38978();
        (*(code *)PTR__objc_msgSend_02578628)(local_178,dVar7,local_158,PTR_s_setItemSize__026aa9f0)
        ;
      }
      _objc_storeStrong(&local_158,0);
    }
  }
  return;
}

