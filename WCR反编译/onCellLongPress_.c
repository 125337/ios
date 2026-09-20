// onCellLongPress: @ 01c3f784

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateLibraryViewController::onCellLongPress_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (uVar1 == 1) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_multiSelectMode_026be908);
    if ((IVar2 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR_WCRNameplateLibraryCell_026cf498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRNameplateLibraryCell_026cf498,PTR_s_class_0269cd60);
      uVar4 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar4 & 1) == 0) {
        local_2c = 1;
      }
      else {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar4;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
        if ((uVar1 == 0) ||
           (IVar2 = local_18,
           (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isNoneItem__026c1b20,local_38),
           (IVar2 & 1) != 0)) {
          local_2c = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setPendingActionPath__026c1b38,local_38);
          IVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isSelectMode_026b6440);
          if ((IVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showLongPressActionSheet_026b64a8);
            local_2c = 0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingSelectNight__026b6490,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_commitSelection_026c0478);
            local_2c = 1;
          }
        }
        _objc_storeStrong(&local_38,0);
      }
    }
    else {
      local_2c = 1;
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

