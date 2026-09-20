// currentBackgroundMediaFrameForContentSize: @ 01e7d0c0

/* Function Stack Size: 0x20 bytes */

CGRect WCRefineToDoCardView::currentBackgroundMediaFrameForContentSize_
                 (ID param_1,SEL param_2,CGSize param_3)

{
  CGRect CVar1;
  undefined *puVar2;
  ID IVar3;
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  double local_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_a8;
  double local_a0;
  double local_68;
  undefined *local_58;
  SEL local_50;
  ID local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = in_d0;
  local_38 = in_d1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0,param_3.field0_0x0,param_3.field1_0x8
            );
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_48;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDarkModeForBackgroundMedia_026c6fd0);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardBackgroundMediaScaleLigh_026c7038);
    local_d0 = in_d0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardBackgroundMediaScaleDark_026c7030);
    local_d0 = in_d0;
  }
  local_68 = local_d0;
  local_d8 = local_d0;
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardBackgroundMediaOffsetXLi_026c7048);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardBackgroundMediaOffsetXDa_026c7040);
  }
  local_e0 = local_d8;
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardBackgroundMediaOffsetYLi_026c7058);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_toDoCardBackgroundMediaOffsetYDa_026c7050);
  }
  if (local_d0 <= 0.0) {
    local_68 = 1.0;
  }
  IVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_cardContainer_026be658);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  local_a0 = in_d2 * local_68;
  local_a8 = in_d3 * local_68;
  if ((((1.0 < local_40) && (1.0 < local_38)) && (1.0 < in_d2)) && (1.0 < in_d3)) {
    local_f0 = in_d2 / local_40;
    if (local_f0 < in_d3 / local_38) {
      local_f0 = in_d3 / local_38;
    }
    local_a0 = local_40 * local_f0 * local_68;
    local_a8 = local_38 * local_f0 * local_68;
  }
  local_d8 = local_d8 + (in_d2 - local_a0) * 0.5;
  local_e0 = local_e0 + (in_d3 - local_a8) * 0.5;
  FUN_01e728c8();
  local_30 = local_d8;
  local_28 = local_e0;
  local_20 = local_a0;
  local_18 = local_a8;
  _objc_storeStrong(&local_58,0);
  CVar1.field0_0x0.field1_0x8 = local_28;
  CVar1.field0_0x0.field0_0x0 = local_30;
  CVar1.field1_0x10.field0_0x0 = local_20;
  CVar1.field1_0x10.field1_0x8 = local_18;
  return CVar1;
}

