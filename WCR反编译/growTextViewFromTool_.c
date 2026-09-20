// growTextViewFromTool: @ 00952d40

/* Function Stack Size: 0x18 bytes */

ID WCRClipboardHistoryPanelController::growTextViewFromTool_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = local_38;
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    _objc_storeStrong(&local_38,0);
    if (bVar1) goto LAB_00952ec8;
  }
  uVar2 = local_30;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar3;
  }
LAB_00952ec8:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

