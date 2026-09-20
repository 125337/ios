// updateColors @ 01e7b0f8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::updateColors(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_128;
  undefined *local_c0;
  undefined *local_b0;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = 0;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_traitCollection_026caba8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_31 = IVar2 == 2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_59 = 0;
  local_40 = puVar3;
  if ((local_31 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_toDoCardBackgroundColorLight_026c6f90);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar3;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_toDoCardBackgroundColorDark_026c6f88);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = puVar3;
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardContainer_026be658);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  local_69 = 0;
  local_79 = 0;
  if ((local_31 & 1) == 0) {
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardTitleColorLight_026c6fa0);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = puVar3;
  }
  else {
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardTitleColorDark_026c6f98);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = puVar3;
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  local_89 = 0;
  local_99 = 0;
  if ((local_31 & 1) == 0) {
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardDateColorLight_026c6fb0);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_98 = puVar3;
  }
  else {
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardDateColorDark_026c6fa8);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = puVar3;
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dateLabel_026c09a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  bVar1 = (local_31 & 1) == 0;
  local_128 = local_40;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardStrokeColorLight_026c6fc0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = local_128;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardStrokeColorDark_026c6fb8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_128;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a8 = local_128;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  puVar3 = local_a8;
  _objc_retainAutorelease();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_strokeLayer_026c6e88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiaryLabelColor_026aa850);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_emptyLabel_026a2668);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_refreshContentTextColorsForCurre_026c6fc8);
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_40,0);
  return;
}

