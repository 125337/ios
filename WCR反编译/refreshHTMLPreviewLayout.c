// refreshHTMLPreviewLayout @ 01cd4798

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineProfileCardBeautifyViewController::refreshHTMLPreviewLayout(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double in_d2;
  double dVar6;
  double dVar7;
  double local_1f0;
  double local_1e8;
  uint local_1b4;
  ID local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined8 local_98;
  double local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  double local_48;
  byte local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewHost_026b7f50);
  _objc_retainAutoreleasedReturnValue();
  local_39 = 0;
  local_1b4 = 1;
  if (param_1 != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_htmlLivePreview_026c3688);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_1b4 = 1;
    local_38 = IVar2;
    if (IVar2 != 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshingHTMLPreviewLayout_026c36b8);
      local_1b4 = (uint)IVar2;
    }
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if ((local_1b4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRefreshingHTMLPreviewLayout__026c36c0,1)
    ;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_78 = 0x3ff0000000000000;
    local_1e8 = in_d2;
    if (in_d2 < 1.0) {
      local_1e8 = 1.0;
    }
    local_80 = local_1e8;
    local_48 = local_1e8;
    local_90 = local_1e8 - 32.0;
    local_98 = 0x3ff0000000000000;
    local_1f0 = local_90;
    if (local_90 < 1.0) {
      local_1f0 = 1.0;
    }
    local_a0 = local_1f0;
    local_88 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_profileBgHTMLPreviewWebHeight_026c3698);
    local_b0 = local_1f0 + 36.0;
    IVar2 = local_28;
    local_a8 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_htmlLivePreview_026c3688);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_b8;
    bVar1 = false;
    if (local_b8 != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = IVar2 != IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    if (bVar1) {
      uVar5 = 0;
      uVar4 = 0;
      dVar6 = local_48;
      dVar7 = local_b0;
      FUN_01cd3384();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,uVar5,dVar6,dVar7,local_b8,PTR_s_setFrame__026ca960);
    }
    uVar4 = 0x4030000000000000;
    uVar5 = 0x403a000000000000;
    FUN_01cd3384();
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_htmlLivePreview_026c3688);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    dVar7 = local_48;
    dVar6 = local_b0;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_stickyPreviewHost_026b7f50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,uVar5,dVar7,dVar6);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_htmlLivePreview_026c3688);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutStickyPreviewHost_026b7e98);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRefreshingHTMLPreviewLayout__026c36c0,0)
    ;
    _objc_storeStrong(&local_b8,0);
  }
  return;
}

