// chipTapped: @ 01b64cc0

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::chipTapped_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_48;
  uint local_3c;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  local_30 = 0;
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar4 = local_28;
  if ((uVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar4 & 1) != 0) {
      _objc_storeStrong(&local_30,local_28);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_state_026cab20);
    if (uVar4 == 3) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_30;
      local_30 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_3c = (uint)(uVar4 != 3);
    _objc_storeStrong(&local_38,0);
    if (local_3c != 0) goto LAB_01b64f40;
  }
  if (local_30 == 0) {
    local_3c = 1;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_accessibilityIdentifier_0269ec20);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isEqualToString__0269ccc8,&cf___new__);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,&cf___manage__)
      ;
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_applyFilterPackRel__026bf950,local_48);
        local_3c = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_presentManageSheet_026bf948);
        local_3c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_promptCreatePack_026bf940);
      local_3c = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
LAB_01b64f40:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

