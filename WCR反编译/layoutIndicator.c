// layoutIndicator @ 01e57524

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramTabStripView::layoutIndicator(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double in_d0;
  double dVar9;
  double dVar10;
  undefined8 in_d1;
  double in_d2;
  undefined8 in_d3;
  double local_210;
  double local_128;
  undefined *local_b8;
  double local_b0;
  double local_a0;
  double local_70;
  undefined8 uStack_68;
  double local_60;
  undefined8 uStack_58;
  undefined4 local_44;
  ID local_40;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wrapAnimating_026c6980);
  if ((param_1 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar3 = local_28;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedButton_026c6988);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar3;
    if ((IVar3 == 0) || (local_38 == (undefined1 *)((long)&MACH_HEADER.magic + 3))) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indicatorView_026c6920);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      local_44 = 1;
    }
    else {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indicatorView_026c6920);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_indicatorFrameForButton_style__026c6990,local_40,local_38);
      IVar3 = local_28;
      local_70 = in_d0;
      uStack_68 = in_d1;
      local_60 = in_d2;
      uStack_58 = in_d3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewTabId_026c6998);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if (IVar4 == 0) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wrapAnimating_026c6980);
        if ((IVar3 & 1) == 0) {
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indicatorView_026c6920);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
      }
      else {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_interactiveTransition_026c69a0);
        dVar9 = in_d0;
        if ((IVar3 & 1) != 0) {
          dVar9 = in_d2;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_interactiveStartFrame_026c69a8);
          in_d2 = dVar9;
          local_70 = in_d0;
          uStack_68 = in_d1;
          local_60 = dVar9;
          uStack_58 = in_d3;
        }
        IVar3 = local_28;
        IVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewTabId_026c6998);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_buttonForTabId__026c6978);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_indicatorFrameForButton_style__026c6990,IVar5,local_38);
        local_b0 = dVar9;
        local_a0 = in_d2;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_release_02578630)(IVar4);
        puVar1 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_b8 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_b8;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedTabId_026b01c8);
        _objc_retainAutoreleasedReturnValue();
        FUN_01e57eb8();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        puVar6 = local_b8;
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewTabId_026c6998);
        _objc_retainAutoreleasedReturnValue();
        FUN_01e57eb8();
        (*(code *)PTR__objc_release_02578630)(IVar3);
        puVar7 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
        puVar8 = puVar1;
        FUN_01e58024(puVar1,puVar6,puVar7);
        FUN_01e58090(puVar1,puVar6,puVar7);
        if ((((ulong)puVar8 & 1) == 0) && (((ulong)puVar1 & 1) == 0)) {
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indicatorView_026c6920);
          _objc_retainAutoreleasedReturnValue();
          local_210 = 1.0;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        else {
          dVar9 = local_70;
          dVar10 = local_60;
          FUN_01e580f8((byte)puVar8 & 1);
          local_210 = 0.0;
          local_b0 = dVar9;
          local_a0 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewProgress_026c69b0);
          local_210 = 1.0 - local_210;
          if (local_210 <= 0.0) {
            local_210 = 0.0;
          }
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indicatorView_026c6920);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewProgress_026c69b0);
        local_70 = local_70 + local_210 * (local_b0 - local_70);
        local_60 = local_60 + local_210 * (local_a0 - local_60);
        _objc_storeStrong(&local_b8,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
      dVar9 = local_70;
      _CGRectGetHeight(local_70,uStack_68,local_60,uStack_58);
      dVar9 = dVar9 / 2.0;
      puVar1 = PTR_WCRefineConfig_026cdf58;
      dVar10 = dVar9;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_128 = dVar9;
      if (((local_38 == (undefined1 *)0x0) && (0.0 < dVar10)) &&
         (local_128 = dVar10, dVar9 < dVar10)) {
        local_128 = dVar9;
      }
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indicatorView_026c6920);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_128);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indicatorView_026c6920);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      dVar10 = local_60;
      dVar9 = local_70;
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_indicatorView_026c6920);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar9,uStack_68,dVar10,uStack_58);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
      local_44 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  return;
}

