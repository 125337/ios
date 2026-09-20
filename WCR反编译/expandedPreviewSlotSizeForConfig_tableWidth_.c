// expandedPreviewSlotSizeForConfig:tableWidth: @ 01e74fec

/* Function Stack Size: 0x20 bytes */

CGSize WCRefineToDoCardView::expandedPreviewSlotSizeForConfig_tableWidth_
                 (ID param_1,SEL param_2,ID param_3,double param_4)

{
  CGSize CVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  double local_20;
  double local_18;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == (undefined *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  FUN_01e74e64();
  dVar7 = param_4;
  FUN_01e74f0c(local_38);
  dVar6 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_rawCardWidthForAvailableWidth_co_026c6e20,local_38);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_rawCardHeightForConfig_tableWidt_026c6e18,local_38);
  dVar4 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardOffsetX_026a8978);
  dVar5 = ABS(dVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_toDoCardOffsetY_026c6e28);
  dVar6 = ABS(dVar4) + dVar7 * dVar6;
  dVar7 = ABS(dVar5) + dVar7 * param_4;
  FUN_01e75160();
  local_20 = dVar6;
  local_18 = dVar7;
  _objc_storeStrong(&local_38,0);
  CVar1.field1_0x8 = local_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

