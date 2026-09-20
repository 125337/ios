// wcrGrouping_bottomFloatingClearance @ 003614c0

/* Function Stack Size: 0x10 bytes */

double WCRGroupingSessionListViewController::wcrGrouping_bottomFloatingClearance
                 (ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 in_d1;
  double in_d2;
  undefined8 in_d3;
  undefined8 uVar13;
  double local_1e8;
  ID local_a8;
  ID local_98;
  ID local_88;
  ID local_78;
  double local_70;
  undefined8 local_68;
  double local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  double local_28;
  
  puVar5 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (((ulong)puVar6 & 1) == 0) {
    local_28 = 0.0;
  }
  else {
    IVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0;
    local_48 = 0.0;
    local_40 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_safeAreaInsets_026ca828);
    local_70 = 0.0;
    IVar7 = local_30;
    local_68 = uVar9;
    local_48 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = IVar8;
    (*(code *)PTR__objc_release_02578630)(IVar7);
    bVar2 = false;
    bVar1 = false;
    bVar3 = false;
    bVar4 = false;
    if (local_78 != 0) {
      IVar7 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isHidden_026ca768);
      bVar4 = false;
      if ((IVar7 & 1) == 0) {
        local_88 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar4 = false;
        if (local_88 != 0) {
          local_98 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_a8 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_window_026cabf0);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = true;
          bVar4 = local_98 == local_a8;
        }
      }
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    IVar7 = local_78;
    dVar10 = 0.0;
    if (bVar4) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
      (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_convertRect_toView__0269ded8,local_40);
      dVar12 = in_d2;
      uVar9 = in_d1;
      dVar11 = in_d2;
      uVar13 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      _CGRectGetMaxY(dVar12,uVar9,dVar11,uVar13);
      dVar11 = dVar10;
      _CGRectGetMinY(dVar10,in_d1,in_d2,in_d3);
      dVar12 = dVar12 - dVar11;
      dVar11 = dVar10;
      _CGRectGetMaxX(dVar10,in_d1,in_d2,in_d3);
      bVar3 = false;
      if (0.0 < dVar11) {
        _CGRectGetMinX();
        dVar11 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
        _CGRectGetWidth(dVar11,in_d1,in_d2,in_d3);
        bVar3 = dVar10 < dVar11;
      }
      if (((0.0 < dVar12) && (dVar12 <= 300.0)) && (bVar3)) {
        local_70 = dVar12 + 12.0;
      }
    }
    if (local_70 <= 0.0) {
      FUN_00361a9c(local_40);
    }
    if (0.0 < local_70) {
      local_1e8 = local_48 + 74.0;
      if (local_1e8 <= local_70) {
        local_1e8 = local_70;
      }
      local_70 = local_1e8;
    }
    local_28 = local_70;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_40,0);
  }
  return local_28;
}

