// onClickNewContactTagViewPageSheetDone @ 01bfdfd0

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsForwardOfficialTagSheetDelegate::onClickNewContactTagViewPageSheetDone
               (ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_collectSelectedTagNamesFromContr_026c0c38);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tagController_026c0c20);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_28 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  IVar1 = local_28;
  FUN_01bfe1c0();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_owner_026a2580);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissTagSheet_026c0c48);
  _objc_storeStrong(&local_28,0);
  return;
}

