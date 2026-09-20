// refreshContainingLayoutAfterWebAutoHeightChange @ 01e8eb40

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::refreshContainingLayoutAfterWebAutoHeightChange(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double in_d2;
  double local_1a0;
  double local_178;
  ID local_100;
  undefined4 local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ID local_d0;
  ID local_c8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  double local_58;
  double local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_referenceTableWidth_026c6f08);
  dVar5 = 1.0;
  if (in_d0 <= 1.0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    dVar4 = in_d2;
    local_58 = dVar5;
    FUN_01e74e64();
    local_178 = in_d2;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_referenceTableWidth_026c6f08);
    dVar4 = in_d2;
    local_178 = in_d0;
  }
  local_40 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
  dVar3 = local_40;
  local_80 = local_178;
  dStack_78 = dVar5;
  local_70 = dVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineToDoCardView_026ce978,PTR_s_layoutCardHeightForConfig_tableW_026a8998,
             local_38);
  dStack_98 = dStack_78;
  local_a0 = local_80;
  local_90 = local_70;
  dStack_b8 = dStack_78;
  local_c0 = local_80;
  local_b0 = local_70;
  local_1a0 = dStack_78;
  dStack_a8 = dVar3;
  dStack_88 = dVar3;
  dStack_68 = dVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_enclosingTableView_026c6e68);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_c8 = IVar2;
  if (IVar2 == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_enclosingNonTableScrollView_026c7318);
    _objc_retainAutoreleasedReturnValue();
    local_100 = IVar2;
    if (IVar2 != 0) {
      dVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_contentSize_026ca5a0);
      dVar4 = local_1a0;
      dVar6 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
      _CGRectGetMaxY(dVar4,dVar6,local_70,dVar3);
      if (local_1a0 < dVar4 + 4.0) {
        local_1a0 = dVar4 + 4.0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,local_1a0,local_100,PTR_s_setContentSize__026ca8e8);
    }
    _objc_storeStrong(&local_100,0);
    local_f4 = 0;
  }
  else {
    local_f0 = PTR___NSConcreteGlobalBlock_02578658;
    local_e8 = 0xd0800000;
    local_e4 = 0;
    local_e0 = FUN_01e8eed4;
    local_d8 = &DAT_0257a9d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_performWithoutAnimation__0269e7e0,&local_f0);
    local_f4 = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_38,0);
  return;
}

