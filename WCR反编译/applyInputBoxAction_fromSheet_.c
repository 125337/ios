// applyInputBoxAction:fromSheet: @ 01a5466c

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

void WCRefineGeneralFunctionViewController::applyInputBoxAction_fromSheet_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte local_7c;
  ID local_70;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  ID local_40;
  ID local_38 [3];
  SEL local_20;
  ID local_18;
  
  local_38[2] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  local_70 = local_18;
  _objc_getAssociatedObject(local_18,"wcr_input_box_picker_slot");
  _objc_retainAutoreleasedReturnValue();
  local_38[0] = local_70;
  if (local_70 == 0) {
    local_70 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_integerValue_026ca750);
  }
  local_40 = local_70;
  puVar1 = PTR_WCRefineInputBoxGestureSupport_026ce678;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_normalizedAction__026a3438,
             local_38[2]);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineInputBoxGestureSupport_026ce678;
  local_51 = 0;
  local_50 = puVar2;
  if (local_40 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setInputBoxSwipeLeftAction__026bccd8,local_48);
  }
  else if (local_40 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setInputBoxSwipeRightAction__026bcce0,local_48);
  }
  else if (local_40 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_inputBoxLongPressAction_026a3430);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_normalizedAction__026a3438);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
    local_7c = 0;
    if (((ulong)puVar1 & 1) != 0) {
      puVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
      local_7c = (byte)puVar1 ^ 1;
    }
    local_51 = local_7c & 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setInputBoxLongPressAction__026bcce8,local_48);
    _objc_storeStrong(&local_60,0);
  }
  else if (local_40 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_setInputBoxDoubleTapAction__026bccf0,local_48);
  }
  else if (local_40 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setInputBoxSwipeUpAction__026bccf8,local_48);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_showInputBoxLongPressEmptyOnlyTi_026bcc40);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

